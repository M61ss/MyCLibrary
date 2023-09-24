#pragma once

#include "macro.h"

// verifica se un puntatore è NULL
extern bool IsEmpty(const void* e);

// verifica se un double pointer è NULL
extern bool DoublePointerIsEmpty(const void** c);

// verifica se un numero è pari
extern bool IsEqual(const int* n);

// funzioni per lo scambio dei diversi tipi di dato
extern void charSwap(char* a, char* b);
extern void shortSwap(short* a, short* b);
extern void floatSwap(float* a, float* b);
extern void intSwap(int* a, int* b);
extern void doubleSwap(double* a, double* b);
extern void longSwap(long* a, long* b);
extern void llongSwap(long long* a, long long* b);

// swap di due stringhe FUNZIONA SOLO SE ALLOCATE DINAMICAMENTE
extern void StringSwap(char** s1, char** s2);