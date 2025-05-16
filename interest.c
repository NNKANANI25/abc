#include<stdio.h>

main()
{
	float p,r,n,total;
	
	printf("Enter Your principle amount =>");
	scanf("%f",&p);
	printf("Enter Your rate =>");
	scanf("%f",&r);
	printf("Enter Your time =>");
	scanf("%f",&n);
	
	total = p*r*n/100;
	printf("Your simple interest is:%.2f",total);
}