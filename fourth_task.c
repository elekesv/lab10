/* Task description:
Write a recursive function to print the elements of an array a) forwards b) backwards. Both functions should receive the array and its size on the parameter list. 
Create in main an array of five, and another one of ten integers (initialized). Call both functions for both arrays.

*/


#include <stdio.h>

void writearrforward(int* arr, int size){
  if(size == 0)
    return;
  printf("%d", arr[0]);
  writearrforward(arr+1,size-1);
}
void writeback(int* arr, int size){
  if(size == 1){
    printf("%d", arr[0]);
    return;
  }
  writeback(arr+1, size-1);
  printf("%d", arr[0]);
}

int main(){
  int arr[] = {1,2,3,4,5,8};
  writearrforward(arr, 6);
  printf("\n");
  writeback(arr, 6);


  return 0;
}
