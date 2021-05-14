/*
 * Main.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */

#include "Empleados.h"

#define CantidadEmpleados 10//mil empleados MAX

int main()
{

	int opcionMenu;
	int estadoCargaEmpleado;
	sEmpleado arrayEmpleados[CantidadEmpleados];
	setbuf(stdout,NULL);
	estadoCargaEmpleado=-1;
	opcionMenu=-1;



	HayEspacioEnArrayEmpleados(arrayEmpleados, CantidadEmpleados);//me cambia hayEspacio a VACIO

		do
		{
			Funcion_Menu(">Menu de Opciones<","0. Salir","1. Altas","2. Modificar","3. Bajas","4. Informar");
			if(ObtenerNumeroInt(&opcionMenu, "Ingrese una opcion: ", "Error. Debe ser entre 0 y 4",-1,5,2)!=-1)
			{
				switch(opcionMenu)
				{
					case 0:
						printf("\n|_*Salio del Sistema*_|");
					break;

					case 1://cargar
						printf("\n*Cargue un empleado...*\n");
						estadoCargaEmpleado=CargarEmpleado(arrayEmpleados, CantidadEmpleados);
					break;

					case 2: //modificar
						if(ComparaEstado(estadoCargaEmpleado, "Ingreso a Modificar...", "Error. Debe ingresar algun empleado")!=1)
						{
							break;
						}
						else
						{
							if(ModificacionEmpleados(arrayEmpleados, CantidadEmpleados)==1)
							{
								printf("*Se modifico con exito*\n\n");
							}
						}
					break;

					case 3: //bajar
						if(ComparaEstado(estadoCargaEmpleado, "Ingreso a Baja...", "Error. Debe ingresar algun empleado")!=1)
						{
							break;
						}
						else
						{
							if(EliminarEmpleado(arrayEmpleados, CantidadEmpleados)==1)
							{
								printf("\n*Se borro con exito*\n\n");
								if(BuscarPorOcupado(arrayEmpleados, CantidadEmpleados)!=1)
								{
									estadoCargaEmpleado=-1;
								}
							}
						}
					break;

					case 4: //Informar Ordenado
						if(ComparaEstado(estadoCargaEmpleado, "Ingreso a Informar...", "Error. Debe ingresar algun empleado")!=1)
						{
							break;
						}
						else
						{
								OrdanarEmpleados(arrayEmpleados, CantidadEmpleados);
						}
					break;
				}
			}
		}while(opcionMenu!=0);

	return 0;
}
