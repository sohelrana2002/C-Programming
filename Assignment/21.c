//SQUARE OF ANY NUMBER
#include <stdio.h>

int main()

{
    int a, b, c, d;
    printf("Enter 3 digit number: \n");
    scanf("%d", &a);

    b = a / 100;
    c = a % 10;
    d = b + c;

    printf("1st number Square %d is %d and square of %d is %d", b, b * b, c, c * c);

    return 0;
}
