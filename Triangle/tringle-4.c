#include <stdio.h>

int main()
{
    int n = 4, i, j, k;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 4; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
