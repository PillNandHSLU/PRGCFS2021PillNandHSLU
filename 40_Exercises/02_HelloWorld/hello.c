// = Kommentar

// #include:	Etwas einfügen in den Header des Programms --> Der Inhalt sind die sog. Header Dateien xxx.h
//		Python --> Import fügt bereits kompilierten Code in Datei, Include nicht
// <stdio.h>:	Spezifisches Headerfile "Standard In-/Out
//		Enthält Deklarationen für:
//		Anlegen, Öffnen, Schreiben, Lesen, Überschreiben, Anfügen und Löschen von Files
//		Standard Eingabe über Tastatur		"In"
//		Standard Ausgabe von Text auf Bildschirm	"Out"
#include <stdio.h>

// int:	Datentyp Integer --> OS erwartet immer eine Zahl zurück nach beendigung des Programms (Für Vergleich mit Fehlermeldungskatalog --> return 0 = "Alles OK"
// main:	Anfangspunkt des Programms --> Pflicht für jedes ausführbare C-Programm
int main()
{	// {} --> Funktionsrumpf

	// printf: Aufruf der "printf"-Funktion (C-Standardfunktion zur formatierten Ausgabe
	// \n:     fügt neue Zeile am Ende ein
	
	printf("Hello World\n"); 



	// Dem Betriebssystem mitteilen "alles OK" --> Gibt Wert 0 (Alles OK) an das OS zurück

	return 0;
}
