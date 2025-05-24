
#include<stdio.h>
#include<string.h>
struct mobile
{
	char titel[50];
	char auther[50];
	int price;
 };
	
	int main()
	{ 
	  int i;
	  struct mobile m[i];
	  for(i=0;i<6;i++)
	 {
   	 printf("mobile :%d\n ",i+1);
	 printf("company name:");
	 scanf("%s",&m[i].titel);
	 gets(m[i].companyname);
	 printf("color:");
	 scanf("%s",&m[i].auther);
	 printf("price:");
	 scanf("%d",&m[i].price);
     printf("companyname:%s\n color:%s\nprice:%d\n ",m[i].companyname,m[i].color,m,m[i].price);
	 printf("\n");}
	
	
}