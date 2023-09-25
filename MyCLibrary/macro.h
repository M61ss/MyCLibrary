#if !defined MACRO_H
#define MACRO_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

// confronta due numeri e ritorna il maggiore tra i due
#define MAX(a, b) (a) > (b) ? (a) : (b)

// confronta due numeri e ritorna il maggiore tra i due
#define MIN(a, b) (a) < (b) ? (a) : (b)

// errore in funzioni dedicate allo svolgimento di calcoli matematici
#define MATH_ERROR(message) perror(message); exit(1)

// errore di lettura da stdin
#define ERROR_READING_STDIN perror("Error reading string from stdin\n."); exit(2)

// errore generato da un NULL pointer
#define INVALID_NULL_POINTER(message) perror(message); exit(3)

// errore dovuto al passaggio di parametri non validi
#define INVALID_PARAMETER(message) perror(message); exit(4)

#endif /* MACRO_H */
