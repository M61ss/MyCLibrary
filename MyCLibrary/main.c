#include "main.h"

int main(void) {
	Box("Ehilà!", 0);
	NEWLINE;
	LinePlus(strlen("ssssssssssss"));
	NEWLINE;
	Piramid("Error", 0, false);
	NEWLINE;
	Parallelogram("ssssssss", 3, true);
	NEWLINE;
	Piramid("A testa in giù", 5, true);
	NEWLINE;
	Box("I'm the fastest reader in the world", 4);

	return EXIT_SUCCESS;
}