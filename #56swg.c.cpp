#include <stdio.h>
#include <stdlib.h>
#include <time.h>//snake vs water snake  // water vs gun water // snake vs gun gun
int generateRandomNumber(int s)
{
	srand(time(NULL));
	return rand()%s;
}

int greater (char c1, char c2)
{// if c1>c2 return 1 otherwise 0 and c1 = c2 then retrun -1;
	if (c1 == c2)
	{ return -1; }
	if ((c1 == 's') && (c2 == 'w'))
	{ return 1;}
	else 
	{ return 0;}
	if ((c1 == 'w') && (c2 == 'g'))
	{ return 1;}
	else 
	{ return 0;}
	if ((c1 == 'g') && (c2 == 's'))
	{ return 1;}
	else
	{return 0;}
	
}
int main()
{
	int ps = 0, cs = 0, temp, n;
	char pchar, cchar;
	char dict[] = {'s','w','g'};
	printf("do you wanna play SNAKE WATER GUN\n");
	printf("!how many rounds do you wanna play!\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		//player input
		printf("which one will you choose:\n");
		printf("1) SNAKE  2) WATER  3) GUN\n");
		scanf("%d", &temp);
		pchar = dict[temp - 1];
		printf("you have choose %c\n", pchar);
		
		//comp input
		printf("computer turn:\n");
		temp = generateRandomNumber(3) + 1;
		cchar = dict[temp - 1];
		printf("computer have choose %c\n\n", cchar);
		
		if (greater(cchar , pchar)  == 1)   {cs += 1; printf(" COMPUTER WIN THIS ROUND \n\n\n");}
		else if (greater(cchar , pchar)  == -1)  {ps += 1;cs +=1; printf(" DRAWN\n\n\n");}
		else   { ps +=1;  printf(" YOU WON THIS ROUND\n\n");}
		printf("YOU: %d             COMPUTER: %d\n", ps, cs);
	}
	if (ps > cs) { printf("YOU WON THE MATCH");}
	else if (cs > ps) { printf("COMPUTER WON THE MATCH");}
	else { printf("DRAWN");}
	 return 0;
}



