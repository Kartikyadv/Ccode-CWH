#include <stdio.h>
#include <stdlib.h>

int main()
{
	int chars, i =0;
	char *ptr;
    while (i < 3)
    {
    printf("employee %d : enter the no. of character in your Employee ID\n", i+1);
    scanf("%d", &chars);
    ptr = (char*) malloc((chars+1)*sizeof(char));
    printf("enter your Employee ID\n");
    scanf("%s", ptr);
     printf("your Employee ID is %s\n", ptr );
     free(ptr);
     i = i + 1;
	}
	return 0;
}
