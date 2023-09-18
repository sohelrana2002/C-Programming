//GET Vowel, consonant, Digit, Special Symbol USING STRING
#include <stdio.h>
#include <string.h>

int main()
{
    char line[300];
    printf("Enter your string line: \n");
    gets(line);
    int i, vowel = 0, consonant = 0, digit = 0, symbol = 0;
    for (i = 0; line[i]; i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O')
        {
            vowel++;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            consonant++;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            digit++;
        }
        else
        {
            symbol++;
        }
    }
    printf("Vowel: %d\n", vowel);
    printf("consonant: %d\n", consonant);
    printf("Digit: %d\n", digit);
    printf("Special Symbol: %d\n", symbol);
    return 0;
}
