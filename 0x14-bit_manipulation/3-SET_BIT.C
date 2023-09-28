#include "main.h"

/**
 * put a bit at a for index to 1
 * index bit to 1
 *
 * Retn: 1 vrais , -1 fout
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
