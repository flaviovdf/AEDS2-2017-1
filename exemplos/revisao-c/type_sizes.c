#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	printf("SIZES OF DIFFERENT TYPES:\n");

	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(long long) = %d\n",
				sizeof(long long));
	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(long double) = %d\n",
				sizeof(long double));

	printf("sizeof(int8_t) = %d\n", sizeof(int8_t));
	printf("sizeof(int16_t) = %d\n", sizeof(int16_t));
	printf("sizeof(int32_t) = %d\n", sizeof(int32_t));
	printf("sizeof(int64_t) = %d\n", sizeof(int64_t));
	printf("sizeof(intmax_t) = %d\n", sizeof(intmax_t));
	return EXIT_SUCCESS;
}
