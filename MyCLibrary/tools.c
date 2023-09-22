#include "tools.h"

bool IsEmpty(const void* e) {
	return e == NULL;
}

void Swap(ElemType* a, ElemType* b) {
	ElemType tmp = *a;
	*a = *b;
	*b = tmp;
}

size_t Compare(const ElemType* a, const ElemType* b) {
	if (*a > *b) {
		return 1;
	}
	else if (*a < *b) {
		return -1;
	}
	else {
		return 0;
	}
}

bool ElemFind(const ElemType* v, const ElemType* e, const size_t v_size, size_t* index_found) {
	if (v == NULL || e == NULL || v_size == 0) {
		INVALID_NULL_POINTER("ElemFind: recieved NULL pointer or invalid v_size.\n");
	}
	for (size_t i = 0; i < v_size; i++) {
		if (v[i] == *e) {
			*index_found = i;
			return true;
		}
	}

	return false;
}

Indexes RangeFind(const ElemType* v, const ElemType* start, const ElemType* end, const size_t v_size, ElemType* sub_v) {
	if (v == NULL || start == NULL || end == NULL || v_size == 0) {
		INVALID_NULL_POINTER("RangeFind: recieved NULL pointer or invalid v_size.\n");
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
			sub_v = realloc(sub_v, (j - indexes_found.start) * sizeof(ElemType));
			memcpy(sub_v, &v[indexes_found.start], j - indexes_found.start);
			return indexes_found;
		}
	}

	// se sono arrivato qui non ho trovato il secondo indice, quindi devo rimettere l'altro valore a -1 nel caso lo avesse trovato
	indexes_found.start = -1;
	return indexes_found;
}

void ZeroFill(ElemType* v, const size_t v_size) {
	if (IsEmpty(v) || v_size == 0) {
		INVALID_NULL_POINTER("ZeroFill: vector size is invalid or NULL pointer passed as parameter\n");
	}
	for (size_t i = 0; i < v_size; i++) {
		v[i] = 0;
	}
}

void VectorResize(ElemType* v, const size_t index_to_remove, size_t* v_size) {
	for (size_t i = index_to_remove; i < *v_size - 1; i++) {
		v[i] = v[i + 1];
	}
	(*v_size)--;
}

void Sort(ElemType* v, const size_t v_size, const bool crescent_order) {
	if (IsEmpty(v) || v_size == 0) {
		INVALID_NULL_POINTER("Sort: vector size is invalid or NULL pointer passed as parameter\n");
	}
	bool is_sorted = false;
	while (!is_sorted) {
		is_sorted = true;
		for (size_t i = 0; i < v_size - 1; i++) {
			if (crescent_order) {
				if (v[i] < v[i + 1]) {
					Swap(&v[i], &v[i + 1]);
					is_sorted = false;
				}
			}
			else {
				if (v[i] > v[i + 1]) {
					Swap(&v[i], &v[i + 1]);
					is_sorted = false;
				}
			}
		}
	}
}

void Split(ElemType* v, ElemType* first_part, ElemType* second_part, const size_t first_element_second_part, const size_t v_size) {
	if (IsEmpty(v) || IsEmpty(first_part) || IsEmpty(second_part)) {
		INVALID_NULL_POINTER("Split: recieved NULL pointer\n");
	}
	size_t first_part_size = first_element_second_part + 1;
	size_t second_part_size = v_size - first_element_second_part + 1;
	first_part = realloc(first_part, first_part_size * sizeof(ElemType));
	second_part = realloc(second_part, second_part_size * sizeof(ElemType));

	memcpy(first_part, v, first_part_size * sizeof(ElemType));
	memcpy(second_part, &v[first_element_second_part], second_part_size * sizeof(ElemType));
}