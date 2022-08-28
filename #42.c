#include <stdio.h>
/*int b = 34;// global variable
int func1(int b)
{
	printf("the value of b inside func1 is %d\n", &b);
	printf("the address of b inside func1 is %d\n", &b);
	return b * 10;
}
int main()
{
	int b = 55;
	printf("the address of b inside main is %d\n", &b);
	int val = func1(b);
	int * ptr = &val;
	printf("the value of func1 is %d", val);
	return 0;
}*/
int func1(int b)
{
	static int x = 6;
	printf("the value of x is %d\n", x);
	x++;
	return x;
}
int main()
{
	int b = 344;
	int val = func1(b);
	val = func1(b);
	int*ptr = &val;
	return 0;
}




















