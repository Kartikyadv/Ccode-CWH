#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "harry";
	char s2[] = "har";
	char s3[54];
	//puts(strcat(s1,s2));
	//printf("the length of s1 is %d\n", strlen(s1));
	//printf("the length of s2 is %d\n", strlen(s2));
    //printf("the reversed string of s1 is: ");
	//puts(strrev(s1));
	 //printf("the reversed string of s2 is: ");
	//puts(strrev(s2));
	
	printf("the strcmp for s1, s2 returned %d\n", strcmp(s1, s2));
	strcpy(s3 , strcat(s1,s2));
	puts(s3);
	return 0;
}
