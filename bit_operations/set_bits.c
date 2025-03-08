#include <stdio.h>
#include <math.h>

void main()
{
	unsigned int x, n, y;
	
	printf("Enter the number \n");
	scanf("%d", &x);

	printf("Enter the number of bits to be set \n");
	scanf("%d", &n);

	y = pow(2, n) - 1;

	//y = ~(~0 >> n);
	//y = ~0;
	printf("y: %d\n", y);

	x = x & y;
	x = x | y;

	printf("resulted integer: %d", x);
}



