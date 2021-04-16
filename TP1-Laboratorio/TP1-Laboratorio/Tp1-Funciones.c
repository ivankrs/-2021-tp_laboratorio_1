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
	for(i=1;i<40;i++)
	{
		printf("~~");
	}
	printf("\n\n");
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

//opcion 1 y 2
int IngresarOperando(void)
{
	int operando;
	printf("\n·Ingrese un numero: ");
	scanf("%d", &operando);

	return operando;
}

//opcion 3
int ComprobarIngreso(int operandoA, int operandoB)
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

	if(operando > -1 && operando < 12)
	{
		for(i = operando; i > 1; i--)
		{
			factorial *= i;
		}
	}
	else
	{
		if(operando < 0)
		{
			factorial = -1;
		}
		else
		{
			factorial = 0;
		}
	}

	return factorial;
}

//opcion 4
void MostrarSuma(int suma)
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
	if(factorialA == 0)
	{
		printf("\n¬No se pudo resolver el factorial de A, por ser muy grande,");
	}
	else
	{
		if(factorialA == -1)
		{
			printf("\n¬No se pudo resolver el factorial de A, por ser negativo,");
		}
		else
		{
			printf("\n¬El factorial de A es: %d", factorialA);
		}
	}
}
void MostrarFactorialB(int factorialB)
{
	if(factorialB == 0)
		{
			printf(" y no se pudo resolver el factorial de B, por ser muy grande.\n\n");
		}
		else
		{
			if(factorialB == -1)
			{
				printf(" y no se pudo resolver el factorial de B, por ser negativo.\n\n");
			}
			else
			{
				printf(" y el factorial de B es: %d\n\n", factorialB);
			}
		}
}
