#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include "common.h"

// raccoglie una stringa di input generica da stdin (ritorna un vettore dinamico)
extern char* UserInput(const int input_dim);

// raccoglie un input decisionale (y/n)
extern bool UserDecision(void);

// rimuove tutti i whitespace contenuti nel vettore o array (NON ESEGUE LA REALLOC)
extern void WhitespaceRemove(char* s);

// ordina un vettore di stringhe in ordine alfabetico (ogni stringa deve essere allocata dinamicamente)
extern void AlphabeticSort(char** s, const size_t s_size);

// trasforma un int in una stringa (ritorna un vettore dinamico)
extern char* IntToString(int n);

#endif // !STRING_FUNCTIONS_H