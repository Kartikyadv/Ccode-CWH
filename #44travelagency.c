/*
	Name: kartik yadav
	Copyright: no
	Author: no
	Date: 15/12/21 06:18
	Description: travel agency manager
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct 	drivers
{
	char name[34];
	char driving_license[13];
	char route[34];
	float kms;
};
int main()
{
	int i = 0;
	struct drivers s[3];
	for(;i< 3 ;i++)
	{
	printf("enter your name :\n");
	scanf("%s", s[i].name);
	printf("enter driving license :\n");
	scanf("%s", s[i].driving_license);
	printf("enter your route :\n");
	scanf("%s", s[i].route);
	printf("enter your todays km :\n");
	scanf("%f", s[i].kms);
    }
    
    
	for(i = 0; i < 3 ; i++)
	{
	printf("enter your name :\n");
	puts(s[i].name);
	printf("enter driving license :\n");
	puts(s[i].driving_license);
	printf("enter your route :\n");
	puts(s[i].route);
	printf("enter your todays km :\n");
	printf("%f", s[i].kms);
    }	
	getch();
	return 0;
	
}
