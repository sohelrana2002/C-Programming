//ARITHMATHICS OPERATION
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Addition: %d+%d=%d\n", a, b, a + b);
    printf("Subtraction: %d-%d=%d\n", a, b, a - b);
    printf("Multiplication: %d * %d=%d\n", a, b, a * b);
    printf("Division: %d / %d=%f\n", a, b, (float)a / b);
    printf("Reminder: %d %% %d=%d\n", a, b, a % b);

    return 0;
}
