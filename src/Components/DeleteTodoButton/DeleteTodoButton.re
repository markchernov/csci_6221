[@react.component]
let make = (~onDeleteTodoClick, ~id) =>  
    <img style={ReactDOMRe.Style.make(
      ~cursor="pointer",
      (),
    )}  src="/assets/delete.png" alt="Delete Icon" width="20" height="20" onClick={_ => onDeleteTodoClick(id)}/>;