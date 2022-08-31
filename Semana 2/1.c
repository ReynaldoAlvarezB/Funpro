#include<stdio.h>
#include<math.h>


// Iniciar el archivo de C
// Declarar dos variables:
    //El lado ( lo que vamos a recibir)
    //El cuadrado, lo que vamos a calcular

//Pedir el dato del lado
//Calcular el área multiplicando lado x lado
//Mostrar el área

/*
1. ´Area del cuadrado
Dado el lado de un cuadrado, se pide calcular el ´area del mismo. Recordar que el ´area del cuadrado
es igual al lado2.
*/


int main() {

    double lado, area;

    printf("Ingrese el lado del cuadrado: ");

    scanf("%lf", &lado);
    //Importar math.h
    area = pow(lado,2);

    
    printf("El area es %lf \n", area);


		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar y probar más fácilmente todos los casos de la guía, tú no lo hagas.
	return 0;
}
