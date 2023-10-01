#include "math_functions.h"

/* FUNZIONI ALGEBRICHE */

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

double BinomialCoefficient(const int n, const int k) {
	if (k > n) {
		MATH_ERROR("%s (BinomialCoefficient): line %d: n > k.\n", __FILE__, __LINE__);
	}
	const int x = Factorial(n);
	const int y = Factorial(k);
	const int differenza = n - k;
	const int c = Factorial(differenza);

	return (double)x / ((double)y * (double)c);
}

double SymmetricBinomial(const int n, const int h, const int k) {
	double x = (double)Factorial(n);
	double y = (double)Factorial(h);
	double z = (double)Factorial(k);

	return x / (y * z);
}

double ScalarProductV(const double* v1, const double* v2, const size_t v1_size, const size_t v2_size) {
	if (v1 == NULL || v2 == NULL || v1_size == 0 || v2_size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductV): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	else if (v1_size != v2_size) {
		MATH_ERROR("%s (ScalarProductV): line %d: v1 and v2 have different sizes.\n", __FILE__, __LINE__);
	}
	double result = 0;
	for (size_t i = 0; i < v1_size; i++) {
		result += v1[i] * v2[i];
	}

	return result;
}

void ScalarProductS(double* v, const double k, const size_t v_size) {
	if (v == NULL || v_size == 0) {
		INVALID_NULL_POINTER("%s (ScalarProductS): line %d: v is a NULL pointer or v_size <= 0.\n", __FILE__, __LINE__);
	}
	for (size_t i = 0; i < v_size; i++) {
		v[i] *= k;
	}
}

/* CALCOLO DI AREE */

double AreaTriangolo(const double base, const double altezza) {
	return (base * altezza) / (double)2;
}

double AreaQuadrato(const double lato) {
	return pow(lato, 2);
}

double AreaParallelogramma(const double base, const double altezza) {
	return base * altezza;
}

double AreaRombo(const double d1, const  double d2) {
	return (d1 * d2) / (double)2;
}

double AreaTrapezio(const double b1, const double b2, const double altezza) {
	return ((b1 + b2) * altezza) / (double)2;
}

double AreaCfr(const double raggio) {
	return 3.14 * pow(raggio, 2);
}

double AreaCoronaCir(const double rex, const double rin) {
	return ((pow(rex, 2) - pow(rin, 2)) * 3.14) / (double)2;
}

/* CALCOLO DI VOLUMI */

double VolumeRettangolo(const double l, const double p, const double h) {
	return AreaParallelogramma(l, p) * h;
}

double VolumeCubo(const double l) {
	return pow(l, 3);
}

double VolumePiramide(const double base, const double altezza, const double h) {
	return (AreaTriangolo(base, altezza) * h) / 3;
}