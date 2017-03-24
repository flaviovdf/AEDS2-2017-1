#include <stdio.h>

#include "complexo.h"

int main(void) {
    struct ComplexoStruct2 c = {.real = 2.0, .imaginario = 3.2};
    printf("%.2f %.2f\n", c.real, c.imaginario);
}
