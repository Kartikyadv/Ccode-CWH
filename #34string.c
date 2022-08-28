#include <stdio.h>

void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c", str[i]);
		i++;
	}
}
int main()
{
	//char str[4] = {'h','e','y'};
	//char str[] = "hey";
	char str[34];
	gets(str);
	printf("%s\n", str);     //way 2 to print === using printf back
	printstr(str); //way 1 to print ==using custom f(X)
	printf(" \n");   //  way 3 to print   ===using puts:
	puts(str);
	return 0;
}
