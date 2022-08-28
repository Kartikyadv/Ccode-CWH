#include <stdio.h>
#include <stdlib.h>
int isPalindrome(int num)
{
	int reversed = 0;
	int originalnumber = num;
	while(num !=0)
	{
		reversed = reversed*10 + num%10;
		num = num/10;//num%10 = remainder
	}
	printf("the reversed number is %d\n", reversed);
    
    if(originalnumber == reversed)
    {
    	return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int number;
	printf("Enter a number to check wether it is a palindrome or  not \n");
	scanf("%d", &number);
	if (isPalindrome(number))
	{
		printf("this number is a Palindrome");
	}
	else 
	{
		printf("this number is not a Palindrome");
	}
	return 0;
}
