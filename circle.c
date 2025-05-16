#include<stdio.h>

main()
{
	float r,total;
	const float PI=3.14;
	
	printf("Enter Your Area =>");
	scanf("%f",&r);
	
	total = PI*r*r;
	printf("Your Area is:%.2f",total);
}