//SUM OF TOTAL VALUE
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your N number: ");
    scanf("%d", &n);
    int myArray[n];

    int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter your %d eliment: ", i + 1);
        scanf("%d", &myArray[i]);
        sum = sum + myArray[i];
    }

    printf("Sum: %d", sum);

    return;
}
