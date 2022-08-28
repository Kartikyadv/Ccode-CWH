/*# include <stdio.h>
# include "#54.c"

int main2()
{
	int var = 0;
	int * ptr = functionDangling();
	printf("this is me%d\n", var);
	return 0;
}
*/
#include <stdio.h>
#define PI 3.14//debugging
# define SQUARE(r) r*r//macros
int main()
{
	int r  = 4;
	float var = PI;
	printf("the value of PI is %f\n", var);
	printf("the area of this circle is %f\n", PI * SQUARE(r)); 
	return 0;
}
