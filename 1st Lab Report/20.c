//SWIPPING(DIFFERENTE METHOD)
#include <stdio.h>

int main()

{
    int a, b, c, d;
    printf("Enter 3 digit number: \n");
    scanf("%d", &a);

    b = a / 100;
    c = a % 10;
    d = b + c;

    printf("sum 1sr and 3nd number= %d", d);

    return 0;
}
