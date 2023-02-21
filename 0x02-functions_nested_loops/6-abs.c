#include "main.h"
/**
 * int _abs - gives absolut valu of integer
 */
int _abs(int)
{
	int n;
	int absolute;
	if (n < 0)
	{
		n = n * (-1);
	}
	absolute = n;
	return (absolute);
}
