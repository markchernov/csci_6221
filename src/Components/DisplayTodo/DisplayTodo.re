[@react.component]
let make = (~item: Types.listItem, ~onDeleteTodoClick) =>  
   <> <DeleteTodo onDeleteTodoClick id=item.id/> <p style={ReactDOMRe.Style.make(
      ~paddingLeft="1em",
      (),
    )}> {React.string(item.name)}</p> </>;