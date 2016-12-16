#include <math.h>
#include "float.h"
#include "sqr_eqn.h"

/* Returns count of solutions. */
int resolve(double a, double b, double c, double *x1, double *x2) {
        double d = b * b - 4 * a * c;
	if (d < 0)
                return 0;
	if(a == 0)
		return -1;
	if(d > 0) {
                *x1 = ((-b + sqrt(d)) / 2 * a);
                *x2 = ((-b - sqrt(d)) / 2 * a);
                return 2;
        }
	/* d == 0 */
        *x1 = (-b / 2 * a);
        *x2 = *x1;
	return 1;
}
