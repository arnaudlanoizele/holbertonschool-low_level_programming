#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Adds 2 numbers
* @a: First number
* @b: Second number
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Substracts two numbers
* @a: The first number
* @b: The second number
* Return: The difference a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Multiplies two numbers
* @a: The first number
* @b: The second numbers
* Return: The product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Divide two number
* @a: The first number
* @b: The second number
* Return: The result of the division of a and b
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - Computes the remainder of the division of two numbers
* @a: The first number
* @b: The second number
* Return: The remainder of the division of a by b
*/
int op_mod(int a, int b)
{
return (a % b);
}
