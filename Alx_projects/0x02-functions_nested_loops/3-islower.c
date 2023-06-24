/*Write a function that checks for lowercase character.
 *
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * FYI: The standard library provides a similar function: islower. Run man islower to learn more.
 */
#include <stdio.h>
#include <ctype.h>
int _islower(int c){
	if (c >= 'a'&& c <= 'z'){
		return (1);
	}
	else {
		return (0);
	}
}
