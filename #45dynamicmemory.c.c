#include <stdio.h>

typedef struct Drivers
{
	char name[34];
	char dl[34];
	char route[34];
	int kms;
}dr;
int main()
{
     dr d1;
	 printf("enter the details of the driver no. 1 :\n");
	 printf("enter the name of first driver\n");
	 scanf("%s", &d1.name);
	 printf("enter the dl no. of first driver\n");
	 scanf("%s", &d1.dl);
	 printf("enter the route of first driver\n");
	 scanf("%s", &d1.route);
	 printf("enter the no. of kms of first driver\n");
	 scanf("%d", &d1.kms);
    
    dr d2;
    printf("enter the details of the driver no. 2 :\n");
	 printf("enter the name of second driver\n");
	 scanf("%s", &d2.name);
	 printf("enter the dl no. of second driver\n");
	 scanf("%s", &d2.dl);
	 printf("enter the route of second driver\n");
	 scanf("%s", &d2.route);
	 printf("enter the no. of kms of second driver\n");
	 scanf("%d", &d2.kms);
	 return 0;
}
