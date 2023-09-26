/** @file
This file contains the documentation about some functions that may be useful 
coding many command-line graphics, like boxes, lines, piramids, ect.
*/

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "macro.h"
#include  <stdio.h>

#ifndef MACRO_H
#error graphics.h: need the header "macro.h"
#endif // !MACRO_H


/********************************************************************************/
/*									DEFINE										*/
/********************************************************************************/



#ifndef UTF_ENCODE
/** @brief Definition that is needed if you want to use the UTF codification of the system shell */
#define UTF_ENCODE
#endif // !UTF_ENCODE

#ifndef DASH
/** @brief Macro used for print a single dash */
#define DASH printf("-")
#endif // !DASH

#ifndef SPACE
/** @brief Macro used for print a single space */
#define SPACE printf(" ")
#endif // !SPACE

#ifndef TAB
/** @brief Macro used for print a single tabulation */
#define TAB printf("\t")
#endif // !TAB

#ifndef NEWLINE
/** @brief Macro used for print a new-line character (\n) */
#define NEWLINE printf("\n")
#endif // !NEWLINE



/********************************************************************************/
/*									FUNCTIONS									*/
/********************************************************************************/



/** @brief Function `Space()` prints on STDOUT a sequence of space.

@param[in] n = Number of space to print; it must be >= 0.

@return void
*/
extern void Spacer(const int n);

/** @brief Function `Line()` prints on STDOUT a sequence of dash.

@param[in] lenght = Number of dash to print; it must be >= 0.

@return void
*/
extern void Line(const int lenght);

/** @brief Function `LinePlus()` prints on STDOUT a sequence of dash preceded by `+-` and ended by `-+`.

@param[in] lenght = Number of dash to print; it must be >= 0.

@return void
*/
extern void LinePlus(const int lenght);

/** @brief Function `Arrow()` prints on STDOUT an arrow.

@param[in] lenght = Lenght of the arrow (misured in dash);
@param[in] direction = If direction > 0 the arrow points to right; if < 0 it points to left; if == 0 it points to both of directions.

@return void
*/
extern void Arrow(const int lenght, const int direction);

/** @brief Function `Box()` prints on STDOUT a box containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window.

@return void
*/
extern void Box(const char* s, const int padding);

/** @brief Function `Parallelogram()` prints on STDOUT a parallelogram containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window;
@param[in] reverted = if true the parallelogram pends on right side, if false vice versa.

@return void
*/
extern void Parallelogram(const char* s, const int padding, const bool reverted);

/** @brief Function `Piramid()` prints on STDOUT a triangle containing a string.

@param[in] s = String;
@param[in] padding = Distance from the left side of the shell's window;
@param[in] reverted = if true the top of the triangle points to the ground, if false vice versa.

@return void
*/
extern void Piramid(const char* s, const int padding, const bool reverted);

#endif // !GRAPHICS_H