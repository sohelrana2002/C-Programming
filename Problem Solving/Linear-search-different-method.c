//LINEAR SEARCH
#include <stdio.h>

int main()
{
	int number[5], i, j, max = 0, num_pos = 0;
	printf("Input 5 integers: \n");
	for (i = 0; i < 5; i++)
	{
		scanf(" %d", &number[i]);
	}

	for (j = 0; j < 5; j++)
	{
		if (number[j] < max)
		{

			max = number[j];
			num_pos = j;
		}
	}
	printf("Highest value: %d\nPosition: %d\n", max, num_pos + 1);
	return 0;
}
