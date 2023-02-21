#include "main.h"

/*
 * _islower : checks the character to see whether 
 * it's lowercase and retrn true or false in binary
 * form.
 * return : return 1 if lowercase and 0 if !lowercase
 */
int _islower(int c)
{
	
	if (c >= 97 && c <= 122 )
		return (1);
	else
		return( 0);

}
