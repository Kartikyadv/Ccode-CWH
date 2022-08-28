#include <stdio.h>
#include <string.h>
void parser(char * string)
{
	int in = 0;
	int index  = 0;
	int i;
    for(i = 0; i < strlen(string) ; i++) 
	{
		if(string[i] == '<')
		{
			in = 1;
			continue;
		}
		else if(string[i] == '>')
		{
			in = 0;
			continue;
		}
		if(in==0)
	    {
		string[index] = string[i];
		index++;
	    }
	}
string[index] = '\0';	
//removing spaces from begining
while(string[0] == ' ')
  {
	int i;
    for(i = 0; i <strlen(string) ; i++)
    {
    	string[i] = string[i+1];
	}
  }
    //removing spaces from ending
    while(string[strlen(string) - 1] == ' ')
    {
	string[strlen(string) - 1] = '\0';
    }
}

int main()
{
	char string[] = "<chvzjb>           yo yo honey singh    <dsh>     ";
	parser(string);
	printf("parsed string is ~~%s~~", string);
	return 0;
}
