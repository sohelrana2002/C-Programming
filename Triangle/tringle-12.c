#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter your N values: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    printf("1 ");
                else
                    printf("0 ");
            }
            else
            {
                if (j % 2 == 0)
                    printf("0 ");
                else
                    printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
