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
	int auxEstado;
	int suma;
	int resta;
	int multiplica;
	float divide;
	int factorialA;
	int factorialB;



	numeroIngresado1= -1111;
	numeroIngresado2= -1111;


	setbuf(stdout, NULL);

	do
	{
		Linias();
		printf(">>>-MENU CALCULADORA-<<<\n");
		MostrarOperando(numeroIngresado1, numeroIngresado2);
		printf("\n 1. Ingrese primer operador\n");
		printf(" 2. Ingrese segundo operador\n");
		printf(" 3. Calcular todas las operaciones\n");
		printf(" 4. Mostrar todas las operaciones\n");
		printf(" 5. Salir\n");
		printf("~Elija una opcion(1-5): ");
		scanf("%d", &opcion);
		printf("\n");

		switch(opcion)
		{
			case 1:
				Linias();
				MostrarOperando(numeroIngresado1, numeroIngresado2);
				numeroIngresado1 = IngresarOperando();
				printf("\n|-Se guardo el primer operador-|\n\n");

			break;
			case 2:
				Linias();
				MostrarOperando(numeroIngresado1, numeroIngresado2);
				numeroIngresado2= IngresarOperando();
				printf("\n|-Se guardo el segundo operador-|\n\n");

			break;
			case 3:
				 auxEstado = ComprobarIngreso(numeroIngresado1, numeroIngresado2);
				 if(auxEstado==1)
				 {
					suma = SumarOperandos(numeroIngresado1, numeroIngresado2);
					resta=RestarOperandos(numeroIngresado1, numeroIngresado2);
					multiplica=MultiplicarOperandos(numeroIngresado1, numeroIngresado2);
					if(numeroIngresado2==0)
					{
						divide=-1111;
					}
					else
					{
						divide=DividirOperandos(numeroIngresado1, numeroIngresado2);
					}
					factorialA = FactorialOperandoA(numeroIngresado1);
					factorialB = FactorialOperandoA(numeroIngresado2);
					auxEstado=5;
				}
				else
				{
					continue;
				}
			break;
			case 4:
				if(auxEstado==5)
				{
					Linias();
					printf("|-Se Muestran todas las operaciones-|\n");
					MostrarOperando(numeroIngresado1, numeroIngresado2);
					MostrarSuma(suma);
					MostrarResta(resta);
					MostrarMultiplicacion(multiplica);
					if(divide==-1111)
					{
						printf("\n¬El resultado de la division es: No se puede dividir por cero");
					}
					else
					{
						MostrarDivision(divide);
					}
					MostrarFactorialA(factorialA);
					MostrarFactorialB(factorialB);


					numeroIngresado1=-1111;
					numeroIngresado2=-1111;
					auxEstado=0;

				}
				else
				{
					Linias();
					printf("|-¡¡Falta realizar las operaciones!!-|\n\n");

				}
			break;
			case 5:
				Linias();
				printf("|-Esta saliendo del programa-|\n\n");
				Linias();
			break;
			default :
				continue;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}
