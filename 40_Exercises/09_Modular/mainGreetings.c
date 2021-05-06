#include "greetings.h"

struct Student myStud;

// struct Prof myProf; --> Kennt dieses Modul nicht, da nur in greetings.c file und nicht in greetings.h file enthalten.

int main( void ) {
	
	while( greetingsCounter < 10 ) {
		SayHello();
		SayGoodBye();
	}

	return 0;
}
