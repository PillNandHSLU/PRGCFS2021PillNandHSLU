#include <stdio.h>
#include <unistd.h>

// State Machine --> Ab 1 werden die Variablen READY, MILLING, ... ERROR immer durchnummeriert
typedef enum {
	HEATING = 1,
	SHOWMENU,	// = 2
	MILLING,	// = 3
	COFFEEMAKING,	// = 4
	CLEANING,
	SHUTDOWN,
	ERROR
} CoffeeMakerStatus;


CoffeeMakerStatus status = HEATING;

// function prototype	
int HeatingDone(void);

void ShowMenu(void);


int main(void) {

	// endless loop
	int run = 1;
	while(run == 1) 
	{	
		switch(status)
		{
			case HEATING:
				if( HeatingDone() )
				{
					status = SHOWMENU;
				}
				break;
		
		
			// add all cases
			
			case SHOWMENU:
				ShowMenu();
				break;
				
			case MILLING:
				printf("milling ... done.\n");
				status = COFFEEMAKING;
				break;
				
			case COFFEEMAKING:
				printf("mhmmmm... smells good! Done!\n");
				status = CLEANING;
				break;
				
			case CLEANING:
				printf("Machine is cleaning... done!\n");
				status = SHOWMENU;
				break;
		
			case SHUTDOWN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Coffee Maker in Error State.\n");
				status = SHUTDOWN;
				break;
		}
	}

	return 0;
}

typedef enum {
	MENU_UNDEFINED = 0,
	MENU_REHEAT = 1,
	MENU_MAKECOFFEE,
	MENU_SHUTDOWN
} MenuItem;


void ShowMenu(void) {

	MenuItem menuSelected = MENU_UNDEFINED;
	
	int menuInput = 0;
	
	printf("Select from the following options:\n");
	printf("1: Re-heat\n");
	printf("2: Make Coffee\n");
	printf("9: Shutdown\n");
	
	scanf("%d", &menuInput);
	menuSelected = (MenuItem)menuInput;
	
	switch(menuSelected)
	{
		case 1:
			status = HEATING;
			break;
		
		case 2:
			status = MILLING;
			break;
			
		case 9:
			status = SHUTDOWN;
			break;
		
		default:
			printf("Invalid selection\n");
			status = SHOWMENU;
			break;
	}
	
	/*
	if( menuSelected == 1 )
	{
		status = HEATING;
	}
	else if( menuSelected == 2 )
	{
		status = COFFEEMAKING;
	}
	else if( menuSelected == 9 )
	{
		status = SHUTDOWN;
	}
	else
	{
		printf("Invalid selection\n");
		status = SHOWMENU;
	}
	*/
}

static int heatingCounter = 0;
int heatingLimit = 8;

int HeatingDone(void){
	int done = 0;
//	sleep(1); sleep in seconds
	usleep(500000); // sleep in microsecond
	printf("#");
	fflush(stdout);
	heatingCounter++;
	if(heatingCounter >= heatingLimit)
	{
		// reset the counter
		heatingCounter = 0;
		done = 1;
		printf(" Heating Completed.\n");
	}
	return done;
}
	




