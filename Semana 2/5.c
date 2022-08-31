#include<stdio.h>
#include<math.h>



/*

5. Area del trapecio ´
Sea el trapecio con sus 4 lados como se muestra en la figura 1, calcule el ´area

*/

int main() {

    double ladoA, ladoB, ladoC, ladoD, area;

    printf("\nIngrese los valores de los lados como números separados por un espacio\n");

    scanf("%lf %lf %lf %lf", &ladoA, &ladoB, &ladoC, &ladoD);


    area =  ((ladoA+ladoB)/2) * pow( (  pow(ladoC,2) - pow(( pow(ladoC,2) - pow(ladoD,2) + pow(ladoA-ladoB,2) ) / (2 * (ladoA - ladoB)), 2) ) ,0.5)        ;


    printf("El area es %lf\n", area);
    
		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}
