#include "main.h"
#include <unistd.h>
/**
 * writes the character c
 *
 * Ret On suc 1.
 *  -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
