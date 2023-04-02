#include "main.h"



/**
 * is_printable - Evaluate if a char is printable
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Apped ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at whic to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */



int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hea format code is alwys 2 digts long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_dgit - Verifes if a char is a igit
 * @c: Char to be evalated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */


int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_nuber - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number inicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_sizeunsgnd - Casts a number to the specified size
 * nm: Number to be casted
 * sze: Number indicating the typto be casted
 *
 * Return:value of num
 */


long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
