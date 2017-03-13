#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char rw[] = "this string is allocated "
		"in the stack and can be changed.";
	char *ro = "this string may be in read-only "
		"memory.";

	rw[2] = 'A';
	rw[3] = 'T';
	printf("%s\n\n", rw);

	printf("will now try to change a read-only "
		"memory location.\nsayonara.\n\n");

	/* program may crash at the following line: */
	ro[2] = 'A';
	ro[3] = 'T';
	printf("%s\n", ro);

	return EXIT_SUCCESS;
}
