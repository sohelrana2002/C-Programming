//OPERATION IN SIMPLE FUNCTION
#include <stdio.h>
int my_function(int p) // function pototype
{
    int square = p * p;
    return square;
}

int main()
{
    int x;
    printf("Enter your values: \n");
    scanf("%d", &x);
    int result = my_function(x); // function call5
    printf("Square result %d", result);

    return 0;
}
