#include <stdio.h>
void changevalue(int* a)
{
	*a = 56;
}
int main()
{
	int a = 34, b = 56 ;
	printf("the value of a is %d\n", a);
	changevalue(&a);
	
	printf("the value of a is %d\n", a);
	
	return 0;
}
