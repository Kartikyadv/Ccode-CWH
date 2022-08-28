#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *ptr = NULL;
	char string[34] = "this is a good boy";
	//************reading a file**************
	ptr = fopen("copy.c", "r");
	fscanf(ptr, "%s", string);// function for reading
	printf("the content of this file has %s\n", string);
	/*
	//*********writing  a file*********
	ptr = fopen("copy.c", "w");
	fprintf(ptr, "%s", string);
	*/ 	
	
	
	
	return 0;
}
