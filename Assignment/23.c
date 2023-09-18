// GET Quotient AND Remainder
#include <stdio.h>

int main()
{
    int a, b, quo, rem;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    quo = a / b;
    rem = a - (a / b) * b;
    printf("Quotient = %d Remainder =%d\n", quo, rem);

    return 0;
}
