#include<stdio.h>
void cube()
{
	int number,cube;
	
	printf("enter any number: ");
	scanf("%d",&number);
	
	cube=number*number*number;
	
	printf("cube is %d is = %d",number,cube);
}
int main()
{
	cube();
}