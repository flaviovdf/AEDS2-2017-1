#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char array1[80];
	char *array2;

	array2 = malloc(80);
	/* check if we could allocate memory. */
	if(!array2) {
		perror(NULL);
		abort();
	}

	/* initialize beginning of arrays. */
	for(int i = 0; i < 10; i++) {
		array1[i] = '0' + i;
		array2[i] = '0' + i;
	}

	printf("second elements: '%c' '%c'\n",
			array1[1], array2[1]);
	printf("40th elements: '%c' '%c'\n",
			array1[40], array2[40]);

	/* free the Mallocs. */
	free(array2);
	/* the following raises a warning. */
	// free(array1);
	
	while(1) {
		/* don't try this at home. */
		/* remember to swapoff -a. */
		array2 = malloc(1024);
	}
}
