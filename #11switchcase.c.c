#include <stdio.h>

int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d", &age);
	
	switch (age)
	{
		case 3:
			printf("the age is 3");
		break;
			
	    case 1:
			printf("the age is 1");
			break;
			
		default:
			printf("nikal bhai");
			break;
	}
	return 0;
}
