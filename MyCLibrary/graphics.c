#include "graphics.h"

void Spacer(const size_t n) {
	if (n < 0) {
		INVALID_PARAMETER("%s (Space): line %d: n has to be >= 0.\n", __FILE__, __LINE__);
	}
	for (int i = 0; i < n; i++) {
		SPACE;
	}
}

void Line(const size_t lenght) {
	if (lenght < 0) {
		INVALID_PARAMETER("%s (Line): line %d: lenght has to be >= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < lenght; i++) {
		DASH;
	}
}

void LinePlus(const size_t lenght) {
	if (lenght < 0) {
		INVALID_PARAMETER("%s (LinePlus): line %d: lenght has to be >= 0.\n", __FILE__, __LINE__);
	}
	printf("+-");
	for (size_t i = 0; i < lenght; i++) {
		DASH;
	}
	printf("-+");
}

void Box(const char* s, const size_t padding) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (s == NULL) {
		INVALID_NULL_POINTER("%s (Box): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	else if (padding < 0) {
		INVALID_PARAMETER("%s (Box): line %d: padding has to be >= 0.\n", __FILE__, __LINE__);
	}
	Spacer(padding); LinePlus(strlen(s)); NEWLINE;
	Spacer(padding); printf("| %s |", s); NEWLINE;
	Spacer(padding); LinePlus(strlen(s)); NEWLINE;
}

void Parallelogram(const char* s, const size_t padding, const bool reverted) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (s == NULL) {
		INVALID_NULL_POINTER("%s (Parallelogram): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	if (!reverted) {
		Spacer(padding); LinePlus(strlen(s)); NEWLINE;
		Spacer(padding + 1); printf("\\ %s \\", s); NEWLINE;
		Spacer(padding + 2); LinePlus(strlen(s)); NEWLINE;
	}
	else {
		Spacer(padding + 2); LinePlus(strlen(s)); NEWLINE;
		Spacer(padding + 1); printf("/ %s /", s); NEWLINE;
		Spacer(padding); LinePlus(strlen(s)); NEWLINE;
	}
}

void Piramid(const char* s, const size_t padding, const bool reverted) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (s == NULL || strlen(s) == 0) {
		INVALID_NULL_POINTER("%s (Piramid): line %d: string passed is a NULL pointer or is empty.\n", __FILE__, __LINE__);
	}
	int s_lenght = (int)strlen(s);
	bool is_equal = (s_lenght % 2) == 0;
	if (reverted) {
		Spacer(padding); LinePlus(s_lenght + 2); NEWLINE;
		Spacer(padding); printf(" \\ %s /", s); NEWLINE;
		int space_counter = 2, interspace = s_lenght;
		while (interspace >= 0) {
			Spacer(space_counter + padding); printf("\\"); Spacer(interspace); printf("/"); NEWLINE;

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
			Spacer(space_counter + padding); printf("/"); Spacer(insterspace); printf("\\"); NEWLINE;

			space_counter--;
			insterspace += 2;
		}
		Spacer(padding); printf(" / %s \\", s); NEWLINE;
		Spacer(padding); LinePlus(s_lenght + 2); NEWLINE;
	}
}