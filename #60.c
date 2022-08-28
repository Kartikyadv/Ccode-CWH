#include <stdio.h>
#include <stdlib.h>

int main()
{
	//macros
	printf("the file name is %s\n", __FILE__);
	printf("todays date is %s\n", __DATE__);
	printf("current time is %s\n", __TIME__);
	printf("line no. is %d\n", __LINE__);
	printf("ANSI: %d\n", __STDC__);
	return 0;
}
