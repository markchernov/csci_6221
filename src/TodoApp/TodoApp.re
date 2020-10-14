[@react.component]
let make = (~name) => {
  <div style={ReactDOMRe.Style.make(
      ~height="2em",
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="flex-start",
      (),
    )}>
   <InputTodo />
   <AddTodo/>
  </div>
}
