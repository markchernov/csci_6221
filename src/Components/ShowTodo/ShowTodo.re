 [@react.component]
let make = (~name) =>  
    <p style={ReactDOMRe.Style.make(
      ~paddingLeft="1em",
      (),
    )}> {React.string(name)}
    </p>;