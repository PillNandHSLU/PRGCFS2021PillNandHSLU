#include <stdio.h>


int main() {

	int outerStart = 1;
	int outerEnd = 10;
	int innerStart = 1;
	int innerEnd = 10;
	int sum = 0;
	
	for(int i = outerStart; i <= outerEnd; i++)
	{
		
		for(int j = innerStart; j <= innerEnd; j++)
		{
			sum = sum + 1;
			printf("%d\t", sum);	
		}
		
		printf("\n");
	}	

	
	

	return 0;
}
