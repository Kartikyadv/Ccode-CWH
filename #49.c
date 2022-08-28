//#include <stdio.h>
/*int sum;// global varialble
int myfunc(int a,int b)
{
	auto int sum;// auto = normal
	sum = a+b;
	return sum;
}

int main()
{
	//declaration = telling the compiler about the variable( no space reserved)
	//defination = declaration + space reservation
	int sum = myfunc(3, 5);
	printf("the sum is %d\n", sum);
	
	
	return 0;
}*/
/*#include <stdio.h>
int myfunc(int a,int b)
{
	extern int sum;// local variable ki value jyada  hoti h global s 
	return sum;// agar hme global ko print krna h local k hote hue  
}// then we use extern int sum; etc
int sum = 343;
int main()
{
	int sum = myfunc(3, 5);
	printf("the sum is %d\n", sum);
	return 0;	
}*/
#include <stdio.h>

int myfunc(int a,int b)
{
	static int myvar;
	myvar++;
	printf("the myvar is %d\n", myvar);
	return myvar;
}

int main()
{
	register int myvar = myfunc(3, 5);//fast by registeer in cpu 
	 myvar = myfunc(3, 5);
	 myvar = myfunc(3, 5);
	 myvar = myfunc(3, 5);
	
	return 0;
}

































	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
