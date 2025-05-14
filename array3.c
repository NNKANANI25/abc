#include<stdio.h>
int main()
{
	int size[5];
	int arr1[5],arr2[5],sum_arr[5];
	
	printf("enter elements of the first array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[1]);
	}
	printf("enter elements of the second array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++){
	sum_arr[i]=arr1[i]+arr2[i];
	}
	
	printf("sum of two arrays:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d",sum_arr[i]);
	}
	printf("\n");
}