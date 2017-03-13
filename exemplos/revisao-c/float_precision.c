#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void test_first_diff(void)
{
	float fcounter = 0;
	int icounter = 0;
	while(fcounter == icounter) {
		fcounter = fcounter + 1;
		icounter = icounter + 1;
	}
	printf("integer %d cannot be represented\n"
		"exactly as a float.\n\n", icounter);
}

void test_precision(void)
{
	double one = 1.0;
	double three = 3.0;
	double frac = 1.0;
	printf("1 = %02.32lf\n", frac);
	frac = one + one/three;
	printf("1+1/3 = %02.32lf\n", frac);
	frac = frac - one/three;
	printf("1+1/3-1/3 = %02.32lf\n", frac);

	/* DON'T. wrong way of comparing doubles: */
	if(frac == one) {
		printf("frac == one.\n");
	} else {
		printf("frac != one.\n");
	}

	/* DO. correct way of comparing doubles: */
	const double EPSILON = 1e-6;
	if(fabs(frac - one) < EPSILON) {
		printf("difference between frac and one "
				"is NOT significant.\n");
	} else {
		printf("difference between frac and one "
				"IS significant.\n");
	}

	printf("\n");
}

int main(int argc, char **argv)
{
	test_precision();
	test_first_diff();
	return EXIT_SUCCESS;
}
