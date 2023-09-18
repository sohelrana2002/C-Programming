//Convert BDT to USD
#include <stdio.h>

int main()
{
    float bdt, usd, x;
    printf("Convert BDT to USD\n");
    printf("Enter Amount in BDT\n");
    scanf("%f", &bdt);
    usd = bdt / 77;
    x = bdt - (int)usd * 77;
    printf("usd= %d dollar %g tk", (int)usd, x);

    return 0;
}
