#include <stdio.h>
#include <stdlib.h>

	int* functionDangling()
	{
	int a, b, sum;
	a = 34;
	b = 363;
	sum = a+b;
	return &sum;
	}
int main()
{
	//deallocation of memory block      case 1
	int *ptr = (int*) malloc(7* sizeof(int));
	ptr[0] = 34;
	ptr[1] = 32;
	ptr[2] = 33;
	ptr[3] = 31;
	free(ptr);
	
	//func. returning local variable       case 2

	int * dangPtr = functionDangling();
	
	int * danglingPtr3;
	//a variable goes out of scope         case 3 
	{
		int  a = 23;
		danglingPtr3 = &a;
	}
	// here variable a goes out of scope
	// which means danglinptr3 is pointing  to a location which is feed and hence
	//danlingPtr3 is now a dangling pointer
	
	
	
	return 0;
}
