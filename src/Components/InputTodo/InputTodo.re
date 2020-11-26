[@react.component]
let make = (~onValueChange, ~currentValue) => <textarea placeholder="Type here..." onChange=onValueChange value=currentValue></textarea>;