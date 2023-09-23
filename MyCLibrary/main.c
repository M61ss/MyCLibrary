#include "main.h"

int main(void) {
	char* new_s = IntToString(3209);
	
	printf("%s", new_s);
	free(new_s);
	return EXIT_SUCCESS;
}