//SUM OF TOTAL NUMBERS
#include <stdio.h>

int main()
{
  int i, sum = 0, n;
  printf("Enter your N number: \n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("sum of numbers=%d", sum);
  return 0;
}
