#include<stdio.h>
int main()
{
	int feet, inches;
	
	printf("Enter the value of feet:");
	scanf("%d",&feet);
	
	inches=feet*12;
	
	printf("%d", inches);
}