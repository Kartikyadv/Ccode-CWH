#include <stdio.h>
#include <stdlib.h>// includes srand
#include <time.h>

int generateRandomNumber(int n)
{   
    srand(time(NULL));// time null is called seed
	return rand()%n;
}

int greater(char c1, char c2)
{// if c1>c2 return 1 otherwise 0 and c1 = c2 then retrun -1;
	if (c1 == c2)  
	{  return -1;  }
	if((c1 == 'r') && (c2 == 's'))  
	{  return 1;  }
	else   
	{  return 0;  }
	if((c1 == 'p') && (c2 == 'r'))  
	{  return 1;  }
	else   
	{  return 0;  }
	if((c1 == 's') && (c2 == 'p'))  
	{  return 1;  }
	else   
	{  return 0;  }
}

int main()
{
	int playerScore = 0, compScore = 0, temp;
	char playerChar, compChar;
	char dict[] = {'r', 'p', 's'};
	printf("Welcome to the Rock, Paper, Scissor\n");
	for (int i = 0; i < 3; i++)
	{
		// player's 1 input
       printf("player 1's turn:\n");
	   printf("choose 1) Rock 2) Paper 3) Scissor\n");
	   scanf("%d", &temp);
	   getchar();// input buffer consume
	   playerChar = dict[temp - 1];
	   printf("you choose %c\n", playerChar);
	   
	   // generate computer's input
	   printf("computer turn:\n");
	   temp = generateRandomNumber(3) + 1;
	   compChar = dict[temp - 1];
	    printf("comp choose %c\n", compChar);
	   
	   if(greater(compChar, playerChar) == 1)   {  compScore += 1; printf("comp.won this round\n\n\n"); }
	   else if(greater(compChar, playerChar) == -1)  {  compScore += 1;  playerScore += 1;	printf("drawn\n\n\n");} 
	   else   {  playerScore += 1;  printf("jeet gya londe\n\n\n");}
	   printf(" YOU : %d\nCPU : %d\n\n\n",playerScore, compScore);
	}
	if (playerScore > compScore)
	{  printf("you win the game\n");  }
	else if (playerScore == compScore)
	{  printf("match has been drawn\n");  }
	if (playerScore < compScore)
	{  printf("better luck next time");	}
	return 0;
}
