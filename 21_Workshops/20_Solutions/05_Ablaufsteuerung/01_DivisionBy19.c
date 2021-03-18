#include <stdio.h>
#include <stdlib.h>

int main()
{
	int start = 0;
	int end = 500;
	int divisor = 19;
	
	for( int i = start; i <=end; i++ )
	{
		//Wenn Zahl durch 19 teilbar (Modulo 19 = 0 (Rest ist 0))
		if( i% divisor == 0 )
		{
			printf("%d is divisible by %d\n", i, divisor);
		}
		
	}	
		

	return 0;
}
