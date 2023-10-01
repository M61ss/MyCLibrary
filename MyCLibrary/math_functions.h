#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#include "macro.h"
#include <math.h>

#ifndef MACRO_H
#error math_functions.h: need the header "macro.h"
#endif // !MACRO_H



/********************************************************************************/
/*									DEFINE										*/
/********************************************************************************/



#ifndef PI
/** @brief Macro represents the greek pi */
#define PI 3.14159265
#endif // !PI

#ifndef E
/** @brief Macro represents the Euler's number */
#define E 2.71828182
#endif // !E



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `Fattoriale()` calculates the factorial of a positive integer number.

@param[in] x = 4 bytes integer; it must be >= 0.

@return int = factorial of x.
*/
extern int Factorial(const int x);

/** @brief Function `BinomialCoefficient()` calculates the binomial coefficient of two integer numbers.

@param[in] n = 4 bytes integer;
@param[in] k = 4 bytes integer.

@return double = binomial coefficient of n and k.
*/
extern double BinomialCoefficient(const int n, const int k);

/** @brief Function `SymmetricBinomial()` calculates the symmetric binomial of three integer numbers.

@param[in] n = 4 bytes integer;
@param[in] h = 4 bytes integer.
@param[in] k = 4 bytes integer.

@return double = symmetric binomial of n, h and k.
*/
extern double SymmetricBinomial(const int n, const int h, const int k);

/** @brief Function `ScalarProductV()` calculates the scalar product between two vectors.

@param[in] v1 = first vector;
@param[in] v2 = second vector;
@param[in] v1_size = first vector's size;
@param[in] v2_size = second vector's size.

@return double = result of scalar product between two vectors.
*/
extern double ScalarProductV(const double* v1, const double* v2, const size_t v1_size, const size_t v2_size);

/** @brief Function `ScalarProductV()` calculates the scalar product between a vector and a scalar number.

@param[in] v = vector;
@param[in] k = scalar number;
@param[in] v_size = vector's size.

@return double = result of scalar product between the vector and the scalar k.
*/
extern void ScalarProductS(double* v, const double k, const size_t v_size);

// calcola l'area del triangolo date base e altezza
extern double AreaTriangolo(const double base, const double altezza);

// calcola l'area del quadrato dato il lato
extern double AreaQuadrato(const double lato);

// calcola l'area del parallelogramma date base e altezza
extern double AreaParallelogramma(const double base, const double altezza);

// calcola l'area del rombo date le due diagonali
extern double AreaRombo(const double d1, const double d2);

// calcola l'area del trapezio date base minore (b1), base maggiore (b2) e altezza
extern double AreaTrapezio(const double b1, const double b2, const double altezza);

// calcola l'area della circonferenza dato il raggio
extern double AreaCfr(const double raggio);

// calcola l'area della corona circolare dato il raggio della circonferenza esterna e il raggio di quella interna
extern double AreaCoronaCir(const double rex, const double rin);

// calcola il volume di un solido rettangolare dati lato, profondità e altezza
extern double VolumeRettangolo(const double l, const double p, const double h);

// calcola il volume di un cubo dato il lato
extern double VolumeCubo(const double l);

// calcola il volume della piramide date base e altezza del triangolo alla base della piramide e l'altezza della stessa(h) 
extern double VolumePiramide(const double base, const double altezza, const double h);

#endif // !MATH_FUNCTIONS_H