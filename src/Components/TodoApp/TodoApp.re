[@react.component]
let make = () => {
  // state of text input
  let (currentTodo, setCurrentTodo) = React.useState(() => "");
  // state of items list
  let (currentItems, setCurrentItems) = React.useState(() => ListAPI.fetchListItems());

  let onValueChange = _event => {
    let newValue = _event -> ReactEvent.Form.target##value;
    Js.log("New Value: " ++ newValue);
    setCurrentTodo(_ => newValue);
  }

  let onAddTodoClick = _event => { 
    Js.log("Add todo clicked!");
    setCurrentItems(_ => ListAPI.createNewItem(currentTodo));
    setCurrentTodo(_ => "");
  };

  let onEditTodoClick = (id, newName) =>  { 
    Js.log("Edit todo clicked! Id: " ++ string_of_int(id) ++ " Value: " ++ newName);
    setCurrentItems(_ => ListAPI.editItem(id, newName));
  };

  let onDeleteTodoClick = id =>  { 
    Js.log("Delete todo clicked! Id: " ++ string_of_int(id));
    setCurrentItems(_ => ListAPI.deleteItem(id));
  };
   
  <div style={ReactDOMRe.Style.make(
      ~height="2em",
      ~display="flex",
      ~alignItems="start",
      ~justifyContent="flex-start",
      ~flexDirection="column",
      (),
    )}>
    <div style={ReactDOMRe.Style.make(
      ~height="2em",
      ~display="flex",
      ~alignItems="start",
      ~justifyContent="flex-start",
      (),
    )}>
      <InputTodo onValueChange currentValue=currentTodo/>
      <AddTodoButton onAddTodoClick />
    </div>
    <TodoList items=Array.of_list(currentItems)  onDeleteTodoClick  onEditTodoClick />
  </div>
}
