//SUM OF TOTAL NUMBER
#include <stdio.h>

int main()
{
  int i, x = 1, n;
  printf("Enter your N number: \n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%d ", x);
    x++;
  }

  return 0;
}
