//SEARCHING ELEMENT IN AN ARRAY
#include <stdio.h>
#include <string.h>

int main()
{
    char array[500], search;
    int i, flag = 1;
    printf("Enter your any string: \n");
    gets(array);
    printf("Enter your search character: \n");
    scanf("%c", &search);

    for (i = 0; array[i]; i++)
    {
        if (search == array[i])
        {
            printf("%c Found  in index %d \n", search, i);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%c not found", search);
    }

    return 0;
}
