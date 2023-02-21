#include "main.h"

/*
 * _islower : checksfor lowercase character
 * return : return 1 if lowercase and 0 if !lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);

}
