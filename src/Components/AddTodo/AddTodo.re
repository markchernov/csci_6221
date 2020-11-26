[@react.component]
let make = (~onAddTodoClick ) =>  {
    <button onClick=onAddTodoClick > {ReasonReact.string("Add todo!")} </button>;
}