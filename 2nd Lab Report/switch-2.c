//ARTHITMATIC IN SWITCH CASE
#include <stdio.h>

int main()
{
    int a, b;
    int c;
    printf(" 1.+\n 2.-\n 3.*\n 4./\n 5.%%\n");
    printf("Enter the values of a & b: \n");
    scanf("%d %d", &a, &b);
    printf("Enter your Choice : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("%d + %d : %d \n", a, b, a + b);
        break;
    case 2:
        printf("%d - %d : %d \n", a, b, a - b);
        break;
    case 3:
        printf("%d * %d : %d \n", a, b, a * b);
        break;
    case 4:
        printf("%d / %d  : %d \n", a, b, a / b);
        break;
    case 5:
        printf("%d %% %d  : %d \n", a, b, a % b);
        break;
    default:
        printf("Wrong Number.");
        break;
    }
    return 0;
}
