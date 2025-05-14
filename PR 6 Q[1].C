#include<stdio.h>
int main()
{
	char str[100];
	int i=0,j=0;
	int flag = 1;
	
	printf("enter a string: ");
	scanf("%s",str);
	
	while(str[j] != '\0'){
		j++;
	}
	j--;
	
	while(i < j){
		if(str[i] != str[j]){
			flag=0;
			break;
		}
		i++;
		j--;
	}
	if(flag == 1){
		printf("the string is a palindrome.\n");
	}else{
		printf("the string is not a palindrone.\n");
	}
}
/*OUTPUT
enter a string: nayan
the string is a palindrome.

enter a string: ME
the string is not a palindrone.
*/