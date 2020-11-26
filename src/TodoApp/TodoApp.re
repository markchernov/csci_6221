[@react.component]
let make = () => {
  // state of text input
  let (currentTodo, setCurrentTodo) = React.useState(() => "");
  // state of items list
  let (currentItems: list(Types.listItem), setCurrentItems) = React.useState(() => []);

  let onValueChange = _event => {
    let newValue = _event -> ReactEvent.Form.target##value;
    Js.log("New Value: " ++ newValue);
    setCurrentTodo(_ => newValue);
  }

  let onAddTodoClick = _event => { 
    Js.log("Add todo clicked!");
    setCurrentItems(_ => [{id: Random.int(1000), name: currentTodo}, ...currentItems]);
    setCurrentTodo(_ => "");
  };

  let onDeleteTodoClick = id =>  { 
    Js.log("Delete todo clicked! Id: " ++ string_of_int(id));
    let updatedItems = Belt.List.keep(currentItems, item => item.id != id);
    setCurrentItems(_ => updatedItems);
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
      <AddTodo onAddTodoClick />
    </div>
    <TodoList items=Array.of_list(currentItems)  onDeleteTodoClick  />
  </div>
}
