#include <stdio.h>

int main()
{
	FILE*ptr = NULL;
	ptr = fopen("copy.c", "r+");
	// r+ will replace starting part of copy.c
	// w+  will erase all file
	// a+ will add char or string at end 
	/*char c = fgetc(ptr);// 1st character
	printf("the character I read was %c\n", c );
	c = fgetc(ptr); // 2nd character
	printf("the character I read was %c\n", c );
	*/
	
	char str[4];
	fgets(str, 5, ptr);
	printf("the string is : %s\n", str);
	
	/*
	fputc('m', ptr);
	fputs("this is kartik", ptr);
	*/	
	fclose(ptr);
	
	return 0;
	
}
