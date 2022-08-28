#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10];
	char s2[10];
	char s3[] = " is a friend of ";
	printf("please enter your 1st friend\n");
	gets(s1);
	
	printf("please enter your 2nd friend\n");
	gets(s2);
	
	
	printf(strcat(s1, strcat(s3,s2)));

	return 0;
}
