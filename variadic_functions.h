#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>


/*Task 1 - calculates the average of a variable number of arguments*/
double calculate_average(int num_args, ...);

/*Task 3*/
char *concatenate_strings(const char *format, ...);


#endif /*VARIADIC_FUNCTIONS_H*/
