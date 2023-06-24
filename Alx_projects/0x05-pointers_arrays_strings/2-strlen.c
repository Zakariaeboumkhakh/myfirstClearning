/*function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 * FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
 */
#include <stdio.h>
#include <string.h>
int _strlen(char *s)
{
	int len = 0;
	while(s[len] != '\0')
	{
		len++;
	}
	return(len);
}
