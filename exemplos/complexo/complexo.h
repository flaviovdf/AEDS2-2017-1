#ifndef COMPLEXO_H
#define COMPLEXO_H

struct ComplexoStruct {
    double real;
    double imaginario;
};

/*
 * Adiciona 2 números complexos.
 * Definido como a soma do real e a soma do imag.
 */
struct ComplexoStruct add(struct ComplexoStruct x, \
    struct ComplexoStruct y);

/*
 * Multiplicação 2 números complexos
 * usando: (rx + ix) * (ry + iy) =
 *          rx * ry + rx * ix + ix * ry + ix * iy
 */
struct ComplexoStruct mult(struct ComplexoStruct x, \
    struct ComplexoStruct y);

#endif
