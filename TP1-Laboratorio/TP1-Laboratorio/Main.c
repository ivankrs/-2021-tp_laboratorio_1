/*
 * Main.c
 *
 *  Created on: 24 mar. 2021
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int opcion;

	setbuf(stdout, NULL);

	do
	{
		printf("1. Alta\n");
		printf("2. Bajas\n");
		printf("3. Modificar\n");
		printf("4. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Estoy dando de alta!!!\n\n");
			break;
			case 2:
				printf("Estoy dando de baja!!!\n\n");
			break;
			case 3:
				printf("Estoy Modificando!!!\n\n");
			break;
			case 4:
				printf("Estoy saliendo del programa. Besitos en la frente!!!");
			break;
		}

	}while(opcion!=4);


	return EXIT_SUCCESS;
}
