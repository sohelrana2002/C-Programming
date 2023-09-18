//GET LARGEST NUMBER FROM AN ARRAY
#include <stdio.h>

int main()
{
  int n, max = 0, i;
  float arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%f", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }

  printf("Largest element = %d", max);

  return 0;
}
