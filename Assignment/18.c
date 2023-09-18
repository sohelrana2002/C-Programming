//CONVERT CAPITAL TO SMALL LETTER(DIFFERENTE METHOD)
#include <stdio.h>

int main()
{
    char c, s;
    printf("Enter a Small Letter: \n");
    scanf("%c", &c);
    s = c - 32;
    printf("Capital Letter = %c", s);

    return 0;
}
