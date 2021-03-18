#include <stdio.h>
#include <stdlib.h>

int main()
{

	int start = 1;
	int end = 200;
	int divisor1 = 7;
	int divisor2 = 11;
	int divisor3 = 17;
	
	for( int i = start; i <= end; i++ )
	{
		// Vielfache von divisor1 UND divisor2
		if( i % divisor1 == 0 && i % divisor2 == 0 )
		{
			printf("Divisible by %d & %d: %d\n", divisor1, divisor2, i);
		}
		
		// Vielfache von divisor3
		else if( i % divisor3 == 0 )
		{
			printf("Divisible by %d: %d\n", divisor3, i);
		}
	
	}
	

	return 0;
}



