#include <stdio.h>

int main ()
{
	int x, y = 0;
	while (x < 5) {
		y = x - y;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}
