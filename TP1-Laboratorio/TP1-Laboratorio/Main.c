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
#include "Tp1-Funciones.h"



int main(void) {

	int opcion;
	int	numeroIngresado1;
	int numeroIngresado2;
	int suma;
	int resta;
	int multiplica;
	float divide;
	int factorial;
	int factorial2;
	int banderaNumero1;
	int banderaNumero2;
	int banderaOperacion;
	float aux;
	int i;
	int j;

	banderaNumero1 = 0;
	banderaNumero2 = 0;
	banderaOperacion = 0;
	factorial = 1;
	factorial2 = 1;
	numeroIngresado1= 0;
	numeroIngresado2= 0;


	setbuf(stdout, NULL);

	do
	{
		printf(">>>MENU CALCULADORA<<<");
		//printf("\n|>A= %d<|\n|>B= %d<|\n", numeroIngresado1,numeroIngresado2);
		MostrarOperando(numeroIngresado1, numeroIngresado2);
		printf("\n1. Ingrese primer operador\n");
		printf("2. Ingrese segundo operador\n");
		printf("3. Calcular todas las operaciones\n");
		printf("4. Mostrar todas las operaciones\n");
		printf("5. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				/*printf("\nIngrese un numero: ");
				scanf("%d", &numeroIngresado1);*/
				banderaNumero1 = 1;
				numeroIngresado1 = IngresarOperando();
				printf("\n|Se guardo el primer operador|\n\n");
			break;
			case 2:
				/*printf("\nIngrese un segundo numero: ");
				scanf("%d", &numeroIngresado2);*/
				banderaNumero2 = 1;
				numeroIngresado2= IngresarOperando();
				printf("\n|Se guardo el segundo operador|\n\n");
			break;
			case 3:
				if(banderaNumero1 == 0 || banderaNumero2==0)
				{
					printf("\n¡¡Falta ingresar operando!!\n\n");
					continue;
				}
				else
				{
					printf("\n|Se calculan todas las operaciones|\n\n");
					suma= numeroIngresado1 + numeroIngresado2;
					resta = numeroIngresado1 - numeroIngresado2;
					multiplica = numeroIngresado1 * numeroIngresado2;
					aux = numeroIngresado1;
					divide = aux / numeroIngresado2;
					for(i = numeroIngresado1; i > 1; i--)
					    {
					        factorial *= i;
					    }
					for(j = numeroIngresado2; j > 1; j--)
						{
							factorial2 *= j;
						}
					banderaOperacion = 1;

				}

			break;
			case 4:
				if(banderaOperacion==1)
				{
					printf("\n|Se muestran todas las operaciones|\n\n");
					printf("\nEl resultado de la suma (A+B) es: %d\n", suma);
					printf("\nEl resultado de la resta (A-B) es: %d\n", resta);
					printf("\nEl resultado de la multiplicacion (A*B) es: %d\n", multiplica);

					if(numeroIngresado2!=0)
					{
						printf("\nEl resultado de la division (A/B) es: %.2f\n", divide);
					}
					else
					{
						printf("\nNo se puede dividir por cero\n");
					}
					printf("\nEl factorial de numero A es: %d\n",factorial);

					printf("\nEl factorial de numero B es: %d\n",factorial2);
				}
				else
				{
					printf("\n¡¡Falta realizar operaciones!!\n\n");
					continue;
				}
				i=0;
				j=0;
				//numeroIngresado1=0;
				//numeroIngresado2=0;
				banderaNumero1=0;
				banderaNumero2=0;
				banderaOperacion=0;
				factorial=1;
				factorial2=1;
			break;
			case 5:
				printf("\n|Esta saliendo del programa|\n");
			break;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}
