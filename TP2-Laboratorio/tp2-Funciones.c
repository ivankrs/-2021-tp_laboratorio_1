/*
 * tp2-Funciones.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */


#include "tp2-Funciones.h"



void Funcion_Menu(void)
{
	printf("\n>Menu de Opciones<\n0. Salir\n1. Altas\n2. Modificar\n3. Bajas\n4. Informar\n");
}

int get_Nuemero(int* pRespuesta,char* mensaje,char* mensajeError,int reintentos)
{
	int numero;
	int i;
	int retorno;
	retorno=-1;

	if(pRespuesta!= NULL && mensaje!= NULL && mensajeError!= NULL && reintentos>-1)
	{
		for(i=1;i<reintentos;i++)
		{
			printf("%s", mensaje);
			scanf("%d",&numero);
			if(numero>-1 && numero<5)
			{
				*pRespuesta=numero;
				retorno=1;
				break;
			}
			else
			{
				if(i!=reintentos)
				{
					printf("|_%s_|\n", mensajeError);
				}
				else
				{
					printf("|_Error. Se acabaron los intentos!!_|\n");
				}
			}
		}
	}
	return retorno;
}

