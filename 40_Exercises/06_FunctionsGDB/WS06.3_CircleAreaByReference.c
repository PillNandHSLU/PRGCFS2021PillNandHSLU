#include <stdio.h>


/* Beispiel mit STRUCT */

// void UpdateStudent( struct Student *pStud );
/* Anstatt dass eine Kopie des struct pStud angelegt wird, wird direkt an der korrekten Speicheradresse
die Anpassung vorgenommen. --> Rechenaufwand für Kopie anlegen und Änderung von aussen nicht sichtbar */


float ComputeCircleAreaByValue(float radius);

float ComputeCircleAreaByReference(float radius, float *area);


int main()
{
	float myRadius = 4.545;
	float area = 0.0f;
/*	pass by reference --> Funktion erhält die genauen Variablen aus dem main
	(gleiche Speicheradressen) */
	ComputeCircleAreaByReference(myRadius, &area);
	printf("Given radius %.3f, the area equals %.3f\n", myRadius, area);
	
/*	pass by value --> Funktion arbeitet mit "Kopie" des Wertes
	(nicht dieselbe Speicheradresse) Gilt für radius - myRadius und area - area*/
	area = ComputeCircleAreaByValue(myRadius);
	printf("Given radius %.3f, the area equals %.3f\n", myRadius, area);
	return 0;
}


float ComputeCircleAreaByValue(float radius){
	float pi = 3.1415927;
	float area = radius*radius*pi;
	return area;
}

float ComputeCircleAreaByReference(float radius, float *area){
	float pi = 3.1415927;
	*area = radius*radius*pi;
	return *area;
}



