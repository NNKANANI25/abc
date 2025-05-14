#include<stdio.h>
int main()
{
	int arr1[3][3];
	int arr2[3][3],sum=0;

	
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++){
		printf("enter arr[%d][%d]: ",i,j);
		scanf("%d",&arr1[i][j]);
		sum+= arr1[i][j];
		}
	}
	
	for(int k=0;k<3;k++)
	{
	for(int l=0;l<3;l++){
		printf("enter arr[%d][%d]: ",k,l);
		scanf("%d",&arr1[k][l]);
		sum+= arr1[k][l];
		}
		
	}
	sum+= arr1[i][j] + arr2[k]l];
	
	
}