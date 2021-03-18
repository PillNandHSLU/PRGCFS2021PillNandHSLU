#include <stdio.h>
#include <stdlib.h>

int main()
{

	int start = 1;
	int end = 200;
	int divisor1 = 11;
	int divisor2 = 7;
	
	for( int i = start; i <= end; i++ )
	{
		// Vielfache von divisor1
		if( i % divisor1 == 0 )
		{
			if( i % divisor2 == 0 )
			{
				//Durch 11 und 7 teilbar
				printf("%d & %d: %d\n", divisor1, divisor2, i);
			}
			else
			{
				//Durch 11 teilbar, aber nicht durch 7
				printf("%d but not %d: %d\n", divisor1, divisor2, i);
			}
		}
	
	
	}
	

	return 0;
}




