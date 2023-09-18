//FIND VOWEL OR CONSONANT
#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        printf("%c Vowel \n", a);
    else
        printf("%c Consonant\n", a);

    return 0;
}
