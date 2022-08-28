#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * ptr;
	int n;
	printf("enter the no. of character in your id:\n");
	scanf("%d", &n);
	int i = 1;
	for (; i < 4; i++)
	{
	ptr = (char*) malloc((n+1)*sizeof(char));
	printf("enter the employee id of employee no. %d:\n", i);
	scanf("%s", &ptr);
	
    }
	return 0;
}
