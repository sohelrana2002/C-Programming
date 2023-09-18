//CONVERT KM TO M
#include <stdio.h>

int main()
{
    int m;
    float km;
    printf("Enter the distance in kilometers: \n");
    scanf("%f", &km);
    m = km * 1000;
    printf("%0.1f km = %d m", km, m);

    return 0;
}
