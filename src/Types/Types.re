type listItem = {
  id: int,
  name: string,
};

type listData = {
  listItems: list(listItem),
};

type arrayData = array(listItem)
