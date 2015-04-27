/*Trabajo Practico No. 3 - Función GetCelsius(Fahr)
*Cordoba, Maria Noelia - K2051
* 20150426 */

#include "stdafx.h"
#include <stdio.h>	


float GetCelsius(int fahr){
	return ((fahr - 32) * 5) / 9;
}

int main(void)
{
	const int LOWER = 0;
	const int UPPER = 300;
	const int STEP = 20;

	printf("Tabla de conversion de grados Fahreneit a Celsius :\n\nFahrenheit:\tCelsius:\n");
	printf("--------------------------\n");

	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3d\t %12.1f\n", fahr, GetCelsius(fahr));

	}

}
