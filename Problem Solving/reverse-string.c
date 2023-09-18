//REVERSE A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char line[500];
    printf("Enter your any string: \n");
    gets(line);
    int i, size = strlen(line);
    for (i = size; i >= 0; i--)
    {
        printf("%c", line[i]);
    }
    return 0;
}
