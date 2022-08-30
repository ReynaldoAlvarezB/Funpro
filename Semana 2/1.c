#include<stdio.h>
#include<math.h>

/*
1. ´Area del cuadrado
Dado el lado de un cuadrado, se pide calcular el ´area del mismo. Recordar que el ´area del cuadrado
es igual al lado2.



*/

int main() {

    int lado, area;

    printf("Ingrese el lado del cuadrado: ");

    scanf("%i", &lado);

    area = pow(lado,2);
    
    printf("El area es %i\n", area);


		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}
