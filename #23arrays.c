#include <stdio.h>

int main()
{
    int marks[2][4] = {{1,2,3,40},
                       {3,2,3,4}};
					   
    
    int i = 0;
    for(; i < 2; i++)
    {int j = 0;
	    for (; j < 4; j++)
	   {
	printf("the value of %d, %d element of the array is %d\n", i, j, marks[i][j]);}}
/*{
int marks[4];
int i;
for(; i < 4; i++)
{
	printf("enter the value of %d element of the array\n", i);
	scanf("%d", &marks[i]);
}
int j=0;
for(; j < 4; j++)
{
	printf("the value of %d element of the array is %d\n", j, marks[j]);
}*/

return 0;}
