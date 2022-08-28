#include <stdio.h>
int main()
{int a;
printf("exam you have passed\n1) both maths and science\n2) only maths\n3) only science\n", a);
scanf("%d", &a);
printf("you have entered %d as your result\n", a);
if (a==1)
{printf("you won  45 ruppes cash prize");}
else if (a==2)
{printf("you have won 15 ruppes cash prize");}
else if (a==3)
{printf("you have won 15 ruppes cash prize");}
else if (a>3)
{printf("go study hard bro");}
return 0;
}
