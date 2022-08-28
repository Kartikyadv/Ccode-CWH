#include <stdio.h>
#include <stdlib.h>// includes srand
#include <time.h>

int generateRandomNumber(int n)
{
		srand(time(NULL));// time null is called seed
		return rand()%n;
}
int main()
{

	printf("%d\n", generateRandomNumber(5));// %10 shows the upper limit
	return 0;
}
