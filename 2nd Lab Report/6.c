//CHECK CAPITAL, SMALL, DIGIT OR SPECIAL SYMBOL
#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
        printf("%c Capital Letter \n", a);
    else if (a >= 'a' && a <= 'z')
        printf("%c Small Letter \n", a);
    else if (a >= '0' && a <= '9')
        printf("%c Digit \n", a);
    else
        printf("%c Special Symbol \n", a);

    return 0;
}
