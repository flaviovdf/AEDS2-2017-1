#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

void change_params(int x, int y, int *ptr, int *ptr_y)
{
	x = 10;
	y = 10;
	ptr = (int *)10;
	*ptr_y = 10;
	ptr_y = (int *)10;
}

int main(int argc, char **argv)
{
	int x = 1;
	int y = 2;
	int *ptr;
	ptr = (int *)3;
	int *ptr_y;
	ptr_y = &y;
	/* ptr does NOT point to a memory position
	 * we own. accessing it will result in a
	 * segmentation fault. */

	printf("x=%d y=%d ptr_y=%p ptr=%p\n",
			x, y, ptr_y, ptr);
	change_params(x, y, ptr, ptr_y);
	printf("x=%d y=%d ptr_y=%p ptr=%p\n",
			x, y, ptr_y, ptr);

	printf("can't access the memory position that\n"
		"ptr points to. will try it now:\n");
	printf("%d\n", *ptr);
	return EXIT_SUCCESS;
}
