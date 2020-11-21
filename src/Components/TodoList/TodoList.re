[@react.component]
let make = (~items: Types.arrayData) => 
    <ul>
    {
      items
      ->Belt.Array.map(item =>
          <li key={string_of_int(item.id)}> {React.string(item.name)} </li>
        )     
      ->React.array
    }
  </ul>;
