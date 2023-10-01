#ifndef TOOLS_H
#define TOOLS_H

#include "common.h"
#include "type.h"

#ifndef COMMON_H
#error tools.h: need the header "common.h"
#endif // !COMMON_H

#ifndef TYPE_H
/** @brief If the header `type.h` is not included here a macro for replace the definition of Type */
#define TYPE int
#else
#define TYPE Type
#endif // !TYPE_H

// scambio di elementi
extern void TypeSwap(TYPE* a, TYPE* b);

// cerca un elemento(e) in un vettore(v) di dimensione v_size. Se lo trova salva in index_found l'indice dell'elemento nel vettore
extern bool TypeFind(const TYPE* v, const TYPE* e, const size_t v_size, size_t* index_found);

struct Indexes {
	size_t start;	// start element index
	size_t end;		// end element index
};
typedef struct Indexes Indexes;

// cerca in un vettore(v) di dimensione v_size un sottovettore(sub_v) avente come estremi due elementi(start & end). Se lo trova salva in indexes_found gli indici dei due estremi e in sub_v il sottovettore trovato
extern Indexes RangeFind(const TYPE* v, const TYPE* start, const TYPE* end, const size_t v_size, TYPE* sub_v);

// imposta a 0 tutti gli elementi del vettore passato
extern void ZeroFill(TYPE* v, const size_t v_size);

/*
* index_to_remove = indice dell'elemento da rimuovere
* v_size = puntatore alla dimensione del vettore che verrà opportunamente modificata dopo la rimozione
* NON ESEGUE LA REALLOC, dunque la funzione è UTILIZZABILE ANCHE PER ARRAY
*/
extern void VectorResize(TYPE* v, const size_t index_to_remove, size_t* v_size);

// algoritmo di sorting (crecent_order == true ordine crescente, false decrescente)
extern void Sort(TYPE* v, const size_t v_size, const bool crescent_order);

// divide un vettore in due sottovettori di dimensione arbitraria
extern void Split(TYPE* v, TYPE* first_part, TYPE* second_part, const size_t first_element_second_part, const size_t v_size);

#endif // !TOOLS_H