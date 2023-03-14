#include "main.h"
/**
 *factorial - factorial of numbers.
 *@n: input integer
 *Return: factorial
 */
int factorial(int n)
{
if (n < -1)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
