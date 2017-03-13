#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

struct date {
	int day;
	int month;
	int year;
};

void change_params(struct date d, struct date *dptr)
{
	d.day = 10;
	d.month = 10;
	d.year = 2010;
	dptr->day = 10;
	dptr->month = 10;
	dptr->year = 2010;
}

int main(int argc, char **argv)
{
	/* inline initialization: */
	struct date date1 = { 12, 12, 2012 };
	/* normal initialization: */
	struct date date2;
	date2.day = 12;
	date2.month = 12;
	date2.year = 2012;

	printf("BEFORE\n");
	printf("date1: %d/%d/%d\n", date1.day,
			date1.month, date1.year);
	printf("date2: %d/%d/%d\n", date2.day,
			date2.month, date2.year);
	change_params(date1, *date2);
	printf("\nAFTER\n");
	printf("date1: %d/%d/%d\n", date1.day,
			date1.month, date1.year);
	printf("date2: %d/%d/%d\n", date2.day,
			date2.month, date2.year);
}
