/* System includes */
#include <stdio.h>

/* Local (or Project) includes */
#include "greetings.h"


struct Prof {
	char name[12];
	int salary;
};


/* Globale Variable (Ist auch ausserhalb dieses Moduls sichtbar, siehe greetings.h)*/
int greetingsCounter = 0;

/* Lokale globale Variable (Ist innerhalb dieses Moduls in jeder Funktion sichtbar) */
int localCounter = 24;

/* private function --> Von aussen nicht sichtbar --> mainGreetings.c sieht das nicht*/
void incrementGreetingsCounter( void) {
	greetingsCounter++;
}



/* Implementations */
void SayHello(void){
	printf("Hello!\n");
	incrementGreetingsCounter();
}

void SayGoodBye(void) {
	printf("Goodbye!\n");
	incrementGreetingsCounter();
}

