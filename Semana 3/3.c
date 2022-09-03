#include<stdio.h>

/*
	3. Comparaci´on con cero
Dado un n´umero cualquiera, determinar si el n´umero es diferente de cero.
	
	
	
*/



int main() {

    //Declaro las variables 
    double num;

    //Solicito los datos de entrada
    printf("Ingrese el numero: ");
    scanf("%lf", &num); 

    //Declaro el procedimiento a seguir si el número cumple la condición de ser igual a 0
    if ( num == 0)  {
        printf("El numero es igual a 0 \n");    
    }

    //Declaro el procedimiento en caso de no cumplirla
    else    {
        printf("El numero es diferente de 0 \n");    
    }
    
	
		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}