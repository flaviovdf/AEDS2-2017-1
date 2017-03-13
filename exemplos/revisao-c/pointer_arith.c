#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int stack[80];
	int *heap;
	int *heap_save;

	heap = malloc(80*sizeof(int));
	if(!heap) { perror(NULL); abort(); }

	/* we need to save the heap pointer
	 * to free it later. */
	heap_save = heap;

	printf("second int: stack=%d heap=%d\n",
		stack[1], heap[1]);
	printf("second int: stack=%d heap=%d\n",
		*(stack+1), *(heap+1));

	/* we can change values of pointers. */
	printf("before: %p\n", heap);
	heap++;
	printf("after: %p\n", heap);
	printf("second int: %d %d\n",
		*heap, heap[0]);
	
	/* we cannot change values of stack arrays
	 * because they are not stored in memory */
	// stack = stack + 5;
}
