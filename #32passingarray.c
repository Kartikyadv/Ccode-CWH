#include <stdio.h>
int func1(int array[])
{
	int i = 0;
	for(; i< 4; i++)
	{
		printf("the value at %d is %d\n", i, array[i]);
	}
	//array[0] = 382; if you change any value here ,it gets reflected in int main()
}


void func2(int* ptr)
{
	int i = 0;
	for(; i< 4; i++)
	{
		printf("the value at %d is %d\n", i, ptr[i]);//*(ptr+i) = ptr[i]
	}ptr[0] = 55;	
}


void func3(int arr[2][2])
{
	int i = 0;
	for(; i < 2; i++)
	{
		int j = 0;
		for(; j < 2; j++)
		{
			printf("the value at %d , %d is %d\n", i, j, arr[i][j]);
		}
	}
}



int main()
{
	int arr[][2] = {{0,1},{2,3}};
	 //printf("the value at index 0 is %d\n", arr[0]);
	//func1(arr);
	//printf("the value at index 0 is %d\n", arr[0]);
	//func2(arr);
	//func2(arr);
	func3(arr);	
	return 0;
} 
