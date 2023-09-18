//SWIPPING 
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the value of A and B: \n");
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);

	return 0;
}
