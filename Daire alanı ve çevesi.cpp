// DA�REN�N �EVRES�N� VE ALANINI BULAN PROGRAM
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float r,circumference,area;
	const float pi=3.14;
	printf("Dairenin yar��ap�n� girin: ");
	scanf("%f",&r);
	circumference=2*3.14*r;
	area=r*r*pi;
	printf("Cevre: %f\n",circumference);
	printf("Alan: %f",area);
	return 0;

}
