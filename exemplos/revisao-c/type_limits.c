#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	printf("LIMITS OF DIFFERENT INTEGER TYPES:\n");

	printf("%hhd < char < %hhd\n",
			CHAR_MIN, CHAR_MAX);
	printf("0 < unsigned char < %hhu\n", UCHAR_MAX);
	printf("\n");

	printf("%hd < short < %hd\n",
			SHRT_MIN, SHRT_MAX);
	printf("0 < unsigned short < %hu\n", USHRT_MAX);
	printf("\n");

	printf("%d < int < %d\n",
			INT_MIN, INT_MAX);
	printf("0 < unsigned int < %u\n", UINT_MAX);
	printf("\n");

	printf("%ld < long < %ld\n",
			LONG_MIN, LONG_MAX);
	printf("0 < unsigned long < %lu\n", ULONG_MAX);
	printf("\n");

	printf("%lld < llong < %lld\n",
			LLONG_MIN, LLONG_MAX);
	printf("0 < unsigned llong < %llu\n",
			ULLONG_MAX);
	printf("\n");

	printf("%jd < int8_t < %jd\n",
			(intmax_t)INT8_MIN,
			(intmax_t)INT8_MAX);
	printf("0 < uint8_t < %ju\n",
			(intmax_t)UINT8_MAX);
	printf("\n");

	printf("%jd < int16_t < %jd\n",
			(intmax_t)INT16_MIN,
			(intmax_t)INT16_MAX);
	printf("0 < uint16_t < %ju\n",
			(intmax_t)UINT16_MAX);
	printf("\n");

	printf("%jd < int32_t < %jd\n",
			(intmax_t)INT32_MIN,
			(intmax_t)INT32_MAX);
	printf("0 < uint32_t < %ju\n",
			(intmax_t)UINT32_MAX);
	printf("\n");

	printf("%jd < int64_t < %jd\n",
			(intmax_t)INT64_MIN,
			(intmax_t)INT64_MAX);
	printf("0 < uint64_t < %ju\n",
			(intmax_t)UINT64_MAX);
	printf("\n");
	
	printf("%jd < intmax_t < %jd\n",
			INTMAX_MIN, INTMAX_MAX);
	printf("0 < uintmax_t < %ju\n", UINTMAX_MAX);

	return EXIT_SUCCESS;
}
