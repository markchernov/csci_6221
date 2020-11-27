[@react.component]
let make = (~setIsEdit) =>  
    <img style={ReactDOMRe.Style.make(
      ~cursor="pointer",
      ~marginLeft="0.5em",
      (),
    )}  src="/assets/edit.png" alt="Edit Icon" width="20" height="20" onClick={_ => setIsEdit(_ => true)}/>;