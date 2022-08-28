#include <stdio.h>
int main()
{int num;
printf("enter the no.\n");
scanf("%d", &num);
int i;
for(i= 1; i < 11; i++)
{printf("%d X %d = %d\n",num,i,num*i);
}
return 0;
}
