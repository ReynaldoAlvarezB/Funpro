#include<stdio.h>
#include<math.h>

#define PI 3.1415926;

/*
2. ´Area del c´ırculo
Dado el radio de determinado c´ırculo, se pide calcular el ´area usando la f´ormula ´area = πradio2.

*/

int main() {
		
	int radio;
	double area;

	

	printf("Ingrese el radio: ");
	scanf("%i", &radio);

	area = pow(radio, 2) * PI;

	printf("\nEl area es %.2lf \n", area);


	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}
