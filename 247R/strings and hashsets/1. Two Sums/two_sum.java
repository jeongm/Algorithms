public int[] twoSum(int target, int[] myArray){
  int temp = new int();
  int[] index = new int[2];
  index = [-1,-1];

  for(int i = 0; i < myArray.length(); i++){
    temp = target - myArray[i];
    for (int j = 0; j < myArray.length(); j++){
      if (temp = myArray[j] && j != i){
        index[0] = i;
        index[1] = j;
        return index;
      }
    }
  }
  return index;
}
