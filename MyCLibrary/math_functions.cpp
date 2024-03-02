#include "math_functions.h"

// !!! YOU NEED TO INCLUDE TO THE PROJECT macro.h HEADER !!! 



/* ALGEBRAIC FUNCTIONS */

int Factorial(const int x) {
	int result = 1;
	for (int i = x; i > 1; i--) {
		result = result * i;
	}
	if (x < 0) {
		MATH_ERROR("%s (Factorial): line %d: x < 0.\n", __FILE__, __LINE__);
	}

	return result;
}

double Pitagora(const double x, const double y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Pitagora(const int x, const int y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}

double BinomialCoefficient(const int n, const int k) {
	if (k > n) {
		MATH_ERROR("%s (BinomialCoefficient): line %d: n > k.\n", __FILE__, __LINE__);
	}
	const double x = (double)Factorial(n);
	const double y = (double)Factorial(k);
	const double differenza = n - k;
	const double c = (double)Factorial(differenza);

	return x / (y * c);
}

double SymmetricBinomial(const int n, const int h, const int k) {
	const double x = (double)Factorial(n);
	const double y = (double)Factorial(h);
	const double z = (double)Factorial(k);

	return x / (y * z);
}

void ScalarProductV(double* v_dest, const double* v2, const size_t size) {
	if (v_dest == nullptr || v2 == nullptr || size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductV): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < size; i++) {
		v_dest[i] *= v2[i];
	}
}
void ScalarProductV(int* v_dest, const int* v2, const size_t size) {
	if (v_dest == nullptr || v2 == nullptr || size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductV): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < size; i++) {
		v_dest[i] *= v2[i];
	}
}

void ScalarProductS(double* v, const double k, const size_t v_size) {
	if (v == nullptr || v_size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductS): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < v_size; i++) {
		v[i] *= k;
	}
}
void ScalarProductS(int* v, const int k, const size_t v_size) {
	if (v == nullptr || v_size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductS): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < v_size; i++) {
		v[i] *= k;
	}
}





/* AREA CALCULATIONS */

double TriangleArea(const double base, const double h) {
	return (base * h) / (double)2;
}
double TriangleArea(const int base, const int h) {
	return (base * h) / (double)2;
}

double SquareArea(const double l) {
	return pow(l, 2);
}
int SquareArea(const int l) {
	return pow(l, 2);
}

double ParallelogramArea(const double base, const double h) {
	return base * h;
}
int ParallelogramArea(const int base, const int h) {
	return base * h;
}

double RhombusArea(const double d1, const  double d2) {
	return (d1 * d2) / (double)2;
}
double RhombusArea(const int d1, const int d2) {
	return (d1 * d2) / (double)2;
}

double TrapezeArea(const double b1, const double b2, const double h) {
	return ((b1 + b2) * h) / (double)2;
}
double TrapezeArea(const int b1, const int b2, const int h) {
	return ((b1 + b2) * h) / (double)2;
}

double CircleArea(const double r) {
	return PI * pow(r, 2);
}
double CircleArea(const int r) {
	return PI * pow(r, 2);
}

double CircularCrownArea(const double rex, const double rin) {
	return ((pow(rex, 2) - pow(rin, 2)) * PI) / (double)2;
}
double CircularCrownArea(const int rex, const int rin) {
	return ((pow(rex, 2) - pow(rin, 2)) * PI) / (double)2;
}





/* VOLUMES CALCULATIONS */

double RectangleVolume(const double l, const double p, const double h) {
	return ParallelogramArea(l, p) * h;
}
int RectangleVolume(const int l, const int p, const int h) {
	return ParallelogramArea(l, p) * h;
}

double CubeVolume(const double l) {
	return pow(l, 3);
}
int CubeVolume(const int l) {
	return pow(l, 3);
}

double PiramidVolume(const double base, const double hb, const double h) {
	return (TriangleArea(base, hb) * h) / (double)3;
}
double PiramidVolume(const int base, const int hb, const int h) {
	return (TriangleArea(base, hb) * h) / (double)3;
}