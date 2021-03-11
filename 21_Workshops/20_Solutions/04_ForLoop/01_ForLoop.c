#include <stdio.h>

int main() {

	int sum = 0;
	int start = 0;
	int end = 10;
	
	for(int i = start; i <= end; i++ )
	{
		sum = sum + i;
	}
	
	printf("Übung 1: The sum from %d to %d is equal to %d\n", start, end, sum);

	return 0;
}


