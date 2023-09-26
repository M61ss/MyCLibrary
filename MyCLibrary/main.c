#include "main.h"

int main(void) {
	Box("Ehilà!", 0);
	printf("\n");
	LinePlus(strlen("ssssssssssss"));
	printf("\n");
	Piramid("Error", 0, false);
	printf("\n");
	Parallelogram("ssssssss", 3, true);
	printf("\n");
	Piramid("A testa in giù", 5, true);
	printf("\n");
	Box("I'm the fastest reader in the world", 4);

	return EXIT_SUCCESS;
}