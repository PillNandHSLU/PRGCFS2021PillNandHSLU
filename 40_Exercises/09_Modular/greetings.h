#ifndef _GREETINGS_H_
#define _GREETINGS_H_


struct Student {
	char name [24];
	int studentId;
};

/* global Variable */
extern int greetingsCounter;


/* declarations */
void SayHello(void);
void SayGoodBye(void);


#endif
