#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "common.h"

#define UTF8_ENCODE

// stampa n spazi
extern void Space(const size_t n);

// stampa una linea
extern void Line(const size_t lenght);

// stampa una linea con dei + agli apici
extern void LinePlus(const size_t lenght);

// stampa un box contenente una stringa
extern void Box(const char* s, const size_t padding);

// stampa un parallelogramma contenente una stringa
extern void Parallelogram(const char* s, const size_t padding, const bool reverted);

// stampa una piramide che ha una stringa come base
extern void Piramid(const char* s, const size_t padding, const bool reverted);

#endif // !GRAPHICS_H