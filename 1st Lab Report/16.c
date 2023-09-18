//CONVERT SMALL TO CAPITAL LETTER
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Small Letter: \n");
    scanf("%c", &ch);
    printf("Capital letter= %c", ch - 32);

    return 0;
}
