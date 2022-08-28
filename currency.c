#include <stdio.h>
int main(){
	int amt;
	printf("Enter the amount\n");
	scanf("%d", &amt);
	printf("no. of 2000 notes = %d\n", amt/2000);
	amt = amt%2000;
	printf("no. of 500 notes = %d\n", amt/500);
	amt = amt%500;
	printf("no. of 200 notes = %d\n", amt/200);
	amt = amt%200;
	printf("no. of 100 notes = %d\n", amt/100);
	amt = amt%100;
	printf("no. of 50 notes = %d\n", amt/50);
	amt = amt%50;
	printf("no. of 20 notes = %d\n", amt/20);
	amt = amt%20;
	printf("no. of 10 notes = %d\n", amt/10);
	amt = amt%10;
	printf("no. of 5 notes = %d\n", amt/5);
	amt = amt%5;
	printf("no. of 2 notes = %d\n", amt/2);
	amt = amt%2;
	printf("no. of 1 notes = %d\n", amt/1);
	amt = amt%1;
}  
