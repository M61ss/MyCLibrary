#include "main.h"
#include <ctype.h>

int main(void) {
	Box("Ehilà!", 0); NEWLINE;
	LinePlus((int)strlen("ssssssssssss")); NEWLINE;
	Piramid("Error", 0, false); NEWLINE;
	Parallelogram("ssssssss", 3, true); NEWLINE;
	Piramid("A testa in giù", 5, true); NEWLINE;
	Box("I'm the fastest reader in the world", 4); NEWLINE;
	Arrow(3, 0); NEWLINE;
	Arrow(0, 1); NEWLINE;
	Arrow(6, -4); NEWLINE;
	printf("%s", IntToString(23));

	return EXIT_SUCCESS;
}