[@react.component]
let make = (~item: Types.listItem, ~onDeleteTodoClick, ~onEditTodoClick) =>  {
   // state of edit
   let (isEdit, setIsEdit) = React.useState(() => false);
   // state of new name
   let (newName, setNewName) = React.useState(() => item.name);

   let saveChanges = _event => {    
      Js.log("Save Changes New Name: " ++ newName); 
      onEditTodoClick(item.id, newName);
      setIsEdit(_ => false);
   };

   <>
   <DeleteTodoButton onDeleteTodoClick id=item.id/> 
   { isEdit ? <SaveTodoButton saveChanges/> : <EditTodoButton setIsEdit /> }
   { isEdit ? <EditTodoInput name=newName setNewName/> : <ShowTodo name=item.name /> }
   </>
};
   