#include "main.h"

int main(void) {
	char* s1 = calloc(5, 1);
	memcpy(s1, "ciao", 4);
	char* s2 = calloc(5, 1);
	memcpy(s2, "miao", 4);
	char* s3 = calloc(5, 1);
	memcpy(s3, "mina", 4);
	char* s4 = calloc(5, 1);
	memcpy(s2, "aldo", 4);
	char* s5 = calloc(7, 1);
	memcpy(s5, "Albero", 6);

	char** v = malloc(5 * sizeof(char*));
	v[0] = calloc(5, 1);
	v[1] = calloc(5, 1);
	v[2] = calloc(5, 1);
	v[3] = calloc(5, 1);
	v[4] = calloc(7, 1);
	memcpy(v[0], s1, 5);
	memcpy(v[1], s2, 5);
	memcpy(v[2], s3, 5);
	memcpy(v[3], s4, 5);
	memcpy(v[4], s5, 7);

	AlphabeticSort(v, 5);

	for (size_t i = 0; i < 5; i++) {
		free(v[i]);
	}
	free(v);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
	return EXIT_SUCCESS;
}