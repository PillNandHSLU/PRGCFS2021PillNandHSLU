#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{
	// Falls NICHT 4 Argumente erhalten, dann --> hier hinein ("if" mit Block 7 bis 10)
	if(argc != 4 ){
		// input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2 Input3\n");
	
	}
	else
	{ // input is valid --> genau 1+3 Argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0))
		{
			//Fehlerfall
			printf("All inputs must be strictly greater than zero.\n");
		}
		else
		{
			//Inputs are valid
			printf("inputs valid\n");
		
			//find the greatest
			if( val1 >= val2 && val1 >= val3 )
			{
				printf("%d is the greatest\n", val1);
			}
			else if( val2 >= val1 && val2 >= val3 )
			{
				printf("%d is the greatest\n", val2);
			}
			else
			{
				printf("%d is the greatest\n", val3);
			}
			
			//find the smallest
			if( val1 <= val2 && val1 <= val3 )
			{
				printf("%d is the smallest\n", val1);
			}
			else if( val2 <= val1 && val2 <= val3 )
			{
				printf("%d is the smallest\n", val2);
			}
			else
			{
				printf("%d is the smallest\n", val3);
			}
			
			//compute the sum
			sum = val1 + val2 + val3;
			printf("The sum is: %d\n", sum);
			
			//compute the average
			average = sum/3.0;
			printf("The average is: %f\n", average);
			
			
		}		
		
		
		printf("The inputs were: %d, %d, %d\n", val1, val2, val3);
		
	}
	
	return 0;
}
	
	
	
	
	
#if 0	//Auskommentieren mit Präprozessor (#)

	else
	{ // input is valid --> genau 1+3 Argumente erhalten
		printf("Number of input arguments: %d\n", argc ); // Anzahl Argumente "printen"
	
		// Die drei Elemente in der For-Loop Deklaration
		// ----------------------------------------------
		// Nimm eine Int-Variable "i" und starte mit 0.
		// führe folgenden Code solange aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (++)
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv[i] );
			
			// argv: - ./logicOperators ist z.B. ein Argument
		}
	}
	return 0;

}


	double e = 2.718281828
	
	printf("%0.15f", e);
#endif


