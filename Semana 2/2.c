#include<stdio.h>
#include<math.h>

//CONSTANTES
#define PI 3.14159

/*
2. ´Area del c´ırculo
Dado el radio de determinado c´ırculo, se pide calcular el ´area usando la f´ormula ´area = πradio2.

*/

int main() {
		
	double radio, area;

	

	printf("Ingrese el radio: ");
	scanf("%lf", &radio);

	area = pow(radio, 2) * PI;

	printf("\nEl area es %lf \n", area);


	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}
