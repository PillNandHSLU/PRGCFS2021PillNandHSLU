#include <stdio.h>
#include "bitOps.h"


unsigned char hexZahl = 0xD3;

unsigned char nBit = 0;

int status = 5;

int main()
{
	// Zeige die anzupassende HEX-Zahl
	printf("%x\n", hexZahl);
	
	//setzt das n‐te Bit auf “1”.
	setBitNInByte(&hexZahl, nBit);
	printf("n-te Bit auf 1: %x\n", hexZahl);
	
	
	//falls das n‐te Bit gesetzt ist, gibt die Funktion «1» zurück, sonst «0».
	status = BitNIsSet(hexZahl, nBit);
	printf("bit is: %d\n", status);

	return 0;
}
