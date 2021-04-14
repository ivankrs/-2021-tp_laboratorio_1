/*
 * Tp1-Funciones.c
 *
 *  Created on: 14 abr. 2021
 *      Author: Usuario
 */

#include "Tp1-Funciones.h"



void MostrarOperando(int operandoA, int operandoB)
{
	if(operandoA ==-1111)
	{
		printf("\n|>A = <|");
	}
	else
	{
		printf("\n|>A = %d<|",operandoA);

	}
	if(operandoB ==-1111)
		{
			printf("  |>B = <|\n");
		}
		else
		{
			printf("  |>B = %d<|\n",operandoB);
		}

}

int IngresarOperando(void)
{
	int operando;
	printf("\nIngrese un numero: ");
	scanf("%d", &operando);

	return operando;
}

void SumarOperandos(int operandoA, int operandoB)
{
	int suma;
	suma = operandoA + operandoB;
	RecibirSuma(suma);
}
void RestarOperandos(int operandoA, int operandoB)
{
	int resta;
	resta =operandoA - operandoB;
	RecibirResta(resta);
}
void MultiplicarOperandos(int operandoA, int operandoB)
{
	int multiplicar;
	multiplicar = operandoA * operandoB;
	RecibirMultiplicacion(multiplicar);
}
void DividirOperandos(float operandoA, int operandoB)
{
	float dividir;
	dividir =operandoA / operandoB;
	RecibirDivision(dividir);
}
void FactorialOperando(int operando)
{
	int i;
	int factorial;
	factorial=1;
	for(i = operando; i > 1; i--)
	{
		factorial *= i;
	}
	RecibirFactorial(factorial);
}
void FactorialOperando2(int operando2)
{
	int i;
	int factorial2;
	factorial2=1;
	for(i = operando2; i > 1; i--)
	{
		factorial2 *= i;
	}
	RecibirFactorial2(factorial2);
}

void RecibirSuma(int suma)
{
	printf("%d", suma);
}
void RecibirResta(int resta)
{
	printf("%d", resta);
}
void RecibirMultiplicacion(int multiplicar)
{
	printf("%d", multiplicar);
}
void RecibirDivision(float dividir)
{
	printf("%f", dividir);
}
void RecibirFactorial(int factorial)
{
	printf("%d", factorial);
}
void RecibirFactorial2(int factorial2)
{
	printf("%d", factorial2);
}

/*void MostrarSuma(int);
void MostrarResta(int);
void MostrarMultiplicacion(int);
void MostrarDivision(float);
void MostrarFactorial(int);
void MostrarFactorial2(int);*/
