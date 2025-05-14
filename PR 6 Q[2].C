#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main()
{
	char str[MAX_SIZE];
	int i,len;
	int freq[26];
	
	printf("enter any string: ");
	gets(str);
	
	
	len = strlen(str);
	
	for(i=0;i<26;i++)
	{
		freq[i] = 0;
	}
	
	for(i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z')
		{
			 freq[str[i] - 97]++;
		}
		else if(str[i]>='A'&& str[i]<='Z')
		{
			 freq[str[i] - 65]++;
		}
	}
	printf("\nFrequency of all characters in the given string: \n");
	for(i=0;i<26;i++)
	{
		if(freq[i] != 0)
		{
			printf("'%c' = %d\n",(i + 97),freq[i]);
		}
	}
	
}
/*OUTPUT
enter any string: development

Frequency of all characters in the given string:
'd' = 1
'e' = 3
'l' = 1
'm' = 1
'n' = 1
'o' = 1
'p' = 1
't' = 1
'v' = 1
*/