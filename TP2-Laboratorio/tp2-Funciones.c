/*
 * tp2-Funciones.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */


#include "tp2-Funciones.h"



void Funcion_Menu(char* menu, char* opc0,char* opc1,char* opc2,char* opc3,char* opc4)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s",menu, opc0,opc1,opc2,opc3,opc4);

}

int ObtenerNumeroInt(int* pRespuesta,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int numero;
	int i;
	int retorno;
	retorno=-1;

	if(pRespuesta!= NULL && mensaje!= NULL && mensajeError!= NULL && reintentos>-1)
	{
		for(i=reintentos;i>0;i--)
		{
			printf("\n%s", mensaje);
			scanf("%d",&numero);

			if(numero>minimo && numero<maximo)
			{
				*pRespuesta=numero;
				retorno=1;
				break;
			}
			else
			{
				printf("|_%s_|\n\n", mensajeError);
			}
		}
	}
	return retorno;
}
int ObtenerNumeroFloat(float* pRespuesta,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
{
	float numero;
	int i;
	int retorno;
	retorno=-1;

	if(pRespuesta!= NULL && mensaje!= NULL && mensajeError!= NULL && reintentos>-1)
	{
		for(i=reintentos;i>0;i--)
		{
			printf("\n%s", mensaje);
			scanf("%f",&numero);

			if(numero>minimo && numero<maximo)
			{
				*pRespuesta=numero;
				retorno=1;
				break;
			}
			else
			{
					printf("|_%s_|\n\n", mensajeError);
			}
		}
	}
	return retorno;
}

int ComparaEstado(int estado, char* mensaje, char* mensajeError)
{
	int retorno;
	if((estado==1 || estado==-1) && mensaje!=NULL && mensajeError!=NULL)
	{
		if(estado==1)
		{
			printf("\n*%s*\n\n", mensaje);
			retorno=1;
		}
		else
		{
			if(estado==-1)
			{
				printf("\n|_%s_|\n\n", mensajeError);
				retorno=-1;
			}
		}
	}
	return retorno;
}

