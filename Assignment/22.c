//GET REVERSE NUMBER
#include <stdio.h>
int main()

{
    int a, b, c;

    printf("Please enter a 2 digit number: ");
    scanf("%d", &a);

    b = a / 10;
    c = a % 10;

    printf("The Reverse number: %d%d", c, b);

    return 0;
}
