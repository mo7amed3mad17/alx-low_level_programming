#include <stdio.h>
/**
* First_by_First - Apply the constructor attribute to First_by_First() so
*  that it is executed before main()
*/
void First_by_First(void) __attribute__((constructor));
/**
* First_by_First - implementation of First_by_first
 */
void First_by_First(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
