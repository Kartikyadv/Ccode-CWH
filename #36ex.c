#include <stdio.h>

void array(int arr[])
{
	int temp;
	int i = 0;
	for(; i<7/2; i++)
	{
	temp = arr[i];
	arr[i] = arr[6-i];
	arr[6-i] = temp;}	
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int j = 0;
	for (; j<7; j++)
	{
	    printf("the value of %d is %d\n", j, arr[j]);
	}
	array(arr);
	int i = 0;
	for (; i<7; i++)
	{
	    printf("the value of %d is %d\n", i, arr[i]);
	}
	return 0;
 }
