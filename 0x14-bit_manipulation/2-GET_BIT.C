#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @decimalNumber: number to search
 * @bitIndex: index of the bit
 *
 * Return: value of the bit
*/
int get_bit(unsigned long int decimalNumber, unsigned int bitIndex)
{
int bitValue;

if (bitIndex > 63)
return (-1);

bitValue = (decimalNumber >> bitIndex) & 1;

return (bitValue);
}
