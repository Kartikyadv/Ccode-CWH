#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum =0;
	int a[2][2], b[2][2], result[2][2];
	printf("enter 1st matrix\n");
	for(int i =0; i<2; i++)	
	{
		for(int j =0; j<2;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter 2nd matrix\n");
	for(int i =0; i<2; i++)	
	{
		for(int j =0; j<2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(int i =0; i<2; i++)	
	{
		for(int j =0; j<2;j++)
		{
			for(int k=0; k<2; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			result[i][j] = sum;
			sum = 0;
	    }
    }
    for(int i =0; i<2; i++)	
	{
		for(int j =0; j<2;j++)
		{
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
}
    
    
    
    
    
