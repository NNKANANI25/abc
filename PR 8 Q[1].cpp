#include <stdio.h>

int main() {
    char str[100] ={'h','e','l','l','o',' ','w','o','r','l','d'};
    char *ptr = str;

    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string '%s': %d\n", str, length);

    return 0;
}
/*OUTPUT
Length of the string 'hello world': 11
*/