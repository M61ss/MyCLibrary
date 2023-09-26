/** @file
This file contains the documentation about some functions that may be useful 
coding many command-line graphics, like boxes, lines, piramids, ect.
*/

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "macro.h"
#include  <stdio.h>

#ifndef MACRO_H
#error This library needs the header "macro.h"
#endif // !MACRO_H


/********************************************************************************/
/*									DEFINE										*/
/********************************************************************************/



/** @brief Definition that is needed if you want to use the UTF codification of the system shell */
#define UTF8_ENCODE

/** @brief Macro used for print a single dash */
#define DASH printf("-")

/** @brief Macro used for print a single space */
#define SPACE printf(" ")

/** @brief Macro used for print a new-line character (\n) */
#define NEWLINE printf("\n")



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `Space()` prints on STDOUT a sequence of space.

@param[in] n = Number of space to print; it must be >= 0.

@return void
*/
extern void Spacer(const size_t n);

/** @brief Function `Line()` prints on STDOUT a sequence of dash.

@param[in] lenght = Number of dash to print; it must be >= 0.

@return void
*/
extern void Line(const size_t lenght);

/** @brief Function `LinePlus()` prints on STDOUT a sequence of dash preceded by `+-` and ended by `-+`.

@param[in] lenght = Number of dash to print; it must be >= 0.

@return void
*/
extern void LinePlus(const size_t lenght);

/** @brief Function `Box()` prints on STDOUT a box containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window.

@return void
*/
extern void Box(const char* s, const size_t padding);

/** @brief Function `Parallelogram()` prints on STDOUT a parallelogram containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window;
@param[in] reverted = if true the parallelogram pends on right side, if false vice versa.

@return void
*/
extern void Parallelogram(const char* s, const size_t padding, const bool reverted);

/** @brief Function `Piramid()` prints on STDOUT a triangle containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window;
@param[in] reverted = if true the top of the triangle points to the ground, if false vice versa.

@return void
*/
extern void Piramid(const char* s, const size_t padding, const bool reverted);

#endif // !GRAPHICS_H