#include "graphics.h"

void Space(int n) {
	if (n < 0) {
		INVALID_PARAMETER("Spacer: n has to be >= 0.\n");
	}
	for (int i = 0; i < n; i++) {
		printf(" ");
	}
}

void Line(size_t lenght) {
	printf("+-");
	for (size_t i = 0; i < lenght; i++) {
		printf("-");
	}
	printf("-+\n");
}

void Box(char* s) {
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("Box: string passed is a NULL pointer.\n");
	}
	Line(strlen(s));
	printf("| %s |\n", s);
	Line(strlen(s));
}

void Parallelogram(char* s, bool reverted) {
	if (IsEmpty(s)) {
		INVALID_NULL_POINTER("Parallelogram: string passed is a NULL pointer.\n");
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

void Piramid(char* s, bool reverted) {
	if (IsEmpty(s) || strlen(s) == 0) {
		INVALID_NULL_POINTER("Piramid: string passed is a NULL pointer or is empty.\n");
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