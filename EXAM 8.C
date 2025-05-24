#include<stdio.h>

void printfreverse(int arr[],int size){
	printf("reversed array: ");
	for(int i=size-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
int sumarray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++)
	{
	sum +=arr[i];
}
return sum;
}
int main()
{
	int arr[] = {1 ,2 ,3 ,4 ,5 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum;
	
	printfreverse(arr,size);
	sum=sumarray(arr,size);
	
	printf("sum of the array : %d",sum);
}
/*OUTPUT
reversed array: 54321
sum of the array : 15
*/