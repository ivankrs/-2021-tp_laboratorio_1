/*
 * Main.c
 *
 *  Created on: 24 mar. 2021
 *      Author: Ivan Keumurdji
 *
	 *Enunciado
	Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
	1. Ingresar 1er operando (A=x)
	2. Ingresar 2do operando (B=y)
	3. Calcular todas las operaciones
	a) Calcular la suma (A+B)
	b) Calcular la resta (A-B)
	c) Calcular la division (A/B)
	d) Calcular la multiplicacion (A*B)
	e) Calcular el factorial (A!)
	4. Informar resultados
	a) “El resultado de A+B es: r”
	b) “El resultado de A-B es: r”
	c) “El resultado de A/B es: r” o “No es posible dividir por cero”
	d) “El resultado de A*B es: r”
	e) “El factorial de A es: r1 y El factorial de B es: r2”
	5. Salir
	• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
	que contenga las funciones para realizar las cinco operaciones.
	• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
	(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
	• Deberán contemplarse los casos de error (división por cero, etc)
	• Documentar todas las funciones
 *
 */


#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int opcion;
	int numeroIngresado1;
	int numeroIngresado2;
	int suma;
	int resta;
	//int multiplica;
	int banderaNumero1;
	int banderaNumero2;
	int banderaOperacion;

	banderaNumero1 = 0;
	banderaNumero2 = 0;
	banderaOperacion = 0;

	setbuf(stdout, NULL);

	do
	{
		printf("\n>>>MENU CALCULADORA<<<");
		printf("\n\n1. Ingrese primer operador\n");
		printf("2. Ingrese segundo operador\n");
		printf("3. Calcular todas las operaciones\n");
		printf("4. Mostrar todas las operaciones\n");
		printf("5. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("\n ingrese un numero: ");
				scanf("%d", &numeroIngresado1);
				banderaNumero1 = 1;
				printf("\n|Se guardo el primer operador|\n");
			break;
			case 2:
				printf("\n ingrese un segundo numero: ");
				scanf("%d", &numeroIngresado2);
				banderaNumero2 = 1;
				printf("\n|Se guardo el segundo operador|\n");
			break;
			case 3:
				if(banderaNumero1 == 0 || banderaNumero2==0)
				{
					continue;
				}
				else
				{
					suma= numeroIngresado1 + numeroIngresado2;
					resta = numeroIngresado1 - numeroIngresado2;
					//multiplica = numeroIngresado1 * numeroIngresado2;
					banderaOperacion = 1;
					printf("\n|Se calculan todas las operaciones|\n");
				}

			break;
			case 4:
				if(banderaOperacion==1)
				{
					printf("\nEl resultado de la suma es: %d\n", suma);
					printf("\nEl resultado de la resta es: %d\n", resta);
					printf("\n|Se muestran todas las operaciones|\n");
				}
				else
				{
					continue;
				}
			break;
			case 5:
				printf("\n|Esta saliendo del programa|\n");
			break;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}
