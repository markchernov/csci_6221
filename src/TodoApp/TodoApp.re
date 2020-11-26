[@react.component]
let make = () => {
  // state of text input
  let (currentTodo, setCurrentTodo) = React.useState(() => "");
  // state of items list
  let (currentItems: list(Types.listItem), setCurrentItems) = React.useState(() => []);

  let onValueChange = _event => {
    Js.log("Current Todo: " ++ currentTodo);
    let newValue = _event -> ReactEvent.Form.target##value;
    Js.log("New Value: " ++ newValue);
    setCurrentTodo(_ => newValue);
  }

  let onAddTodoClick = _event => { 
    Js.log("Add todo clicked!");
    let itemId =  Random.int(100);
    setCurrentItems(_ => [{id: itemId, name: currentTodo}, ...currentItems]);
    setCurrentTodo(_ => "");
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
   <TodoList items = Array.of_list(currentItems) />
  </div>
}
