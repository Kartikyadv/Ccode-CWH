#include <stdio.h>
#include <string.h>
void parser(char * string)
{
	int in = 0;
	int index = 0;
	int i;
    for(i = 0; i < strlen(string) ; i++) 
    {
    	if(string[i] == '<')
    	{
    		in = 1;// stop = 1
    		continue;
		}
		else if(string[i] == '>')
		{
			in = 0;// continue = 0
			continue;
		}
		if(in == 0)
		{
		string[index] = string[i];
		index++;
		}
	}
string[index] = '\0';

while(string[0] == ' ')
  {
	int i;
    for(i = 0; i <strlen(string) ; i++)
    {
	string[i] = string[i+1];
    }
  }
while(string[strlen(string) - 1] == ' ')
  {
	string[strlen(string) - 1] = '\0';
  }
 
}
int main()
{
	char string[] = "<xyz> my name is kartik  0l.21            <xyz>";
	parser(string);
	printf("the parsed string is ~~%s~~", string);
	return 0;
}
