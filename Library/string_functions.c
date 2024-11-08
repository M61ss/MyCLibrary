#include "string_functions.h"

char* UserInput(const int input_dim) {
	char* input = calloc(input_dim + 1, 1);
	if (fgets(input, input_dim, stdin) == NULL) {
		free(input);
		ERROR_READING_STDIN(__FILE__, __LINE__);
	}

	return input;
}

bool UserDecision(void) {
	while (1) {
		char decision;
		if (scanf("%c", &decision) != 1) {
			ERROR_READING_STDIN(__FILE__, __LINE__);
		}

		if (decision == 'y' || decision == 'Y') {
			return true;
		}
		else if (decision == 'n' || decision == 'N') {
			return false;
		}
		else {
			printf("%s (UserDecision): line %d: invalid input. Accepted answer: 'y' (yes) o 'n' (no).\n", __FILE__, __LINE__);
		}
	}
}

void WhitespaceRemove(char* s) {
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\r') {
			for (size_t j = i; j < strlen(s) - 1; j++) {
				s[j] = s[j + 1];
			}
		}
	}
}

void AlphabeticSort(char** s, const size_t s_size) {
	if (IsEmpty(s) || s_size == 0) {
		INVALID_NULL_POINTER("%s (AlphabeticSort): line %d: string passed is NULL pointer or size is invalid.\n", __FILE__, __LINE__);
	}
	for (size_t j = 0; j < s_size; j++) {
		for (size_t i = j + 1; i < s_size; i++) {
			if (strcmp(s[j], s[i]) > 0) {
				StringSwap(&s[j], &s[i]);
			}
		}
	}
}

char* IntToString(int n) {
	if (n < 0) {
		printf("%s (IntToString): line %d: negative values are not accepted.\n", __FILE__, __LINE__);
		exit(-1);
	}
	size_t lenght = 0;
	char* s = malloc(1);
	for (size_t i = 0; n > 0; i++) {
		int cifra = n % 10;
		n /= 10;
		lenght++;
		s = realloc(s, lenght + 1);
		s[i] = cifra + '0';
		s[i + 1] = 0;
	}
	_strrev(s);

	return s;
}