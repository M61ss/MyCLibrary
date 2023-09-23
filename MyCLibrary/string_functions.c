#include "string_functions.h"

// strumenti NON PARTE DELLA LIBRERIA

bool StringIsEmpty(const char* c) {
	return c == NULL;
}

void CharSwap(char* a, char* b) {
	if (StringIsEmpty(a) || StringIsEmpty(b)) {
		INVALID_NULL_POINTER("Swap: NULL pointer passed as parameter.\n");
	}
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

bool DoubleCharPointerIsEmpty(const char** c) {
	return c == NULL;
}

void DoubleCharPointerSwap(char** a, char** b) {
	if (DoubleCharPointerIsEmpty(a) || DoubleCharPointerIsEmpty(b)) {
		INVALID_NULL_POINTER("DoublePointerSwap: NULL pointer passed as parameter.\n");
	}
	char tmp = **a;
	**a = **b;
	**b = tmp;
}

// fine strumenti

char* UserInput(const int input_dim) {
	char* input = calloc(input_dim + 1, 1);
	if (fgets(input, input_dim, stdin) == NULL) {
		free(input);
		ERROR_READING_STDIN;
	}

	return input;
}

bool UserDecision(void) {
	while (1) {
		char decision;
		if (scanf("%c", &decision) != 1) {
			ERROR_READING_STDIN;
		}

		if (decision == 'y' || decision == 'Y') {
			return true;
		}
		else if (decision == 'n' || decision == 'N') {
			return false;
		}
		else {
			perror("UserDecision: invalid input. Accepted answer: 'y' (yes) o 'n' (no).");
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
	if (DoubleCharPointerIsEmpty(s) || s_size == 0) {
		INVALID_NULL_POINTER("AlphabeticSort: string passed is NULL pointer or size is invalid.\n");
	}
	bool is_ordered = false;
	while (!is_ordered) {
		is_ordered = true;
		for (size_t i = 0; i < s_size - 1; i++) {
			if (strcmp(s[i], s[i + 1]) > 0) {
				DoubleCharPointerSwap(&s[i], &s[i + 1]);
				is_ordered = false;
			}
		}
	}
}

char* IntToString(int n) {
	if (n < 0) {
		printf("IntToString: negative values are not accepted.\n");
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