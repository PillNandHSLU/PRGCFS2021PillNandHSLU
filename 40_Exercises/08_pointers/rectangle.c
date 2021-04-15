/* Im stdio.h mit include werden nur "prototypes / forward declarations" mitgegeben,
die Funktion wird später im Programm "implementiert"

<stdio.h> vs. "myOwnHeader.h" --> <> suche auf dem Systempfad / "" suche lokal
*/

#include <stdio.h>

struct Point2d {
	double x;
	double y;
};


struct Rectangle {
	struct Point2d bottomLeftCorner;
	struct Point2d topRightCorner;
	double area;
	double perimeter;
};


// prototype --> "forward declaration"
double ComputeRectangleArea(struct Rectangle *pRect);

struct Rectangle myRectangle;


struct Rectangle *pRectangle = &myRectangle;  // pointer to struct Rectangle!

int main(){
	myRectangle.bottomLeftCorner.x = 5.0;
	myRectangle.bottomLeftCorner.y = 5.0;
	myRectangle.topRightCorner.x = 35.0;
	myRectangle.topRightCorner.y = 35.0;

	pRectangle->area = ComputeRectangleArea(&myRectangle);
	//pRectangle->area = ComputeRectangleArea(pRectangle); --> Ist dasselbe
	
	printf("Area (arrow): %.2f\n", pRectangle->area);
	printf("Area (indirection): %.2f\n", (*pRectangle).area); --> beides dasselbe
	return 0;
}

// implementation
double ComputeRectangleArea(struct Rectangle *pRect){
	double deltaX = (pRect->topRightCorner.x - pRect->bottomLeftCorner.x);
	double deltaY = (pRect->topRightCorner.y - pRect->bottomLeftCorner.y);
	return deltaX*deltaY;
}


	
