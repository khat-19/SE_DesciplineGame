# 31 Days Discipline Game - Week 3 Tasks

Welcome to the third week of the 31 Days Discipline Game! 
In this we will be tackling tasks related to two essential programming concepts: Variadic Functions and Bit Manipulation.

This will be a team effort
[AUTHORS](AUTHORS)

## Concept: Variadic Functions

### Task 1: Calculate Average using Variadic Function

```c
/**
 * Calculates the average of a variable number of arguments.
 * @param num Number of arguments
 * @return Calculated average
 */
double calculateAverage(int num, ...);

Implement a variadic function that calculates the average of a variable number of arguments.
Utilize the va_arg macro to access the variable arguments.
```

#### how we went through task 1:
* The calculate_average function takes an integer num_args 
representing the number of arguments, followed by a variable number of arguments indicated by ...

* Inside the function, a va_list named args is initialized using va_start to handle the variable arguments.

* The va_arg macro is then used to retrieve each argument from the va_list and add them to the sum.

* Finally, the va_end macro is used to clean up the va_list.

* The main function demonstrates the usage of the calculate_average function with three arguments. The result is then printed to the console.

Use this to compile your code:
```gcc -Wall -Werror -pedantic variadic_functions.c main.c -o task-1```
