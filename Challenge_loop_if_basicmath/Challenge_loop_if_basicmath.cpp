#include <stdio.h>
#include <math.h>

int main() {
	int x, y, i;
	float n = 0, n2 = 0, num = 0;
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		for (i = x;i >= y;i--) {
			printf("%d ", i);
			n = n + i;
			n2 = n2 + (i * i);
			num++;
		}
	}
	else if (x < y) {
		for (i = x;i <= y;i++) {
			printf("%d ", i);
			n = n + i;
			n2 = n2 + (i * i);
			num++;
		}
	}
	printf("\nAverage = %.2f", n / num );
	printf("\nSD = %.2f", sqrt(((num * n2 ) - (n * n)) / (num * (num-1.0))) );

}