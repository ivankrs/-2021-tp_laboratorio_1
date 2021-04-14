/*
 * Tp1-Funciones.c
 *
 *  Created on: 14 abr. 2021
 *      Author: Usuario
 */

#include "Tp1-Funciones.h"



void MostrarOperando(int operandoA, int operandoB)
{
	printf("\n|<A=%d>|",operandoA);
	printf("  |<B=%d>|\n",operandoB);

}

int IngresarOperando(void)
{
	int operando;
	printf("\nIngrese un numero: ");
	scanf("%d", &operando);

	return operando;
}
