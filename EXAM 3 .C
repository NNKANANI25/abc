//WRITE A C PROGRAM  THAT DEFINS A FUNCTION TO PRINT A REVERSE 1D ARRAY ELEMENT AND PRINT SUM OF ALL ELEMENTS
#include <stdio.h>

void printReverse(int arr[], int size) {
  printf("Reversed array: ");
  for (int i = size - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int sumArray(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printReverse(arr, size);
  
  int sum = sumArray(arr, size);
  printf("Sum of array elements: %d\n", sum);
  
  return 0;
}
/*OUTPUT
Reversed array: 5 4 3 2 1
Sum of array elements: 15
*/
