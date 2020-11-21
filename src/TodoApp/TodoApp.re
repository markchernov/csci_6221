let todo1: Types.listItem = {
  id: 41,
  name: "ABC",
};
let todo2: Types.listItem = {
  id: 42,
  name: "QWE",
};
let todo3: Types.listItem = {
  id: 43,
  name: "XYZ",
};

let exampleList: Types.arrayData = Array.of_list([todo1, todo2, todo3]);


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
   <AddTodo />
   <TodoList  items = exampleList />
  </div>
}
