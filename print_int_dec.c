#include "main.h"
/**
 * _abs - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * countdigit - counts the digits.
 * @number: input integer
 * Return: digit count
 */
int countdigit(int number)
{
<<<<<<< HEAD
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;
=======
	int count = 0;
	int number2 = number;
>>>>>>> 896e448e3ee9b1db6ace89376a019fe151b9d85f

	if (number <= 0)
		count += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
/**
 * integer - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = countdigit(number);
if (number < 0)
{
_putchar('-');
unint = -number;
}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * printint - prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
<<<<<<< HEAD
int _printdec(char *format, va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int exp = 1;
       (void)format;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
=======
int printint(char *format, va_list pa)
{
	int number = va_arg(pa, int);
	int numero;
	(void)format;

	numero = integer(number);
>>>>>>> 896e448e3ee9b1db6ace89376a019fe151b9d85f

	return (numero);
}
