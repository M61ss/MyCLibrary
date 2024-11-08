#ifndef TOOLS_H
#define TOOLS_H

#include "common.h"
#include "type.h"

#ifndef COMMON_H
#error tools.h: need the header "common.h"
#endif // !COMMON_H

#ifndef TYPE_H
/** @brief If the header `type.h` is not included, here is a macro for replace the definition of Type */
#define TYPE int
#else
#define TYPE Type
#endif // !TYPE_H



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `TypeSwap()` swaps the content of two element's pointer.

@param[in] a = first element;
@param[in] b = second element.

@return void.
*/
extern void TypeSwap(TYPE* a, TYPE* b);

/** @brief Function `TypeFind()` searches an element into a vector.

@param[in] v = vector;
@param[in] e = pointer to the element to search;
@param[in] v_size = size of vector;
@param[in] index_found = pointer to the index of the element (NULL if the element isn't into the vector).

@return bool = true if the element is into the vector, false otherwise.
*/
extern bool TypeFind(const TYPE* v, const TYPE* e, const size_t v_size, size_t* index_found);

/** @brief This struct contains the index of the first and the last elements of a vector */
struct Indexes {
	size_t start;	// start element's index
	size_t end;		// end element's index
};
typedef struct Indexes Indexes;

/** @brief Function `RangeFind()` searches a subvector into a vector.
A vector is subvector if it is a sequence of elements that starts with the same element pointed by `start`
and ends with same element pointed by `end`.

@param[in] v = vector;
@param[in] start = pointer to the element selected as start of the subvector;
@param[in] end = pointer to the element selected as end of the subvector;
@param[in] v_size = size of v;
@param[in] sub_v = subvector (NULL is no subvector was found).

@return Indexes = struct that contains the index of the start and the end elements into v.
*/
extern Indexes RangeFind(const TYPE* v, const TYPE* start, const TYPE* end, const size_t v_size, TYPE* sub_v);

/** @brief Function `ZeroFill()` sets all elements contained into a vector at 0 (it works also on array).

@param[in] v = vector;
@param[in] v_size = vector size.

@return void.
*/
extern void ZeroFill(TYPE* v, const size_t v_size);

/** @brief Function `TypeRemove()` removes an element from a vector (it works also on array because no realloc is executed).

@param[in] v = vector;
@param[in] index_to_remove = index of the element to remove;
@param[in] v_size = pointer to the vector size (it will be decreased at the end of the function).

@return void.
*/
extern void TypeRemove(TYPE* v, const size_t index_to_remove, size_t* v_size);

/** @brief Function `Sort()` sort elements of a vector in crescent or decrescent order.

@param[in] v = vector;
@param[in] v_size = vector size;
@param[in] crescent_order = if true the algorithm will order in crescent order, otherwise in decrescent if false.

@return void.
*/
extern void Sort(TYPE* v, const size_t v_size, const bool crescent_order);

/** @brief Function `Split()` divides a vector in two subvector.
The first subvector starts at the start of original vector, the second at the index that user decided.

@param[in] v = vector;
@param[in] first_part = first subvector;
@param[in] second_part = second subvector;
@param[in] first_element_second_part = index of the element that is wanted as first of second subvector;
@param[in] v_size = size of v.

@return void.
*/
extern void Split(TYPE* v, TYPE* first_part, TYPE* second_part, const size_t first_element_second_part, const size_t v_size);

#endif // !TOOLS_H