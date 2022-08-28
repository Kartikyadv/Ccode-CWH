#include <stdio.h>
#include <stdlib.h>

int average (int a, int b)
{
    return (a + b)/2;
}

void greetHelloAndExecute(int (*fptr)(int, int)){
    printf("Hello user\n");
    printf("The average of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The average of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
    int (*ptr)(int, int);
    ptr = average;
    greetGmAndExecute(ptr);
    return 0;
}

