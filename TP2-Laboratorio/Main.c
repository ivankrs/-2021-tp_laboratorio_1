/*
 * Main.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */

#include "tp2-Funciones.h"
#include "Empleados.h"

#define CantidadEmpleados 3 //mil empleados MAX

int main()
{
	//int opcion;
	sEmpleado arrayEmpleados[CantidadEmpleados];
	//sEmpleado auxiliar;

	setbuf(stdout, NULL);

	HayEspacioEnArrayEmpleados(arrayEmpleados, CantidadEmpleados);//me cambia espacio a VACIO

	PedirDato();

	/*strncpy(auxiliar.nombre,"Juan",sizeof(auxiliar.nombre));
	strncpy(auxiliar.apellido,"Perez",sizeof(auxiliar.apellido));
	auxiliar.id = 10031;
	auxiliar.salario = 300.5;
	auxiliar.sector = 2;
	auxiliar.hayEspacio=OCUPADO;

	arrayEmpleados[1]=auxiliar;*/


	PrintArrayEmpleados(arrayEmpleados, CantidadEmpleados);


		/*do
		{

			printf(">>>- MENU -<<<\n");
			printf("\n 1. Alta\n");
			printf(" 2. Modificar \n");
			printf(" 3. Baja\n");
			printf(" 4. Mostrar\n");
			printf("Elija una opcion(1-4): ");

			scanf("%d", &opcion);

			switch(opcion)
			{
				case 1:
				break;
				case 2:
				break;
				case 3:
				break;
				case 4:
				break;
				case 5:
				break;
			}

		}while(opcion!=4);
		*/

	return 0;
}
