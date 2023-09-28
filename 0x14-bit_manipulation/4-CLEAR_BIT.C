#include "main.h"

/**
 * delet_bit - puts the value for a given bit to 0
 * pointer to index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
