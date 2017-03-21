#include <stdlib.h>
#include "complexo.h"

struct ComplexoStruct add(struct ComplexoStruct x, \
    struct ComplexoStruct y) {

  struct ComplexoStruct resultado = {.real=0.0, .imaginario=0.0};
  resultado.real = x.real + y.real;
  resultado.real = x.imaginario + y.imaginario;
  return resultado;

}

struct ComplexoStruct mult(struct ComplexoStruct x, \
    struct ComplexoStruct y) {

  struct ComplexoStruct resultado;
  //... código aqui
  return resultado;
}
