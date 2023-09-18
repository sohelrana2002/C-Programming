//FIND SUM AND AVERAGE OF THREE NUMBER (USER INPUT)
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float avg = sum / 3.0;
    printf("Average = %f", avg);

    return 0;
}
