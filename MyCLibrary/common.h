#ifndef COMMON_H
#define COMMON_H

#include "macro.h"

// ritorna il valore assoluto di un numero
#define ABS(a) (a) < 0 ? -(a) : (a)

// confronta due numeri e ritorna il maggiore tra i due
#define MAX(a, b) (a) > (b) ? (a) : (b)

// confronta due numeri e ritorna il maggiore tra i due
#define MIN(a, b) (a) < (b) ? (a) : (b)

// verifica se un puntatore è NULL
extern bool IsEmpty(const void* p);

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

#endif // !COMMON_H