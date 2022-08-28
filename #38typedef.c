/*#include <stdio.h>
typedef struct student //typedef <previous name> <alias name>//
{
	int id;
	int marks;
	char fav_char;
	char name[34];
}xyz;//=new name or alias name 

int main()
{
	xyz s1, s2;
	s1.id = 23;
	s2.id = 43;
	printf("the value of s1 id is %d\n", s1.id);
	printf("the value of s2 id is %d\n", s2.id);
	
	//int*a, b;
	typedef int* intpointer;
	intpointer a, b;
	int c;
	a = &c;
	b= &c;
	
	return 0;
}
/*{	typedef unsigned long u1;
	typedef int integer;
	u1 l1, l2, l3;
	integer a = 4;
	printf("the value of a is %d", a);
	return 0;
}*/#include <stdio.h>

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
	 
	 return 0;	
}

