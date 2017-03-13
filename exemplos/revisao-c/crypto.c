#include <stdlib.h>
#include <stdio.h>

/* this function parses the command-line parameters.
 * there should be one parameter and it should contain
 * the name of the file we will read data from. */
FILE *open_input(int argc, char **argv);
/* encrypt c by adding 5 to it and adjusting so that
 * the result is still a printable ascii code. */
char encrypt(char c);

int main(int argc, char **argv)
{
	char c;
	FILE *input = open_input(argc, argv);
	while(!feof(input)) {
		c = fgetc(input);
		if(c == EOF) { break; }
		fputc(encrypt(c), stdout);
	}
	fclose(input);	
}

FILE * open_input(int argc, char **argv)
{
	FILE *input;
	if(argc != 2) {
		fprintf(stdout, "input file missing.\n");
		fprintf(stdout, "usage: %s "
			"file_to_encrypt\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	/* open input file for reading: */
	input = fopen(argv[1], "r");
	if(!input) {
		perror(NULL);
		fprintf(stdout, "usage: %s "
			"file_to_encrypt\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return input;
}

char encrypt(char c)
{
	const char first = 33;
	const char last = 126;
	if(c == ' ' || c == '\n' || c == '\r'
		|| c == '\t') return c;
	if(c < first || c > last) {
		fprintf(stdout, "non-printable "
			"character %hhd found. check "
			"your input.\n", c);
		exit(EXIT_FAILURE);
	}

	/* need a larger int, because c + 5 may be
	 * larger than CHAR_MAX. */
	int i = c; 
	i += 5;
	if(i > last) { i = first + (i - last); }
	return (char)i;
}
