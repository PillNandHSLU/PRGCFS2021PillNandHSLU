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

void printStudents( Student myStudents[] );

double computeStudGradeAverage( Student *gradeArray );

double computeClassGradeAverage( Student *gradeArray );

int main()
{
	Student students[NUM_STUDENTS] = {
	[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
	[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
	[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
	[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
	[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}
	};
	
	Student *pStudent = &students[0];
	
	for( int i = 0; i < NUM_STUDENTS; i++)
	{
		//(*pStudent).average = computeStudGradeAverage(*students[i]);
		(*pStudent).average = computeStudGradeAverage(pStudent);
		pStudent++;
	}
	
	printStudents(students);
	
	float classAvg = computeClassGradeAverage(&students[0]);
	
	printf("\nClass Avg: %.2f\n", classAvg);
	
	printf("\nfinished\n");
		
	return 0;

}


void printStudents( Student myStudents[] ) {
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		printf("%s\t%s\t\t", myStudents[i].firstname, myStudents[i].lastname);
		for(int j = 0; j < NUM_GRADES; j++)
		{
			printf("%.1f ", myStudents[i].grades[j]);
		}
		printf("\tAvg: %.1f ", myStudents[i].average);
		printf("\n");
		
	}
}

double computeStudGradeAverage( Student *gradeArray ) {
	
	double sumGrades = 0.0;
	float averageGrades = 0.0;
	
	for( int j = 0; j < NUM_GRADES; j++)
	{
		sumGrades += gradeArray->grades[j];	
	}
	
	averageGrades = sumGrades / NUM_GRADES;
	
	return averageGrades;
	
}



double computeClassGradeAverage( Student *gradeArray ) {
	
	double sumGrades = 0.0;
	float averageGrade = 0.0;
	
	for( int n = 0; n < NUM_STUDENTS; n++)
	{
		sumGrades += gradeArray->average;
		gradeArray++;
	}
	
	averageGrade = sumGrades / NUM_STUDENTS;
	
	return averageGrade;
	
}






