#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int nrInput = 0;
	int direction = 0;
	int position = 0;
	int resultat = 0;
	
	printf("Ei Brudi gibmer ganzeszahligs Nummer: ");
	scanf("%d", &nrInput);
	
//	if( isdigit(nrInput) )
//	{
		printf("Ims was Richtig muessi gah? 1 Links, 2 Rächts: ");
		scanf("%d", &direction);
		
		printf("Ums wie mängi Steu muess gschobä wärdä? Gibmer ganzes Zahl: ");
		scanf("%d", &position);
		
		if(direction == 1)
		{
			resultat = (nrInput << position);
			printf("Ims Resultat für %d um %d Steuä nach links isch: %d\n", nrInput, position, resultat);
		}
		
		else
		{
			resultat = (nrInput << position);
			printf("Ims Resultat für %d um %d Steuä nach rächts isch: %d\n", nrInput, position, resultat);
		}
	
//	}
	
/*	else
	{
	printf("Ei bisch uf Hirni gheit? Muess Ganzzau si! Hiä mach nomau: ");
		
	
	}
*/
	
	return 0;
}
	


