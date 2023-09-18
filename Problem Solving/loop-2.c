//INPUT A NUMBER AND GET ALL VALUE OF DECENDING ORDER
#include <stdio.h>

int main()
{
  int i, n;
  printf("Enter your N number: \n");
  scanf("%d", &n);
  for (i = n; i >= 0; i--)
  {
    printf("%d ", n);
    n--;
  }

  return 0;
}
