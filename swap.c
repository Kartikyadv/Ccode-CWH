#include<stdio.h>
#include<conio.h>
void main()
{
	void swap(int* , int*)
	int a, b;
	printf("Enter 2 No.s\n");
	scanf("%d %d", &a, &b);
	printf("Before swaping \nA : %d\nB : %d", a, b);
	swap(&a, &b);
	printf("After swaping \nA : %d\nB : %d", a, b);
	getch();
}
	void swap(int* x, int* y)
	{
		*x = *x - *y;
		*y = *x - *y;
		*x = *x - *y;
		printf("During swaping \nA : %d\nB : %d", x, y);
		getch();
	}
