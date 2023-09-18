//GCD-LMC
#include <stdio.h>
int my_function(int x, int y);

int main()
{
    int a, b, result, lcm;
    printf("Enter your two positive integer number: ");
    scanf("%d %d", &a, &b);
    result = my_function(a, b);
    printf("GCD=%d ", result);
    printf("\nLCM=%d ", (a * b) / result);

    return 0;
}
int my_function(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return my_function(y, x % y);
    }
}
