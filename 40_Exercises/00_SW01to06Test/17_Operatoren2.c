#include <stdio.h>

int main()
{
	int a = 6, b = 6, c = 7;
	
	int result = (!( (b+c) > (a + 10) ));
	
	printf("%d\n",result);
	
	return 0;
}
