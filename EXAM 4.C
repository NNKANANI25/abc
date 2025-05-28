#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("Cube of each element:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", (ptr + i) != NULL ? (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)) : 0);
    }
    printf("\n");

    return 0;
}
/*OUTPUT
Enter 5 numbers:
1
2
3
4
5
Cube of each element:
1 8 27 64 125

*/