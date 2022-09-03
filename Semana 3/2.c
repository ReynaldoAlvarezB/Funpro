#include<stdio.h>

/*
2. Area de un cuadrado ´
Dado el lado de un cuadrado, se pide calcular el ´area del mismo si es que el lado es mayor que cero.
Recordar que el ´area del cuadrado es igual al lado2
*/


/*
Utilizaré los mismos procedimientos del ejercicio 1 de la semana 2,
con la diferencia de que para este ejercicio añadiré la estructura selecitva
compruebe que el número es mayor a 0
*/

int main() {

    //Declaro las variables 
    double lado, area;

    //Solicito los datos de entrada
    printf("Ingrese el lado del cuadrado: ");
    scanf("%lf", &lado);

    //Compruebo la condición del lado, que debe ser mayor que 0
    if (lado > 0) {
        
        //En caso se cumpla, se realiza el siguiente procedimiento.
        area = pow(lado,2);
    
        printf("El area es %lf \n", area);

    }

    //Declaro el procedimiento en caso que no se cumpla la condición
    else {
        printf("No se puede calcular el area porque el lado no es mayor que cero \n");
    }


	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;


}
