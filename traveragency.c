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
     dr d1, d2, d3;
	 printf("enter the details of the driver no. 1 :\n");
	 printf("enter the name of first driver\n");
	 scanf("%s", &d1.name);
	 printf("enter the dl no. of first driver\n");
	 scanf("%s", &d1.dl);
	 printf("enter the route of first driver\n");
	 scanf("%s", &d1.route);
	 printf("enter the no. of kms of first driver\n");
	 scanf("%d", &d1.kms);
    
    printf("enter the details of the driver no. 2 :\n");
	 printf("enter the name of second driver\n");
	 scanf("%s", &d2.name);
	 printf("enter the dl no. of second driver\n");
	 scanf("%s", &d2.dl);
	 printf("enter the route of second driver\n");
	 scanf("%s", &d2.route);
	 printf("enter the no. of kms of second driver\n");
	 scanf("%d", &d2.kms);
	 
	 printf("enter the details of the driver no. 3 :\n");
	 printf("enter the name of third driver\n");
	 scanf("%s", &d3.name);
	 printf("enter the dl no. of third driver\n");
	 scanf("%s", &d3.dl);
	 printf("enter the route of third driver\n");
	 scanf("%s", &d3.route);
	 printf("enter the no. of kms of third driver\n");
	 scanf("%d", &d3.kms);
	
	printf("*******printing information of these drivers:*******");
	printf("for driver no. 1:\nname is %s\n", d1.name); 
	printf("dl no. is %s\n", d1.dl);
	printf("route is %s\n", d1.route);
	printf("kms is %d\n", d1.dl);
	
	printf("for driver no. 2:\nname is %s\n", d2.name); 
	printf("dl no. is %s\n", d2.dl);
	printf("route is %s\n", d2.route);
	printf("kms is %d\n", d2.dl);
	
	printf("for driver no. 3:\nname is %s\n", d3.name); 
	printf("dl no. is %s\n", d3.dl);
	printf("route is %s\n", d3.route);
	printf("kms is %d\n", d3.dl);
	 return 0;	
}

