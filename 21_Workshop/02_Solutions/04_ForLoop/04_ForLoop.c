#include <stdio.h>

int main() {

	int start = 3;
	int end = 729;
	
	for(int i = start; i <= end; i = i*3 )
	{
		printf("%d\n", i);
	}
	

	return 0;
}


