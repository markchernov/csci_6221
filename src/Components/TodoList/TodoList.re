[@react.component]
let make = (~items: Types.arrayData, ~onDeleteTodoClick, ~onEditTodoClick) => 
    <div style={ReactDOMRe.Style.make(
      ~paddingTop="2em",
      (),
    )}>
    {
      items
      ->Belt.Array.map(item =>
        <div key=string_of_int(item.id) style={ReactDOMRe.Style.make(
           ~display="flex",
           ~alignItems="center",
           ~justifyContent="left",
           (),
         )} > <DisplayTodo item onDeleteTodoClick onEditTodoClick/></div>
        )     
      ->React.array
    }
  </div>;
