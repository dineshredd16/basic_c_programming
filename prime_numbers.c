#include <stdio.h>
 
int main()
{
    int a, b, i, j, temp;
    printf("enter minumum number range: ");
    scanf("%d", &a);
    printf("\nenter maxmim number range: ");
    scanf("%d", &b);
    for (i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        temp = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                temp = 0;
                break;
            }
        }
        if (temp == 1)
            printf("%d ", i);
    }
    return 0;
}