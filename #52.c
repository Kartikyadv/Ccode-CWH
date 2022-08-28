#include <stdio.h>

int main()
{
	int a = 345;
	float b = 2.3;
	void *ptr;
	ptr = &b;
	printf("the value of a is %f\n", *((float *)ptr));//stoaring datatype in  void pointer
	return 0;
}
