[@react.component]
let make = (~onAddTodoClick ) =>  {
    <button style={ReactDOMRe.Style.make(
      ~cursor="pointer",
      (),
    )} onClick=onAddTodoClick > {ReasonReact.string("Add todo!")} </button>;
}