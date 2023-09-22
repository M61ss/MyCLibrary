#if !defined TOOLS_H
#define TOOLS_H

#include "macro.h"

// per il corretto utilizzo di questa libreria MODIFICARE IL TIPO RAPPRESENTATO DA ELEMTYPE
// per adattare automaticamente le funzioni al tipo che si desidera utilizzare
typedef int ElemType;



// verifica se un puntatore è NULL
extern bool IsEmpty(const void* e);

// scambio di elementi
extern void Swap(ElemType* a, ElemType* b);

// confronta elementi: ritorna 1 se a > b, -1 se a < b, 0 se a == b
extern size_t Compare(const ElemType* a, const ElemType* b);

// cerca un elemento(e) in un vettore(v) di dimensione v_size. Se lo trova salva in index_found l'indice dell'elemento nel vettore
extern bool ElemFind(const ElemType* v, const ElemType* e, const size_t v_size, size_t* index_found);

struct Indexes {
	size_t start;	// indice dell'elemento di partenza
	size_t end;		// indice dell'elemento di arrivo
};
typedef struct Indexes Indexes;

// cerca in un vettore(v) di dimensione v_size un sottovettore(sub_v) avente come estremi due elementi(start & end). Se lo trova salva in indexes_found gli indici dei due estremi e in sub_v il sottovettore trovato
extern Indexes RangeFind(const ElemType* v, const ElemType* start, const ElemType* end, const size_t v_size, ElemType* sub_v);

// imposta a 0 tutti gli elementi del vettore passato
extern void ZeroFill(ElemType* v, const size_t v_size);

/*
* index_to_remove = indice dell'elemento da rimuovere
* v_size = puntatore alla dimensione del vettore che verrà opportunamente modificata dopo la rimozione
* NON ESEGUE LA REALLOC, dunque la funzione è UTILIZZABILE ANCHE PER ARRAY
*/
extern void VectorResize(ElemType* v, const size_t index_to_remove, size_t* v_size);

// algoritmo di sorting (crecent_order == true ordine crescente, false decrescente)
extern void Sort(ElemType* v, const size_t v_size, const bool crescent_order);

// divide un vettore in due sottovettori di dimensione arbitraria
extern void Split(ElemType* v, ElemType* first_part, ElemType* second_part, const size_t first_element_second_part, const size_t v_size);

#endif /* TOOLS_H */