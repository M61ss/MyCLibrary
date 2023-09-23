#include "graphics.h"

void Line(size_t lenght) {
	printf("+-");
	for (size_t i = 0; i < lenght; i++) {
		printf("-");
	}
	printf("-+\n");
}

void StringBox(char* s) {
	Line(strlen(s));
	printf("| %s |\n", s);
	Line(strlen(s));
}