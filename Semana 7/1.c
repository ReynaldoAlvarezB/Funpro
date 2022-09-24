#include<stdio.h>

/*
	1.1. Los n´umeros amigos
Dos n´umeros son amigos (a y b) si se cumple que la suma de todos los divisores de a, sin contar el
propio a, es igual a b, y a la misma vez se cumple que la suma de todos los divisores de b, sin contar el
propio b, es igual a a
Tomemos por ejemplo los n´umeros 220 y 284. Al calcular los divisores del n´umero 220 (sin contar el
propio n´umero), son: {1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110}, cuya suma es:
1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 (1)
Ahora, calculamos los divisores del n´umero 284 (sin contar el propio n´umero), dando como resultado: {1,
2, 4, 71, 142} y cuya suma es:
1 + 2 + 4 + 71 + 142 = 220 (2)
Del ejemplo vemos que la suma de divisores del n´umero 220, sin contar el propio 220, es igual al n´umero
284 y que la suma de divisores del n´umero 284, sin contar el propio 284, es igual al n´umero 220. Con esto
podemos concluir que los n´umeros 220 y 284 son amigos.
Se solicita al usuario que lea dos n´umeros, valide si estos n´umeros son amigos y muestre un mensaje
indicando si lo son o no.
*/
//Declarar la función, leer datos
void LeerDatos(int *, int *);
int ValidarSiSonAmigos( int, int);


int main() {

    //Variables para guardar los datos
    int n1, n2;
    int sonAmigos;

	//Leer datos
        //Definir función

    //Cuando hago una lectura tengo que pasar una dirección de memoria
    LeerDatos(&n1, &n2);
        //Definir función
    sonAmigos=ValidarSiSonAmigos( n1, n2);

    

    //Son amigos si la suma de sus divisores es el otro número

    //Mostrar un mensaje		
    if (sonAmigos) {
        printf("Los numeros ingresados son amigos");
    }
    else {
        printf("Los numeros ingresados no son amigos");
    }
	
	return 0;
}

void LeerDatos(int *n1, int *n2) {
    printf("Ingrese los valores de ambos numeros");
    //Ya que está recibiendo la referencia de ambas variables, se pasa solo el valor de la variable
    scanf("%i %i", n1, n2);
}

int ValidarSiSonAmigos( int n1, int n2) {
    int i, ii, suma_de_divisores_n1, suma_de_divisores_n2, son_amigos;
    i = 1;
    ii = 1;
    suma_de_divisores_n1=0;
    suma_de_divisores_n2=0;
    son_amigos = 0;
    
    //Encuentro la suma de los divisores del número 1
    while (i < n1) {
        //Si el residuo es igual a 0....
        if ( (n1%i) == 0) {
            suma_de_divisores_n1 = suma_de_divisores_n1 + i;
        }
        //Si el residuo es diferente de 0....
        //Ah no, no se necesita un else
        i = i+1;
    }


    //Encuentro la suma de los divisores del número 2
    while (ii < n2) {
        //Si el residuo es igual a 0....
        if ( (n2%ii) == 0) {
            suma_de_divisores_n2 = suma_de_divisores_n2 + ii;
        }
        //Si el residuo es diferente de 0....
        //Ah no, no se necesita un else
        ii = ii+1;
    }

    if (suma_de_divisores_n1 == n2 && suma_de_divisores_n2 == n1) {
        son_amigos= 1;
    }

    return (son_amigos);
    
    
}