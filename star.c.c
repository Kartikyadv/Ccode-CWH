#include <stdio.h>

void starpattern(rows)
{
	int i = 0;
	for(; i < rows ; i++)
	{
		int j = 0;
		for(; j<=i ;j++)
		{
			printf("*");
		}
    printf("\n");
    }
}
void reversestarpattern(rows)
{
	int i = 0;
	for(; i < rows ; i++)
	{
		int j = 0;
		for(; j<=rows - i - 1 ;j++)
		{
			printf("*");
		}
    printf("\n");
    }
}
int main()
{
	int type,rows;
	printf("enter what type of triangular star pattern you want:\n1) simple triangular starpattern\n2) reverse triangular starpattern\n");
	scanf("%d", &type);
	printf("how many rows you want\n");
	scanf("%d", &rows);
	switch (type)
	{
		case 1:
			starpattern(rows);
			break;
			
		case 2:
			reversestarpattern(rows);
			break;
	}
	return 0;
}
