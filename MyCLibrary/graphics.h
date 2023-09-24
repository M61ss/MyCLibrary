#if !defined GRAPHICS_H
#define GRAPHICS_H

#include "common.h"

// stampa n spazi
extern void Space(int n);

// stampa una linea
extern void Line(size_t lenght);

// stampa un box contenente una stringa
extern void Box(char* s);

// stampa un parallelogramma contenente una stringa
extern void Parallelogram(char* s, bool reverted);

// stampa una piramide che ha una stringa come base
extern void Piramid(char* s, bool reverted);

#endif /* GRAPHICS_H */