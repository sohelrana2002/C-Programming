//SWIPPING TO OTHER METHOD
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of A and B: \n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    return 0;
}
