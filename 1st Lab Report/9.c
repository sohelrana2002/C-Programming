// Convert  Celsius TO Fahrenheit
#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter value in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%.2f = %.2f", c, f);

    return 0;
}
