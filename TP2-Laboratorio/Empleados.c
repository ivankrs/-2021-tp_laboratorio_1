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

static int idIncremental=0;



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
	int auxEstadoInt;
	float auxEstadoFloat;
	auxEstadoInt=-1;
	auxEstadoFloat=-1;
	printf("\nNombre del empleado: ");
	fflush(stdin);
	scanf("%[^\n]", empleadoIngresado.nombre);
	printf("\nApellido del empleado: ");
	fflush(stdin);
	scanf("%[^\n]", empleadoIngresado.apellido);
	do
	{
		auxEstadoFloat=ObtenerNumeroFloat(&empleadoIngresado.salario, "Salario del empleado: ", "Error. Salario debe ser positivo y mayor a 0", 0,999999999,1);
	}while(auxEstadoFloat==-1);
	do
	{
		auxEstadoInt=ObtenerNumeroInt(&empleadoIngresado.sector, "Sector del empleado: ", "Error. Sector debe estar entre 1 y 10",0, 10, 1);
	}while(auxEstadoInt==-1);

	return empleadoIngresado;
}

int ObtenerId(void)
{
	int retorno;
	idIncremental+=1;
	retorno=idIncremental;

	return retorno;
}


int CargarEmpleado(sEmpleado pArray[], int cantidad)
{
    int i;
    int retorno;
    sEmpleado auxiliar;
    retorno=-1;

    if(pArray!=NULL&&cantidad>0)
    {
   		i = BuscarEspacio(pArray, cantidad);
		if(i!=-1)
		{

			auxiliar = PedirDato();
			auxiliar.id=ObtenerId();
			auxiliar.hayEspacio=OCUPADO;

			pArray[i]=auxiliar;
			retorno=1;

			printf("\n*Empleado generado con exito*\n\n");
		}
		else
		{
			printf("\n|_No hay espacio!!_|\n\n");
		}
    }
    return retorno;
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

void PrintUnEmpleado(sEmpleado unEmpleado)
{
	printf("\nId: %d -- Nombre: %s -- Apellido: %s -- Salario: %.2f -- Sector: %d\n\n", unEmpleado.id,
																					    unEmpleado.nombre,
																					    unEmpleado.apellido,
																					    unEmpleado.salario,
																					    unEmpleado.sector);

}
int PrintArrayEmpleados(sEmpleado* pArray, int cantidad)
{
	int i;
	int retorno;
	retorno=1;

	if(pArray!=NULL && cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{
			if(pArray[i].hayEspacio==OCUPADO)
			{
				PrintUnEmpleado(pArray[i]);
				/*printf("\nLugar: %d -- Id: %d -- Nombre: %s -- Apellido: %s -- Salario: %.2f -- Sector: %d\n", i,
																										 pArray[i].id,
																									 	 pArray[i].nombre,
																									 	 pArray[i].apellido,
																									 	 pArray[i].salario,
																									 	 pArray[i].sector);*/

			}
		}
		printf("\n\n");
	}
	else
	{
		printf("\n|_No hay nada para Mostrar_|\n");
		retorno=-1;
	}
	return retorno;
}

int BuscarPorId(sEmpleado* pArray, int cantidad, int id)
{
	int retorno;
	retorno=-1;
	int i;

	if(pArray!=NULL && cantidad>0 && id>0 && id<1001)
	{
		for(i=0;i<cantidad;i++)
		{
			if(pArray[i].id==id && pArray[i].hayEspacio == OCUPADO)
			{
				retorno=i;
				break;
			}
		}

	}
	return retorno;
}

int BuscarPorOcupado(sEmpleado* pArray, int cantidad)
{
	int retorno;
	retorno=-1;
	int i;

	if(pArray!=NULL && cantidad>0)
	{
		for(i=0;i<cantidad;i++)
		{
			if(pArray[i].hayEspacio == OCUPADO)
			{
				retorno=1;
				break;
			}
		}

	}
	return retorno;
}

sEmpleado ModificarUnEmpleado(sEmpleado* pArray)
{
	sEmpleado empleadoModificado;
	float auxEstadoFloat;
	int auxEstadoInt;
	int opcionMenu;
	int flagNombre;
	int flagApellido;
	int flagSalario;
	int flagSector;
	auxEstadoFloat=-1;
	auxEstadoInt=-1;
	flagNombre=0;
	flagApellido=0;
	flagSalario=0;
	flagSector=0;

	do
	{
		Funcion_Menu("\nt>|Menu Modificar: |\n", "1. Nombre", "2. Apellido", "3. Salario", "4. Sector", "5. Salir");
		ObtenerNumeroInt(&opcionMenu,"Ingrese una opcion: " , "Debe ser entre 1 y 5",0, 6, 2);
		switch(opcionMenu)
		{
		case 1:
			printf("\nNombre del empleado: ");
			fflush(stdin);
			scanf("%[^\n]", empleadoModificado.nombre);
			flagNombre=1;
		break;
		case 2:
			printf("\nApellido del empleado: ");
			fflush(stdin);
			scanf("%[^\n]", empleadoModificado.apellido);
			flagApellido=1;
		break;
		case 3:
			do
			{
				auxEstadoFloat=ObtenerNumeroFloat(&empleadoModificado.salario, "Salario del empleado: ", "Error. Salario debe ser positivo y mayor a 0", 0,999999999,1);
			}while(auxEstadoFloat==-1);
			flagSalario=1;
		break;
		case 4:
			do
			{
				auxEstadoInt=ObtenerNumeroInt(&empleadoModificado.sector, "Sector del empleado: ", "Error. Sector debe estar entre 1 y 10",0, 10, 1);
			}while(auxEstadoInt==-1);
			flagSector=1;
		break;
		case 5:
			printf("\nSalio de modificar\n");
		break;
		}

	}while(opcionMenu!=5);

	empleadoModificado.id=pArray->id;
	if(flagNombre==0)
	{
		strncpy(empleadoModificado.nombre,pArray->nombre,sizeof(empleadoModificado.nombre));
	}
	if(flagApellido==0)
	{
		strncpy(empleadoModificado.apellido,pArray->apellido,sizeof(empleadoModificado.apellido));
	}
	if(flagSalario==0)
	{
		empleadoModificado.salario = pArray->salario;
	}
	if(flagSector==0)
	{
		empleadoModificado.sector = pArray->sector;
	}


	return empleadoModificado;
}

int ModificacionEmpleados(sEmpleado pArray[], int cantidad)
{
	int retorno;
	int idEmpleado;
	int index;
	sEmpleado auxEmpleadoCompleto;
	sEmpleado auxEmpleadoAModificar;
	retorno=0;

	if(PrintArrayEmpleados(pArray, cantidad)==1 && ObtenerNumeroInt(&idEmpleado, "Seleccione el id del empleado a modificar: ", "Error. La id no existe", 0,1001, 2)!=-1)
	{
		index = BuscarPorId(pArray, cantidad, idEmpleado);

		auxEmpleadoAModificar = pArray[index];

		auxEmpleadoCompleto = ModificarUnEmpleado(&auxEmpleadoAModificar);

		auxEmpleadoCompleto.hayEspacio=OCUPADO;

		pArray[index]=auxEmpleadoCompleto;

		PrintUnEmpleado(*pArray);


		retorno=1;
	}
	else
	{
		retorno=-1;
	}

	return retorno;
}


int EliminarEmpleado(sEmpleado pArray[], int cantidad)
{
	int retorno;
	int idEmpleado;
	int index;
	sEmpleado auxEmpleadoCompleto;
	retorno=0;

	if(PrintArrayEmpleados(pArray, cantidad) && ObtenerNumeroInt(&idEmpleado, "Seleccione el id del empleado a borrar: ", "Error. La id no existe", 0,1001, 2)!=-1)
	{
		index = BuscarPorId(pArray, cantidad, idEmpleado);

		auxEmpleadoCompleto = pArray[index];

		auxEmpleadoCompleto.hayEspacio=VACIO;

		pArray[index]=auxEmpleadoCompleto;

		retorno=1;
	}

	return retorno;
}

void OrdanarEmpleados(sEmpleado pArray[], int cantidad)
{
	int i;
	int j;
	sEmpleado auxiliarEmpleado;

	if(pArray!=NULL && cantidad>0)
	{
		for(i=0; i<cantidad-1;i++)
		{
			for(j=i+1;j<cantidad;j++)
			{
				if(pArray[i].hayEspacio==OCUPADO && pArray[j].hayEspacio==OCUPADO)
				{
					if(pArray[i].sector==pArray[j].sector)
					{
						if(pArray[i].apellido>pArray[j].apellido)
						{
							auxiliarEmpleado = pArray[i];
							pArray[i]=pArray[j];
							pArray[j]=auxiliarEmpleado;
						}
					}
				}
			}
		}

	}
	PrintArrayEmpleados(pArray, cantidad);
}

