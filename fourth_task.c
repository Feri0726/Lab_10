/* Task description:
Write a recursive function to print the elements of an array a) forwards b) backwards. Both functions should receive the array and its size on the parameter list. 
Create in main an array of five, and another one of ten integers (initialized). Call both functions for both arrays.

*/


#include <stdio.h>

void printer(int *array, int size){
  if (size == 0) return;
  printf("%d ", array[0]);
  printer(array+1, size-1);
}
void back(int *array, int size){
  if (size == 0) return;
  printf("%d ", array[9]);
  back(array-1, size-1);
}





int main(){
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  printer(array, 10);
  printf("\n");
  back(array, 10);

  return 0;
}
