/*
 * Empleados.h
 *
 *  Created on: 12 may. 2021
 *      Author: ivank
 */

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

#define OCUPADO 0
#define VACIO 1

typedef struct{
	int id;
	char nombre[51];
	char apellido[51];
	float salario;
	int sector;
	int hayEspacio;
}sEmpleado;


sEmpleado PedirDato();
int PrintArrayEmpleados(sEmpleado*, int);
int HayEspacioEnArrayEmpleados(sEmpleado*, int);

#endif /* EMPLEADOS_H_ */
