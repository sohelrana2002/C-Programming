//Dot_product_of_a_maxtrix and a number
#include <stdio.h>

int main()
{
    int a[10][10], b, c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", &n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    scanf("%d", &b);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            c[i][j] = a[i][j] * b;
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
