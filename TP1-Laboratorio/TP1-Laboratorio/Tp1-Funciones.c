/*
 * Tp1-Funciones.c
 *
 *  Created on: 14 abr. 2021
 *      Author: Ivan Keumurdji
 */

#include "Tp1-Funciones.h"

void Linias (void)
{
	int i;
	int j;
	for(j=1;j<2;j++)
	{
		for(i=1;i<50;i++)
		{
			printf("~~");
		}
		printf("\n\n");
	}

}

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
			printf("···|>B = <|\n");
		}
		else
		{
			printf("···|>B = %d<|\n",operandoB);
		}

}

int IngresarOperando(void)
{
	int operando;
	printf("\n·Ingrese un numero: ");
	scanf("%d", &operando);

	return operando;
}

int ComprobarIngreso(int operandoA, int operandoB)//opcion 3
{
	int estado;



	if(operandoA==-1111 || operandoB==-1111)
	{
		Linias();
		printf("|-¡¡Falta ingresar operando!!-|\n\n");

		estado = 0;
	}
	else
	{
		Linias();
		printf("|-Se calcularon todas las operaciones-|\n\n");

		estado = 1;
	}
	return estado;
}



int SumarOperandos(int operandoA, int operandoB)
{
	int suma;
	suma = operandoA + operandoB;

	return suma;
}
int RestarOperandos(int operandoA, int operandoB)
{
	int resta;
	resta =operandoA - operandoB;
	return resta;
}
int MultiplicarOperandos(int operandoA, int operandoB)
{
	int multiplicar;
	multiplicar = operandoA * operandoB;

	return multiplicar;
}
float DividirOperandos(float operandoA, int operandoB)
{
	float dividir;

		dividir =operandoA / operandoB;

	return dividir;
}
int FactorialOperandoA(int operando)
{
	int i;
	int factorial;
	factorial=1;
	for(i = operando; i > 1; i--)
	{
		factorial *= i;
	}
	return factorial;
}


void MostrarSuma(int suma)//opcion 4
{
	printf("\n¬El resultado de la suma (A+B) es: %d", suma);
}


void MostrarResta(int resta)
{
	printf("\n¬El resultado de la resta (A-B) es: %d", resta);
}
void MostrarMultiplicacion(int multiplica)
{
	printf("\n¬El resultado de la multiplicacion (A*B) es: %d", multiplica);
}
void MostrarDivision(float divide)
{
	printf("\n¬El resultado de la divicion (A/B) es: %.2f", divide);
}
void MostrarFactorialA(int factorialA)
{
	printf("\n¬El factorial de A es: %d", factorialA);
}
void MostrarFactorialB(int factorialB)
{
	printf("\n¬El factorial de B es: %d\n\n", factorialB);
}
