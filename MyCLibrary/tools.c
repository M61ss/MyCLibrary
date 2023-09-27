#include "tools.h"

void TypeSwap(TYPE* a, TYPE* b) {
	TYPE tmp = *a;
	*a = *b;
	*b = tmp;
}

bool TypeFind(const TYPE* v, const TYPE* e, const size_t v_size, size_t* index_found) {
	if (IsEmpty(v) || IsEmpty(e) || v_size == 0) {
		INVALID_NULL_POINTER("%s (ElemFind): line %d: recieved NULL pointer or invalid v_size.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < v_size; i++) {
		if (v[i] == *e) {
			*index_found = i;
			return true;
		}
	}

	return false;
}

Indexes RangeFind(const TYPE* v, const TYPE* start, const TYPE* end, const size_t v_size, TYPE* sub_v) {
	if (IsEmpty(v) || IsEmpty(start) || IsEmpty(end) || v_size == 0) {
		INVALID_NULL_POINTER("%s (RangeFind): line %d: recieved NULL pointer or invalid v_size.\n", __FILE__, __LINE__);
	}
	Indexes indexes_found = { -1,-1 };
	size_t i;
	for (i = 0; i < v_size; i++) {
		if (v[i] == *start) {
			indexes_found.start = i;
			break;
		}
	}
	for (size_t j = i + 1; j < v_size; j++) {
		if (v[j] == *end) {
			indexes_found.end = j;
			sub_v = realloc(sub_v, (j - indexes_found.start) * sizeof(TYPE));
			memcpy(sub_v, &v[indexes_found.start], j - indexes_found.start);
			return indexes_found;
		}
	}

	// se sono arrivato qui non ho trovato il secondo indice, quindi devo rimettere l'altro valore a -1 nel caso lo avesse trovato
	indexes_found.start = -1;
	return indexes_found;
}

void ZeroFill(TYPE* v, const size_t v_size) {
	if (IsEmpty(v) || v_size == 0) {
		INVALID_NULL_POINTER("%s (ZeroFill): line %d: vector size is invalid or NULL pointer passed as parameter\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < v_size; i++) {
		v[i] = 0;
	}
}

void VectorResize(TYPE* v, const size_t index_to_remove, size_t* v_size) {
	for (size_t i = index_to_remove; i < *v_size - 1; i++) {
		v[i] = v[i + 1];
	}
	(*v_size)--;
}

void Sort(TYPE* v, const size_t v_size, const bool crescent_order) {
	if (IsEmpty(v) || v_size == 0) {
		INVALID_NULL_POINTER("%s (Sort): line %d: vector size is invalid or NULL pointer passed as parameter\n", __FILE__, __LINE__);
	}
	bool is_sorted = false;
	while (!is_sorted) {
		is_sorted = true;
		for (size_t i = 0; i < v_size - 1; i++) {
			if (crescent_order) {
				if (v[i] < v[i + 1]) {
					TypeSwap(&v[i], &v[i + 1]);
					is_sorted = false;
				}
			}
			else {
				if (v[i] > v[i + 1]) {
					TypeSwap(&v[i], &v[i + 1]);
					is_sorted = false;
				}
			}
		}
	}
}

void Split(TYPE* v, TYPE* first_part, TYPE* second_part, const size_t first_element_second_part, const size_t v_size) {
	if (IsEmpty(v) || IsEmpty(first_part) || IsEmpty(second_part)) {
		INVALID_NULL_POINTER("%s (Split): line %d: recieved NULL pointer\n", __FILE__, __LINE__);
	}
	size_t first_part_size = first_element_second_part + 1;
	size_t second_part_size = v_size - first_element_second_part + 1;
	first_part = realloc(first_part, first_part_size * sizeof(TYPE));
	second_part = realloc(second_part, second_part_size * sizeof(TYPE));

	memcpy(first_part, v, first_part_size * sizeof(TYPE));
	memcpy(second_part, &v[first_element_second_part], second_part_size * sizeof(TYPE));
}