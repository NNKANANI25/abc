#include <stdio.h>
int main()
{
	int maths[5],sci[5],eng[5],total;
	float per;
	char grade;
	
	for(int i=0; i<5;i++)
	{
		printf("Enter maths marks:[%d]:",i);
		scanf("%d",&maths[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("enter sci marks[%d]:",i);
		scanf("%d",&sci[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("enter eng marks[%d]:",i);
		scanf("%d",&eng[i]);
	}
	printf("\n\nmaths\tsci\teng\ttotal\tper\tgrade");
	printf("\n-----------------------------------------------\n");
	for(int i=0;i<5;i++)
	{
		total=maths[i]+sci[i]+eng[i];
		per=(float)total/3;
		printf("%d\t%d\t%d\t%d\t%.2f\t\n",maths[i],sci[i],eng[i],total,per,grade);
	if(per>=90){
		printf("A+\n");
	}else if(per>=80){
		printf("A\n");
	}else if(per>=70){
		printf("B+\n");
	}else if(per>=60){
		printf("B\n");
	}else if(per>=50){
		printf("C+\n");
	}else if(per>=40){
		printf("C\n");
	}else if(per>=30){
		printf("D\n");
	}
}
	
}

