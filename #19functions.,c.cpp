#include <stdio.h>
int sum(int a, int b); //==declaration,with argument&return
void printstar(int n)
{for (int i =0;i <n;i++)
{
	printf("%c", '*');  //==with argument without return value
	}
}


int takenumber()
{
	int i;
	printf("enter a number");
	scanf("%d", &i);
	return i;
}
int main()
{
	c = takenumber();
	printf("the number is %d\n", c);
	int a, b, c;
	//a=9;
	//b=87;
	//c = sum(a, b);
	//printstar(7);
	//printf("the sum is  %d\n", c);	
	return 0;}
//	int sum(int a, int b)  //=== declaration
//{return a+b;}

