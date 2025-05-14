#include<stdio.h>
int main()
{
	int arr[3][3];
	
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<3;i++){
		int rowsum = 0;
		for(int j=0;j<3;j++){
			rowsum = rowsum + arr[i][j];
		}
			printf("\n sum of the row %d = %d\n", i,rowsum);
		
	}
	for(int i=0;i<3;i++){
		int colsum = 0;
		for(int j=0;j<3;j++){
			colsum = colsum + arr[j][i];
		}
			printf("\n sum of the col %d = %d\n", i,colsum);
		
	}
}