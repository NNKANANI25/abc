#include<stdio.h>

int main()
{
	int rows=5;
	int number = 11;
	
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",number++);
		}
		printf("\n");
	}
}
/*OUTPUT
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/