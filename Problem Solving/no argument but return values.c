//no argument but return values
#include <stdio.h>

void my();

int main()
{
    my();
}

void my()
{
    int a, b;

    printf("Enter A and B integer: ");
    scanf("%d %d", &a, &b);

    return a + b;
}
