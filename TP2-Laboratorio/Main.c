/*
 * Main.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */

#include "tp2-Funciones.h"
#include "Empleados.h"

#define CantidadEmpleados 2//mil empleados MAX

int main()
{

	int opcionMenu;
	int estado;
	int aux;
	int idEmpleado;
	sEmpleado arrayEmpleados[CantidadEmpleados];
	setbuf(stdout,NULL);
	idEmpleado=0;



	HayEspacioEnArrayEmpleados(arrayEmpleados, CantidadEmpleados);//me cambia hayEspacio a VACIO

		do
		{
			Funcion_Menu();
			estado=get_Nuemero(&opcionMenu, "Ingrese una opcion: ", "Error. Debe ser entre 0 y 4", 3);
			if(estado!=-1)
			{
				switch(opcionMenu)
				{
					case 0:
						printf("\n|_*Salio del Sistema*_|");
					break;
					case 1:
						aux = CargarEmpleado(arrayEmpleados, CantidadEmpleados);
						arrayEmpleados->id[&aux]=idEmpleado;
						printf("\n%d", arrayEmpleados->id[&aux]);
						printf("\n%d",aux);
						idEmpleado+=1;
					break;
					case 2:

					break;
					case 3:

					break;
					case 4:
						PrintArrayEmpleados(arrayEmpleados, CantidadEmpleados);
					break;
				}
			}
		}while(opcionMenu!=0);

	return 0;
}
