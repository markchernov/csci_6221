[@react.component]
let make = (~name, ~setNewName) => <input style={ReactDOMRe.Style.make(
      ~margin="1em",
      (),
    )} value=name onChange={ event => { 
      let value = ReactEvent.Form.target(event)##value;
      setNewName(_ => value) 
      
      }}></input>;