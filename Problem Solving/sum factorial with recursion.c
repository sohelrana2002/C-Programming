//SUM  FACTORIAL WITH RECURSION
#include <stdio.h>
int sum_factorial(int n);

int main()
{
    int a, result;
    printf("Enter your two positive integer number: ");
    scanf("%d", &a);
    result = sum_factorial(a);
    printf("Sum Of Factorial=%d ", result);

    return 0;
}
int sum_factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * sum_factorial(n - 1);
    }
}
