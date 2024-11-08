#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include "common.h"

#ifndef COMMON_H
#error string_functions.h: need the header "common.h"
#endif // !COMMON_H


/********************************************************************************/
/*									DEFINE										*/
/********************************************************************************/



#ifndef WRITELN
/** @brief Macro that prints a string and a '\n' */
#define WRITELN(s) printf("%s\n", s)
#endif // !WRITELN



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `UserInput()` read from STDIN any input.

@param[in] input_dim = 4 byte integer that defines the number of character to read.

@return char* = pointer to the first character of the string read (including '\n').
*/
extern char* UserInput(const int input_dim);

/** @brief Function `UserDecision()` read from STDIN a single 'y' or 'n' ('yes' or 'no').

@return bool = if true user has printed yes ('y'), instead false in negative case.
*/
extern bool UserDecision(void);

/** @brief Function `WhitespaceRemove()` removes any whitespace in a string. IT DOES NOT EXECUTE REALLOC OF INPUT ARRAY/VECTOR.

@param[in] s = string.

@return void.
*/
extern void WhitespaceRemove(char* s);

/** @brief Function `WhitespaceRemove()` removes any whitespace in a string. EVERY STRING HAS TO BE DINAMICALLY ALLOCATED.

@param[in] s = string double pointer (it is supposed to be a vector of string).
@param[in] s_size = size of the string vector.

@return void.
*/
extern void AlphabeticSort(char** s, const size_t s_size);

// trasforma un int in una stringa (ritorna un vettore dinamico)
extern char* IntToString(int n);

#endif // !STRING_FUNCTIONS_H