#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
	return a + b;
}
int main()
{
	
	printf("The sum is %d\n", sum(1, 2));//testing a f(x)
	int (*fptr)(int , int);//declaring a f(X)
	fptr = sum;//creating a f(x) pointer
	int d  = ((*fptr)(4, 10));//Dereferenceing a function pointer
	printf("The value of d is %d\n", d);
	return 0;
}
