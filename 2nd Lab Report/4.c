//FIND LEAP YEAR OR NOT
#include <stdio.h>

int main()
{
    int years;
    scanf("%d", &years);
    if (years % 400 == 0)
        printf("%d Leap Year \n", years);
    else if (years % 4 == 0 && years % 100 != 0)
        printf("%d Leap Year \n", years);
    else
        printf("%d Not Leap Year\n", years);

    return 0;
}
