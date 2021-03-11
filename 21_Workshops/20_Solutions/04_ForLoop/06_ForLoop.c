#include <stdio.h>


int main() {

	int start = 1;
	int end = 100;
	int stop = 555;
	int sum = 0;
	int lastAddition = 0;
	
	for(int i = start; i <= end; i++)
	{
		sum = sum + i;
		lastAddition = i;
		if(sum >= stop){
			break;
		}
		
		else{
			continue;
		}
	}

	
	printf("With max. sum %d, the integers from %d to %d sum up to %d\n", stop, start, lastAddition, sum);	


	return 0;
}
