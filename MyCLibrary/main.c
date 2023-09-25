#include "main.h"
#include <locale.h>

int main(void) {
	// permette la codifica UTF-8 e UTF-16 nella shell (testato solo su windows)
	setlocale(LC_ALL, "");
	Piramid("Ehilà", true);



	return EXIT_SUCCESS;
}