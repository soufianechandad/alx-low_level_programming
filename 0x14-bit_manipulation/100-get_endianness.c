#include "main.h"

/**
 * checks if a machine is few or more 
 *  0 for more, 1 for few
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
