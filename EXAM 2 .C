//write a c program to find the sum of element in an array using a function
#include<stdio.h>
int sum_array_elements( int arr[], int n ) 
{
  if (n < 0) 
  {
    return 0;
  } else
  {
    return arr[n] + sum_array_elements(arr, n-1);
  }
}
int main()
{
  int array[] = {1,2,3,4,5};
  int sum;
  sum = sum_array_elements(array,4);
  printf("Sum of array elements is: %d",sum);
  return 0;
}

/*OUTPUT
Sum of array elements is: 15
*/

