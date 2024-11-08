#ifndef MATH_FUNCTIONS_H
  #define MATH_FUNCTIONS_H

// !!! YOU NEED TO INCLUDE TO THE PROJECT `macro.h` HEADER !!! 



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

#include "macro.h"
#include <math.h>

/* Controls of functions of this header are realized using macros contained in macro.h */
#ifndef MACRO_H
  #error math_functions.h: need the header "macro.h"
#endif // !MACRO_H



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Calculates the factorial of a number

@param[in] x = number of which you want to calculate factorial;
*/
extern int Factorial(const int x);

/** @brief Calculates the hypotenuse of a couple of cathetes of a right trinangle

@param[in] x = cathetus 1;
@param[in] y = cathetus 2;
*/
extern double Pitagora(const double x, const double y);

/** @brief Calculates the binomial coefficient giving thw two necessary parameters

@param[in] n = upper number;
@param[in] k = lower number;
*/
extern double BinomialCoefficient(const int n, const int k);

/** @brief Calculates the binomial coefficient giving thw two necessary parameters

@param[in] n = upper number;
@param[in] h = first lower number;
@param[in] k = second lower number;
*/
extern double SymmetricBinomial(const int n, const int h, const int k);

/** @brief Calculates the scalar product between two vectors of the same size

@param[in] v1 = pointer to the first element of the first vector;
@param[in] v2 = pointer to the first element of the second vector;
@param[in] v_size = size of vectors;
*/
extern void ScalarProductV(double* v_dest, const double* v2, const size_t size);

/** @brief Calculates the scalar product between a scalar number and a vector

@param[in] v = pointer to the first element of the vector;
@param[in] k = the scalar number;
@param[in] v_size = size of the vector;
*/
extern void ScalarProductS(double* v, const double k, const size_t v_size);

/** @brief Calculates the area of a triangle

@param[in] base = base;
@param[in] h = height;
*/
extern double TriangleArea(const double base, const double h);

/** @brief Calculates the area of a square

@param[in] l = side;
*/
extern double SquareArea(const double l);

/** @brief Calculates the area of a parallelogram

@param[in] base = base;
@param[in] h = height;
*/
extern double ParallelogramArea(const double base, const double h);

/** @brief Calculates the area of a rhombus

@param[in] d1 = diagonal 1;
@param[in] d2 = diagonal 2;
*/
extern double RhombusArea(const double d1, const double d2);

/** @brief Calculates the area of a trapeze

@param[in] b1 = base 1;
@param[in] b2 = base 2;
@param[in] h = height;
*/
extern double TrapezeArea(const double b1, const double b2, const double h);

/** @brief Calculates the area of a circle

@param[in] r = radius;
*/
extern double CircleArea(const double r);

/** @brief Calculates the area of a circle crown

@param[in] rex = external radius;
@param[in] rin = internal radius;
*/
extern double CircularCrownArea(const double rex, const double rin);

/** @brief Calculates a rectangle-shaped volume

@param[in] l = side;
@param[in] p = depth;
@param[in] h = height;
*/
extern double RectangleVolume(const double l, const double p, const double h);

/** @brief Calculates a cube

@param[in] l = side;
*/
extern double CubeVolume(const double l);

/** @brief Calculates the volume of a piramid

@param[in] base = base of the triangle at the base;
@param[in] hb = height of the triangle at the base;
@param[in] h = height of the piramid;
*/
extern double PiramidVolume(const double base, const double hb, const double h);

#endif // !MATH_FUNCTIONS_H