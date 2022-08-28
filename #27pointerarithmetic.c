#include <stdio.h>

int main()
{
    //char a ='3';
    //char* ptra = &a;
    //printf("%d\n", ptra);
    //printf("%d\n", ptra-2);
    //ptra--;
	//printf("%d\n", ptra);
	
	//size pf int = 4bite, size of char = 1bite mostly
	int arr[] = {1,2,3,4,5,6};
	printf(" value at position 3 of the array is %d\n", arr[0]);
	printf("the address of first element of the arrayis %d\n", &arr[0]);
	printf("the address of second element of the arrayis %d\n", arr + 1);
	// arr--; //this will show error
	//*(&arr[0]) = arr[0] 
	printf("the value of first element of the arrayis %d\n", *(&arr[0])); 
	printf("the value of first element of the arrayis %d\n", *(arr));
	printf(" value at position 3 of the array is %d\n", arr[0]);
	
	return 0;
}
