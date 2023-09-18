//GET AREA USING FUNCTION
#include <stdio.h>
// function pototype
float my_function(float r)
{
    const float PI = 3.1416;
    float area = (r * r * PI);
    return area;
}

int main()
{
    float n;
    printf("Enter your radius values: \n");
    scanf("%f", &n);
    float result = my_function(n); // function call
    printf("Area is %0.3f", result);

    return 0;
}
