[@react.component]
let make = (~items: Types.arrayData) => 
    <ul style={ReactDOMRe.Style.make(
      ~paddingTop="1em",
      (),
    )}>
    {
      items
      ->Belt.Array.map(item =>
          <li key={string_of_int(item.id)}> {React.string(item.name)} </li>
        )     
      ->React.array
    }
  </ul>;
