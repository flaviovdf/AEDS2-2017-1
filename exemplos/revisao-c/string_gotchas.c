#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void gotcha_strlen(void);
void gotcha_printf(void);

int main(int argc, char **argv)
{
	gotcha_strlen();
	gotcha_printf();
	return EXIT_SUCCESS;
}

void gotcha_strlen(void)
{
	char ro[] = "asdf";
	/* strlen does not count the terminating NULL
	 * char: */
	printf("\"%s\" has %zd chars, ", ro, strlen(ro));
	printf("but we need 5 bytes to store the");
	printf("\nterminating '\\0' character.\n");
	printf("\n");
	
	char buffer[50];
	/* setting buffer to a known state.
	 * G is for garbage. */
	memset(buffer, 'G', 50);
	/* adding the terminating character. otherwise
	 * the program may crash trying to access
	 * prohibited memory locations. */
	buffer[49] = '\0';
	/* the following strncpy call will NOT copy the
	 * terminating NULL character. */
	strncpy(buffer, ro, strlen(ro));
	/* the following printf call will print 
	 * garbage because we did not copy the NULL
	 * character. */
	printf("buffer without terminating char:\n");
	printf("%s\n", buffer);
	printf("\n");
	
	/* keep the NULL character in mind when using
	 * strlen. */
	strncpy(buffer, ro, strlen(ro)+1);
	printf("copying the null character:\n");
	printf("%s\n", buffer);
	printf("\n");
}

void gotcha_printf(void)
{
	char *format = "1234567890!a@s#d$f%s^h&j*k(l);";
	printf("printing a string:\n");
	printf("%s\n", format);
	printf("1234567890!a@s#d$f%s^h&j*k(l)");
	printf("\n");
}
