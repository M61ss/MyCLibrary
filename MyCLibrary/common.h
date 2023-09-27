#ifndef COMMON_H
#define COMMON_H

#include "macro.h"

#ifndef MACRO_H
#error common.h: need the header "macro.h"
#endif // !MACRO_H


/********************************************************************************/
/*									DEFINE										*/
/********************************************************************************/


#ifndef ABS
/** @brief Macro return absolute value of a number */
#define ABS(a) (a) < 0 ? -(a) : (a)
#endif // !ABS

#ifndef MAX
/** @brief Macro return the maximum value between the two passed */
#define MAX(a, b) (a) > (b) ? (a) : (b)
#endif // !MAX

#ifndef MIN
/** @brief Macro return the minimum value between the two passed */
#define MIN(a, b) (a) < (b) ? (a) : (b)
#endif // !MIN



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `IsEmpty()` verify if a pointer is NULL.

@param[in] p = Pointer.

@return false if p == NULL, true otherwise.
*/
extern bool IsEmpty(const void* p);

/** @brief Function `DoublePointerIsEmpty()` verify if a double pointer is NULL.

@param[in] c = Double pointer.

@return false if c == NULL, true otherwise.
*/
extern bool DoublePointerIsEmpty(const void** c);

/** @brief Function `IsEqual()` verify if a number is equal.

@param[in] n = 4 byte integer.

@return true if (n % 2) == 0, false otherwise.
*/
extern bool IsEqual(const int* n);

/** @brief Function `charSwap()` swap the content of two char pointer.

@param[in] a = char pointer.
@param[in] b = char pointer.

@return void
*/

extern void charSwap(char* a, char* b);
/** @brief Function `shortSwap()` swap the content of two short pointer.

@param[in] a = short pointer.
@param[in] b = short pointer.

@return void
*/

extern void shortSwap(short* a, short* b);
/** @brief Function `floatSwap()` swap the content of two float pointer.

@param[in] a = float pointer.
@param[in] b = float pointer.

@return void
*/
extern void floatSwap(float* a, float* b);

/** @brief Function `intSwap()` swap the content of two int pointer.

@param[in] a = int pointer.
@param[in] b = int pointer.

@return void
*/
extern void intSwap(int* a, int* b);

/** @brief Function `doubleSwap()` swap the content of two double pointer.

@param[in] a = double pointer.
@param[in] b = double pointer.

@return void
*/
extern void doubleSwap(double* a, double* b);

/** @brief Function `longSwap()` swap the content of two long pointer.

@param[in] a = long pointer.
@param[in] b = long pointer.

@return void
*/
extern void longSwap(long* a, long* b);

/** @brief Function `llongSwap()` swap the content of two longlong pointer.

@param[in] a = longlong pointer.
@param[in] b = longlong pointer.

@return void
*/
extern void llongSwap(long long* a, long long* b);

/** @brief Function `StringSwap()` swap the content of two pointer to the pointer of the first character of a string.
			STRINGS MUST BE DINAMICALLY ALLOCATED!

@param[in] s1 = pointer to pointer to first character of a string.
@param[in] s2 = pointer to pointer to first character of a string.

@return void
*/
extern void StringSwap(char** s1, char** s2);

#endif // !COMMON_H