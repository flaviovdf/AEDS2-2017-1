#include <stdlib.h>
#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

int main(int argc, char **argv)
{
	struct date stack[10];
	struct date *heap;

	heap = malloc(10*sizeof(struct date));
	if(!heap) { perror(NULL); abort(); }

	printf("stack base=%p base+1=%p\n",
			stack, stack+1);
	printf("heap base=%p base+1=%p\n",
			heap, heap+1);
	free(heap);
}
