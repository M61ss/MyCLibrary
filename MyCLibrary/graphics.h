#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "common.h"

// stampa n spazi
extern void Space(const int n);

// stampa una linea
extern void Line(const size_t lenght);

// stampa un box contenente una stringa
extern void Box(const char* s);

// stampa un parallelogramma contenente una stringa
extern void Parallelogram(const char* s, const bool reverted);

// stampa una piramide che ha una stringa come base
extern void Piramid(const char* s, const bool reverted);

#endif // !GRAPHICS_H