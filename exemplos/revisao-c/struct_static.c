#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

struct date {
	int day;
	int month;
	long year;
};

struct date_opt {
	char day;
	char month;
	long year;
};

int main(int argc, char **argv)
{
	struct date date1 = { 12, 12, 2012 };
	/* normal initialization: */
	struct date date2;
	date2.day = 12;
	date2.month = 12;
	date2.year = 2012;
	struct date_opt dopt1 = { 12, 12, 2012 };

	printf("sizeof(struct date) = %d\n",
		sizeof(date1));
	int size = 2*sizeof(char) + sizeof(long);
	printf("expected sizeof(struct date_opt)"
		" = %d\n", size); 
	printf("sizeof(struct date_opt) = %d\n",
		sizeof(dopt1));
}
