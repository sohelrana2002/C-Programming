#include <stdio.h>

int main()
{
    int n = 4, i, j, k;

    for (i = 0; i <= n; i++)
    {
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
