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

sEmpleado PedirDato()
{
	sEmpleado empleadoIngresado;

	empleadoIngresado.id = 1000;
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

	empleadoIngresado.hayEspacio = OCUPADO;



	return empleadoIngresado;
}

int PrintArrayEmpleados(sEmpleado* pArray, int cantidad)
{
	int retorno;
	int i;

	retorno=0;

	if(pArray!=NULL&&cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{
			if(pArray[i].hayEspacio==OCUPADO)
			{
				printf("\nId: %d - nombre: %s - apellido: %s - salaio: %f - sector: %d", pArray[i].id, pArray[i].nombre, pArray[i].apellido, pArray[i].salario,pArray[i].sector);
			}
		}
	}
	return retorno;
}

int HayEspacioEnArrayEmpleados(sEmpleado* pArray, int cantidad)
{
	int retorno;
	int i;

	retorno=0;

	if(pArray!=NULL&&cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{
			pArray[i].hayEspacio = VACIO;
		}
	}
	return retorno;
}

