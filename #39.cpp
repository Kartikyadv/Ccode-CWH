#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	int marks;
	char fav_char;
	char name[34];
};
// if union then only 1 will be right in id,marks,fav_char, name
int main()
{
    struct student s1;
	s1.id = 1;
	s1.marks = 45;
	s1.fav_char = 'x';
	strcpy(s1.name, "harry");
	
	printf("the id is %d\n", s1.id);
	printf("the marks is %d\n", s1.marks);
	printf("the fav_char is %c\n", s1.fav_char);
	printf("the name is %s\n", s1.name);
	return 0;
}
