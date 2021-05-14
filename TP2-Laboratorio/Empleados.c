/*
 * Empleados.c
 *
 *  Created on: 12 may. 2021
 *      Author: ivank
 */

#include "Empleados.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int HayEspacioEnArrayEmpleados(sEmpleado* pArray, int cantidad)
{
	int i;
	if(pArray!=NULL&&cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{
			pArray[i].hayEspacio = VACIO;
		}
	}
	return 0;
}

sEmpleado PedirDato()
{
	sEmpleado empleadoIngresado;

	printf("\nNombre del empleado: ");
	fflush(stdin);
	scanf("%[^\n]", empleadoIngresado.nombre);
	printf("\nApellido del empleado: ");
	fflush(stdin);
	scanf("%[^\n]", empleadoIngresado.apellido);
	printf("\nSalario del empleado: ");
	scanf("%f", &empleadoIngresado.salario);
	printf("\nSector del empleado: ");
	scanf("%d",&empleadoIngresado.sector);

	return empleadoIngresado;
}


int CargarEmpleado(sEmpleado pArray[], int cantidad)
{
    int i;

    sEmpleado auxiliar;
    if(pArray!=NULL&&cantidad>0)
    {
   		i = BuscarEspacio(pArray, cantidad);
		if(i!=-1)
		{

			auxiliar = PedirDato();

			auxiliar.hayEspacio=OCUPADO;

			pArray[i]=auxiliar;

			printf("\n*Empleado generado con exito*\n");
		}
		else
		{
			printf("\n|_No hay espacio!!_|\n");
		}
    }
    return i;
}

int BuscarEspacio(sEmpleado pArray[], int cantidad)
{
	int i;
	int index;
	index = -1;
	for(i=0; i<cantidad; i++)
	{
		if(pArray[i].hayEspacio==VACIO)
		{
			index = i;

			break;
		}
	}
	return index;
}

void PrintArrayEmpleados(sEmpleado* pArray, int cantidad)
{
	int i;

	if(pArray!=NULL && cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{
			if(pArray[i].hayEspacio==OCUPADO)
			{
				printf("\nLugar: %d -- Id: %d -- Nombre: %s -- Apellido: %s -- Salario: %f -- Sector: %d", i,
																										 pArray[i].id,
																									 	 pArray[i].nombre,
																									 	 pArray[i].apellido,
																									 	 pArray[i].salario,
																									 	 pArray[i].sector);
			}
		}
	}
	printf("\n\n");
}



