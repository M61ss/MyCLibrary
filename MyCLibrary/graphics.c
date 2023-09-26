#include "graphics.h"

void Space(const size_t n) {
	if (n < 0) {
		INVALID_PARAMETER("%s (Space): line %d: n has to be >= 0.\n", __FILE__, __LINE__);
	}
	for (int i = 0; i < n; i++) {
		printf(" ");
	}
}

void Line(const size_t lenght) {
	if (lenght < 0) {
		INVALID_PARAMETER("%s (Line): line %d: lenght has to be >= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < lenght; i++) {
		printf("-");
	}
}

void LinePlus(const size_t lenght) {
	if (lenght < 0) {
		INVALID_PARAMETER("%s (LinePlus): line %d: lenght has to be >= 0.\n", __FILE__, __LINE__);
	}
	printf("+-");
	for (size_t i = 0; i < lenght; i++) {
		printf("-");
	}
	printf("-+\n");
}

void Box(const char* s, const size_t padding) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("%s (Box): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	else if (padding < 0) {
		INVALID_PARAMETER("%s (Box): line %d: padding has to be >= 0.\n", __FILE__, __LINE__);
	}
	Space(padding); LinePlus(strlen(s));
	Space(padding); printf("| %s |\n", s);
	Space(padding); LinePlus(strlen(s));
}

void Parallelogram(const char* s, const size_t padding, const bool reverted) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("%s (Parallelogram): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	if (!reverted) {
		Space(padding); LinePlus(strlen(s));
		Space(padding + 1); printf("\\ %s \\\n", s);
		Space(padding + 2); LinePlus(strlen(s));
	}
	else {
		Space(padding + 2); LinePlus(strlen(s));
		Space(padding + 1); printf("/ %s /\n", s);
		Space(padding); LinePlus(strlen(s));
	}
}

void Piramid(const char* s, const size_t padding, const bool reverted) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (IsEmpty(s) || strlen(s) == 0) {
		INVALID_NULL_POINTER("%s (Piramid): line %d: string passed is a NULL pointer or is empty.\n", __FILE__, __LINE__);
	}
	int s_lenght = (int)strlen(s);
	bool is_equal = IsEqual(&s_lenght);
	if (reverted) {
		Space(padding); LinePlus(s_lenght + 2);
		Space(padding); printf(" \\ %s /\n", s);
		int space_counter = 2, interspace = s_lenght;
		while (interspace >= 0) {
			Space(space_counter + padding);
			printf("\\");
			Space(interspace);
			printf("/\n");

			space_counter++;
			interspace -= 2;
		}
	}
	else {
		int insterspace = 0, space_counter = s_lenght / 2 + 2;
		if (!is_equal) {
			insterspace++;
		}
		while (insterspace <= s_lenght) {
			Space(space_counter + padding);
			printf("/");
			Space(insterspace);
			printf("\\\n");

			space_counter--;
			insterspace += 2;
		}
		Space(padding); printf(" / %s \\\n", s);
		Space(padding); LinePlus(s_lenght + 2);
	}
}