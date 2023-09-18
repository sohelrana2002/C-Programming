//GET SUM AND AVERAGE USING FUNCTION
#include <stdio.h>
// function pototype
int sum(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}
// function pototype
float average(int n)
{
    int i, x = 0, y = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            y += i;
            x++;
        }
    }
    return y / x;
}

int main()
{
    int n;
    printf("Enter your N values: \n");
    scanf("%d", &n);
    int result = sum(n);  // function call
    int ave = average(n); // function call
    printf("Sum= %d , Average= %d", result, ave);

    return 0;
}
