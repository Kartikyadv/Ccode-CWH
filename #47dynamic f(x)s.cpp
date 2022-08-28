/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// use of malloc
	int * ptr;
	int n;
	printf("enter the size of array you want to create\n");
	scanf("%d", &n);
	
	ptr = (int*) malloc(10*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("enter the value no. %d of this array \n",i);
		scanf("%d", &ptr[i]);
	}
	
		for (int i = 0; i < n; i++)
	{
		printf("The value no. of %d array is %d\n",i, ptr[i]);
	}
	return 0;
}*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// use of calloc
	int * ptr;
	int n;
	printf("enter the size of array you want to create\n");
	scanf("%d", &n);
	
	ptr = (int*) calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("enter the value no. %d of this array \n",i);
		scanf("%d", &ptr[i]);
	}
	
		for (int i = 0; i < n; i++)
	{
		printf("The value no. of %d array is %d\n",i, ptr[i]);
	}
	
	// use of realloc
	printf("enter the size of new array you want to create\n");
	scanf("%d", &n);

	ptr = (int*) realloc(ptr, n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("enter the new value no.  %d of this array \n",i);
		scanf("%d", &ptr[i]);
	}
	free(ptr);// ptr will be free and no more use can be done using ptr
		for (int i = 0; i < n; i++)
	{
		printf("The new value no. of %d array is %d\n",i, ptr[i]);
	}
	
	return 0;
}





