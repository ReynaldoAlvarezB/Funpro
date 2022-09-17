#include<stdio.h>

void LeerDatos(double *, double *, double *);
/*

1. Lectura de datos
1.1. Enunciado
Se le pide crear un subprograma utilizando lenguaje C que, permita la lectura de tres n´umeros reales
que corresponden a los tres lados de un tri´angulo.
Recuerde que este subprograma debe tener nombre descriptivo, al igual que las variables y par´ametros
que se usen en el. Se recomiendan los siguientes nombres: LeerDatos, leer lados triangulo, LeerDatosEntrada, LeerLados
	
*/



int main() {
	
	double n1, n2, n3;
	//main(); //Solo pongo esto para que se vuelva a ejecutar al terminar
	LeerDatos(&n1,&n2,&n3);
	printf("%lf %lf %lf", n1, n2, n3);
	return 0;
}

void LeerDatos( double *n1, double *n2, double *n3){
    
    printf("Ingrese los numeros: \n");
    scanf("%lf %lf %lf", n1, n2, n3);
}
