#ifndef MACRO_H
#define MACRO_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#ifndef MATH_ERROR
#define MATH_ERROR(message, location, line) printf(message, location, line); exit(1)	/* fatal error executing math operations */
#endif // !MATH_ERROR

#ifndef ERROR_READING_STDIN
#define ERROR_READING_STDIN(location, line) printf("%s: line: %d. Error reading string from stdin\n.", location, line); exit(2)		/* error reading from standard input */
#endif // !ERROR_READING_STDIN

#ifndef INVALID_NULL_POINTER
#define INVALID_NULL_POINTER(message, location, line) printf(message, location, line); exit(3)		/* error cause a NULL */
#endif // !INVALID_NULL_POINTER

#ifndef INVALID_PARAMETER
#define INVALID_PARAMETER(message, location, line) printf(message, location, line); exit(4)		/* one or more parameter passed to the function caused a fatal error */
#endif // !INVALID_PARAMETER

#endif // !MACRO_H
