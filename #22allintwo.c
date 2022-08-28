#include <stdio.h>
int main()
{   
    int i,j;
    float k;
    printf("enter which type of conversion you want\n");
    printf("1) km to miles/miles to km\n2) inches to foot/foot to inches\n3) cm to inches/inches to cm\n4) pounds to kgs/kgs to pounds\n5) inches to meters/meters to inches\n");
        scanf("%d", &i);
	switch (i)
	{
		case 1:
	printf("1) km to miles\n2) miles to km\n");
	    scanf("%d", &j);
	if (j==1)
	{
	printf("enter unit in km\n");
	    scanf("%f", &k);
	printf("unit in miles is %.2f\n", k*0.621);
	}
	else if (j==2)
	{
	printf("enter unit in miles\n");
	    scanf("%f", &k);
	printf("unit in km is %.2f\n", k/0.621);
	}break;
	case 2:
	printf("1) inches to foot\n2) foot to inches\n");
	    scanf("%d", &j);
	if (j==1)
	{
	printf("enter lenght in inches\n");
	    scanf("%f", &k);
	printf("length in foot =%.2f", k*0.0833);
	}
	else if (j==2)
	{
	printf("enter length in foot\n");
	    scanf("%f", &k);
	printf("length in inches =%.2f", k/0.0833);
	}break;
	case 3:
	printf("1) cm to inches\n2) inches to cm\n");
	    scanf("%d", &j);
	if (j==1)
	{
	printf("enter length in cm\n");
	    scanf("%f", &k);
	printf("length in inches =%.2f\n", k*0.394);
	}
	else if (j==2)
	{
	printf("enter length  in inches\n");
	    scanf("%f", &k);
	printf("length in cm =%.2f\n", k/0.394);
	}break;
	case 4:
	printf("1) pounds to kgs\n2) kgs to pounds\n");
	    scanf("%d", &j);
	if (j==1)
	{
	printf("enter weight in pounds\n");
	    scanf("%f", &k);
	printf("weight in kgs=%.2f", k*0.454);
    }
    else if (j==2)
    {
    printf("enter weight in kg\n");
        scanf("%f", &k);
    printf("weight in pounds=%.2f", k/0.454);
	}break;
	case 5:
    printf("1) inches to meter\n2) meter to inches\n");
    scanf("%d", &j);
    if (j==1)
    {
    printf("enter length in inches\n");
        scanf("%f", &k);
    printf("length in meter =%.2f", k*0.0254);
	}
	else if(j==2)
	{
	printf("enter length in meter\n");
	    scanf("%f", &k);
	printf("length in inches =%.23f", k/0.0254);
	}break;
	default:
	printf("please enter valid no.");
	break;
	}
	return 0;}
