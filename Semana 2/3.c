#include<stdio.h>
#include<math.h>



/*

3. ´Area del tri´angulo
Dado los 3 lados de un tri´angulo, calcule el ´area.

Recordar que:
Seg´un la f´ormula de Her´on el ´area del tri´angulo
se calcula de la siguiente manera:
area =
p
s(s − lado1)(s − lado2)(s − lado3)
donde:
s =
lado1 + lado2 + lado3
2
.
lado1, lado2 y lado3 son los lados del
tri´angulo.

*/

int main() {

    int lado1, lado2, lado3;

    double s, area;

    printf("\nIngrese los valores de los lados como números enteros separados por un espacio\n");

    scanf("%i %i %i", &lado1, &lado2, &lado3);

    /*
    
    Aplicamos Herón
    
    */


    s = (lado1 + lado2 + lado3)/2;

    area = pow((s * (s-lado1) * (s-lado2) * (s-lado3)), 0.5);

    printf("El area es %lf\n", area);
    
		
	main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	return 0;
}
