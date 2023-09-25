#include "graphics.h"

void Space(const int n) {
	if (n < 0) {
		INVALID_PARAMETER("%s (Space): line %d: n has to be >= 0.\n", __FILE__, __LINE__);
	}
	for (int i = 0; i < n; i++) {
		printf(" ");
	}
}

void Line(const size_t lenght) {
	printf("+-");
	for (size_t i = 0; i < lenght; i++) {
		printf("-");
	}
	printf("-+\n");
}

void Box(const char* s) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("%s (Box): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	Line(strlen(s));
	printf("| %s |\n", s);
	Line(strlen(s));
}

void Parallelogram(const char* s, const bool reverted) {
#ifdef UTF8_ENCODE
#include <locale.h>
	setlocale(LC_ALL, "");
#endif // UTF8_ENCODE
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("%s (Parallelogram): line %d: string passed is a NULL pointer.\n", __FILE__, __LINE__);
	}
	if (!reverted) {
		Line(strlen(s));
		printf(" \\ %s \\\n  ", s);
		Line(strlen(s));
	}
	else {
		printf("  "); Line(strlen(s));
		printf(" / %s /\n", s);
		Line(strlen(s));
	}
}

void Piramid(const char* s, const bool reverted) {
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
		Line(s_lenght + 2);
		printf(" \\ %s /\n", s);
		int space_counter = 2, interspace = s_lenght;
		while (interspace >= 0) {
			Space(space_counter);
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
			Space(space_counter);
			printf("/");
			Space(insterspace);
			printf("\\\n");

			space_counter--;
			insterspace += 2;
		}
		printf(" / %s \\\n", s);
		Line(s_lenght + 2);
	}
}