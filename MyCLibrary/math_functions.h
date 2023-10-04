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



/** @brief Function `Factorial()` calculates the factorial of a positive integer number.

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
@param[in] h = 4 bytes integer;
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

/** @brief Function `TriangleArea()` calculates a triangle's area.

@param[in] base = base;
@param[in] h = height.

@return double = triangle's area.
*/
extern double TriangleArea(const double base, const double h);

/** @brief Function `SquareArea()` calculatesa square's area.

@param[in] side = side.

@return double = square's area.
*/
extern double SquareArea(const double side);

/** @brief Function `ParallelogramArea()` calculates a parallelogram's area.

@param[in] base = base;
@param[in] h = height.

@return double = parallelogram's area.
*/
extern double ParallelogramArea(const double base, const double h);

/** @brief Function `RhombusArea()` calculates a rhombus's area.

@param[in] d1 = larger diagional;
@param[in] d2 = smaller diagonal.

@return double = rhombus's area.
*/
extern double RhombusArea(const double d1, const double d2);

/** @brief Function `TrapezeArea()` calculates a trapeze's area.

@param[in] b1 = larger base;
@param[in] b2 = smaller base;
@param[in] h = height.

@return double = trapeze's area.
*/
extern double TrapezeArea(const double b1, const double b2, const double h);

/** @brief Function `CircleArea()` calculates a circle's area.

@param[in] r = radius.

@return double = circle's area.
*/
extern double CircleArea(const double r);

/** @brief Function `CircularCrownArea()` calculates the area of a circular crown.

@param[in] rex = external circle's radius;
@param[in] rin = internal circle's radius;

@return double = circular crown's area.
*/
extern double CircularCrownArea(const double rex, const double rin);

/** @brief Function `RectangleVolume()` calculates a rectangular solid's volume.

@param[in] l = first side of base;
@param[in] p = second side of base;
@param[in] h = solid's height.

@return double = rectangular solid's volume.
*/
extern double RectangleVolume(const double l, const double p, const double h);

/** @brief Function `CubeVolume()` calculates a cube's volume.

@param[in] l = whatever side of base.

@return double = cube's volume.
*/
extern double CubeVolume(const double l);

/** @brief Function `PiramidVolum()` calculates a piramid's volume.

@param[in] base = base's side of base;
@param[in] hb = base's height;
@param[in] h = piramid's height.

@return double = piramid's volume.
*/
extern double PiramidVolum(const double base, const double hb, const double h);

#endif // !MATH_FUNCTIONS_H