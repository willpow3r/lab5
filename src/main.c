#include <stdio.h>
#include "sqr_eqn.h"

int main() {
	double a, b, c, x1, x2;
	printf("Enter a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	int cnt = resolve(a, b, c, &x1, &x2);
	switch(cnt) {
	case 2: printf("x1 = %lf, x2 = %lf\n", x1, x2); break;
	case 1: printf("x = %lf\n", x1); break;
	case 0: printf("No real solution\n"); break;
	case -1: printf("This is not a quadratic equation\n"); break;
	}
	return 0;
}
