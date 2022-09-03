#include<stdio.h>
#include<math.h>

/*
	4. Funci´on por tramos
Dado un n´umero real x cualquiera, se define la funci´on f(x) por tramos de la siguiente manera:
f(x) =



x
2 x < 5
x
3 − 1 5 ≤ x < 10
x
2
x ≥ 10
Se solicita que desarrolle un algoritmo expresado en pseudoc´odigo y un programa en lenguaje C que
dado x calcule el valor de f(x).

	
*/




int main() {

    //Declaro la variable x y fx
    double x, fx;

    //Solicito los datos de entrada
	printf("Ingrese el valor de x: ");
	scanf("%lf", &x);
	
	

    //Separo por casos, según lo pedido en el ejercicio

    if ( x<5 ) {
        fx = pow(x, 2);

    }

    else if ( x>=5 && x<10 ) {
        fx = pow(x, 3) - 1;
    } 

    else {
        fx = x/2;
    }

    //Una vez calculado x dependiendo del tramo de la función correspondiente a su valor, escribir su valor.

    printf("El valor de fx es %lf \n", fx);
    //Alternativamente puedo cambiar %lf por %.2lf para que los resultados aparezcan con solo 2 decimales.
    


	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;   
}
