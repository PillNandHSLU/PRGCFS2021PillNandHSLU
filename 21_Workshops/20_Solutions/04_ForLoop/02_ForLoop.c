#include <stdio.h>

int main() {

	int sum = 0;
	int start = 0;
	int end = 10;
	
	for(int i = start; i <= end; i = i+2 )
	{
		sum = sum + i;
	}
	
	printf("Übung 2: The sum of all even numbers from %d to %d is equal to %d\n", start, end, sum);

	return 0;
}


