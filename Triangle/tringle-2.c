#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter your N values: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf("  ");
        }
        for (k = 0; k <= i; k++)
        {
            printf(" *");
        }
        printf(" \n");
    }
    return 0;
}
