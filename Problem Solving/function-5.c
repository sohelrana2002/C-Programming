//CHECK POSITVE OR NEGATIVE USING FUNTION AND RETURN TYPE
#include <stdio.h>

int my_function(int a)
{
    int i, b = 0;
    for (i = 2; i <= (a / 2); i++)
    {
        if (a % i == 0)
        {
            b++;
        }
        if (b == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);
    int result = my_function(n);
    // Function call
    printf("%d", result);
    return 0;
}
