#include <stdio.h>
int main()
{
	//label:
	//	printf("we are inside label\n");
	//	goto end;
	//printf("hello world");
	//goto label;
	//end:
	//	printf("we are end");
     int i,num;
	 for(i =0; i < 8; i++)
	{
	 	printf("%d\n", i);
	 	int j;
	 	for(j=0; j<8;j++)
	 	{printf("enter the number. enter 0 to exit \n");
	 	scanf("%d\n", &num);
		if (num==0)
		{goto end;
		}
		    }
		        }end:
				     return 0;}
