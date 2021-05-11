/*
 * Main.c
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */

#include "tp2-Funciones.h"

int main()
{
	int opcion;


	setbuf(stdout, NULL);

		do
		{

			printf(">>>- MENU -<<<\n");
			printf("\n 1. Ingrese primer operador\n");
			printf(" 2. Ingrese segundo operador\n");
			printf(" 3. Calcular todas las operaciones\n");
			printf(" 4. Mostrar todas las operaciones\n");
			printf(" 5. Salir\n");
			printf("~Elija una opcion(1-5): ");

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

		}while(opcion!=5);


	return 0;
}
