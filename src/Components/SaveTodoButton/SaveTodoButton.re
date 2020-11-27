[@react.component]
let make = (~saveChanges) =>  
    <img style={ReactDOMRe.Style.make(
      ~cursor="pointer",
      ~marginLeft="0.5em",
      (),
    )}  src="/assets/save.png" alt="Save Icon" width="20" height="20" onClick={event => saveChanges(event)}/>;