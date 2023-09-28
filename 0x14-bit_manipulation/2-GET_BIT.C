#include "main.h"

/**
 * get_bit - return to bit 
 * @n: nomero de recherch
 *  the bit
 *
 * Return to bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
