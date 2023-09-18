//descending order FROM AN ARRAY
#include <stdio.h>

int main()
{

    int number[100];

    int i, j, a, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter numbers %d : ", i + 1);
        scanf("%d", &number[i]);
    }

    /*  sorting begins ... */

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below\n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}
