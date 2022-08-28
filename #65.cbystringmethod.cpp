#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int result;
	char str2[50];
	char str[50];
	printf("enter a string\n");
	scanf("%s", &str);
	
	strcpy(str2,str);
	strrev(str2);
	result = strcmp(str2,str);
    printf("original string is %s\n\n", str);
    printf("reversed string is %s\n\n", str2);
    if (result == 0)
    {
    	printf("the entered string is Palindrome\n");
	}
	else 
	{
		printf("the entered string is not Palindrome\n");
	}
	return 0;
}
