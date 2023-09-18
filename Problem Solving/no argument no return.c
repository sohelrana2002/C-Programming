//no argument no return
#include <stdio.h>

void my();

int main()
{
    my();
    return 0;
}

void my()
{
    int a, b;

    printf("Enter A and B integer: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d", a, b, a + b);
}
