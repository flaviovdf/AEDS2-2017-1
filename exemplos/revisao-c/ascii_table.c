#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	/* first printable char: */
	const unsigned char first= 32;
	/* last printable char: */
	const unsigned char last= 126;
	unsigned char c = first;
	int col;

	while(c <= last) {
		for(col = 0; col < 4; col++) {
			printf("%03hhd = [%c]   ", c, c);
			c++;
		}
		printf("\n");
	}
	printf("\n");
	return EXIT_SUCCESS;
}
