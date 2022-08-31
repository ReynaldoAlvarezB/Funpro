#include<stdio.h>

/*

Transformaci´on de temperaturas
Dado una temperatura en grados Celsius, calcule e imprima la temperatura equivalente en Fahrenheit.
Recuerde que F = C 9/5 + 32.

*/

int main() {

	//Declarar variables

	double  celsius, fahrenheit;

	printf("Ingrese la temperatura en grados celsius:  ");

    scanf("%lf", &celsius);
    //Aplicar la formula de conversión de celsius a fahrenheit 
    fahrenheit = celsius * 1.8 + 32;

    
    printf("La temperatura es %lf grados fahrenheit \n", fahrenheit);

		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}