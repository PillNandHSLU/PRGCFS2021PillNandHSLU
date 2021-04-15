#include <stdio.h>

#define NRSTUDENTS 2
#define NRGRADES 3

typedef struct Student {
	char firstname[20];
	char lastname[30];
	double grades[NRGRADES];
} Student z

void printEntries( Student myArray[] )
{
	for(int i = 0; i < NRSTUDENTS; i++ ) {
		printf("%s\t%s\t", myArray[i].firstname,  myArray[i].lastname);
		
		for(int j = 0; j < NRGRADES; j++) {
			printf("%.1f, %.1f, %.1f\n", (myArray[i].grades[j]) );
		}
	}

}

int main()
{
	struct Student students[NRSTUDENTS];
	
	for(int i = 0; i < NRSTUDENTS; i++ ) {
		printf("Vorname:\n");
		scanf("%s", &students[i].firstname[20]);
		
		printf("Nachname:\n");
		scanf("%s", &students[i].lastname[30]);
		
		for(int j = 0; j < NRGRADES; j++) {
			printf("Grades:\n");
			scanf("%lf", &(students[i].grades[j]) );
		}

	}
	
	// print array
	printEntries(students);


	return 0;
}


