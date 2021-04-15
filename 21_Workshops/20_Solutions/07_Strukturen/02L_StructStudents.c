#include <stdio.h>

#define MAX_NAME_LENGTH 30
#define NUM_GRADES 6
#define NUM_STUDENTS 5

typedef struct {
	char firstname[MAX_NAME_LENGTH];
	char lastname[MAX_NAME_LENGTH];
	float grades[NUM_GRADES];
	float average;
} Student;

Student students[NUM_STUDENTS] = {
[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}
};

void printStudents( Student myStudents[] )
{
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		printf("%s\t%s\t\t", myStudents[i].firstname, myStudents[i].lastname);
		for(int j = 0; j < NUM_GRADES; j++)
		{
			printf("%.1f ", myStudents[i].grades[j]);
		}
		printf("\n");
		
	}
	printf("finished\n");
}

int main()
{

	printStudents(students);
	
	return 0;

}

