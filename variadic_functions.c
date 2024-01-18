#include "variadic_functions.h"

/*Task 1*/
/**
 * calculate_average - Calculate the average of a variable number of arguments.
 * @num_args: Number of arguments.
 * @...: Variable number of arguments.
 *
 * Return: Average of the arguments.
 */
double calculate_average(int num_args, ...)
{       
        va_list args;
        double sum = 0.0;
        int i;
        
        /* Initialize the va_list to handle the variable arguments */
        va_start(args, num_args);
        
        /* Summing up all the arguments */
        for (i = 0; i < num_args; ++i)
		sum += va_arg(args, double);

	/* Clean up the va_list */
	va_end(args);

	/* Calculate the average */
	if (num_args > 0)
	{
		return (sum / num_args);
	}
	else
	{
		/* Avoid division by zero */
		fprintf(stderr, "Error: Division by zero\n");
		return (0.0);
	}
}

/*Task 2 - in the README*/


/*Task 3*/
/*Variadic functions to concatentes strings*/
/**
 * concatenate_strings - Concatenate strings with different types.
 * @format: Format string specifying the types of arguments.
 * @...: Variable number of arguments.
 *
 * Return: Concatenated string (needs to be freed by the caller).
 */
char *concatenate_strings(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	size_t total_length = 0;
	const char *c;

	char *result = NULL;
	char *current_position = NULL;
	char *str;
        int num;
        double num_double;
	va_start(args, format);

	/* Calculate the total length needed for the concatenated string */
	for (c = format; *c != '\0'; ++c)
	{
		switch (*c) {
			case 's':
		    		str = va_arg(args, char *);
				total_length += strlen(str);
				break;
			case 'd':
				num = va_arg(args, int);
				/* Assuming a reasonable maximum length for integer conversion */
				total_length += 12; /* 12 characters is enough for most integers */
				break;
			case 'f':
				num_double = va_arg(args, double);
				/* Assuming a reasonable maximum length for float conversion */
				total_length += 20; /* 20 characters is enough for most floats */
				break;
			/* Add more type cases as needed */
		}
	}

	va_end(args);
	/* Allocate memory for the concatenated string */
	result = (char *)malloc(total_length + 1); /* +1 for the null terminator */
	if (result != NULL)
	{
		va_start(args, format);

		/* Construct the concatenated string */
		current_position = result;
		for (c = format; *c != '\0'; ++c)
		{
			switch (*c) {
				case 's':
					str = va_arg(args, char *);
                    			strcpy(current_position, str);
                    			current_position += strlen(str);
                    			break;
				case 'd':
                    			num = va_arg(args, int);
                    			/* Assuming snprintf for integer to string conversion */
                    			current_position += snprintf(current_position, 12, "%d", num);
					break;
				case 'f':
					num_double = va_arg(args, double);
					/* Assuming snprintf for float to string conversion */
					current_position += snprintf(current_position, 20, "%f", num_double);
					break;

				/* Add more type cases as needed */
			}
		}

		*current_position = '\0'; /* Null-terminate the result */
		va_end(args);
	}
	return (result);

}
