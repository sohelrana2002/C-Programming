//FIND EVEN OR ODD NUMBER
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n & 1)
        printf("%d Odd Number\n", n);
    else
        printf("%d Even Number\n", n);

    return 0;
}
