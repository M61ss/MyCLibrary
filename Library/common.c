#include "common.h"

bool IsEmpty(const void* p) {
	return p == NULL;
}

bool DoublePointerIsEmpty(const void** c) {
	return c == NULL;
}

bool IsEqual(const int* n) {
	return (*n % 2) == 0;
}

void charSwap(char* a, char* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
void shortSwap(short* a, short* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	short tmp = *a;
	*a = *b;
	*b = tmp;
}
void floatSwap(float* a, float* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	float tmp = *a;
	*a = *b;
	*b = tmp;
}
void intSwap(int* a, int* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void doubleSwap(double* a, double* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	double tmp = *a;
	*a = *b;
	*b = tmp;
}
void longSwap(long* a, long* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	long tmp = *a;
	*a = *b;
	*b = tmp;
}
void llongSwap(long long* a, long long* b) {
	if (IsEmpty(a) || IsEmpty(b)) {
		INVALID_NULL_POINTER("%s (Swap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	long long tmp = *a;
	*a = *b;
	*b = tmp;
}

void StringSwap(char** s1, char** s2) {
	if (DoublePointerIsEmpty(s1) || DoublePointerIsEmpty(s2) || IsEmpty(*s1) || IsEmpty(*s2)) {
		INVALID_NULL_POINTER("%s (StringSwap): line %d: NULL pointer passed as parameter.\n", __FILE__, __LINE__);
	}
	// tmp
	char* tmp = malloc(strlen(*s1) + 1);
	memcpy(tmp, *s1, strlen(*s1) + 1);

	// s1
	*s1 = realloc(*s1, strlen(*s2) + 1);
	memcpy(*s1, *s2, strlen(*s2) + 1);

	// s2
	*s2 = realloc(*s2, strlen(tmp) + 1);
	memcpy(*s2, tmp, strlen(tmp) + 1);

	free(tmp);
}