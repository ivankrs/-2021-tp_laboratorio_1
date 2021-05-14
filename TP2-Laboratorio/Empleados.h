/*
 * Empleados.h
 *
 *  Created on: 12 may. 2021
 *      Author: ivank
 */

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

#include "tp2-Funciones.h"
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


/**
 * @fn int HayEspacioEnArrayEmpleados(sEmpleado*, int)
 * @brief recorre la estructura sEmpleado y cambia la bandera hayEspacio a VACIO
 *
 * @param sEmpleado* pArray
 * @param int  cantidad
 * @return 0
 */
int HayEspacioEnArrayEmpleados(sEmpleado*, int);
/**
 * @fn sEmpleado PedirDato()
 * @brief permite ingresar datos del empleado al array de estructura sEmpleado. Y cambia la bandera hayEspacio a OCUPADO.
 *
 * @return sEmpleado empleadoIngresado.
 */
sEmpleado PedirDato();

int CargarEmpleado(sEmpleado*, int);
sEmpleado ModificarEmpleado(sEmpleado*);
int ModificacionEmpleados(sEmpleado*, int);
int EliminarEmpleado(sEmpleado*, int);
int BuscarEspacio(sEmpleado*, int );
/**
 * @fn void PrintArrayEmpleados(sEmpleado*, int)
 * @brief recorre el array imprimiendo las pociciones donde la bandera hayEspacio a OCUPADO.
 *
 * @param sEmpleado pArray
 * @param int cantidad
 */
void PrintUnEmpleado(sEmpleado);
int PrintArrayEmpleados(sEmpleado*, int);
void OrdanarEmpleados(sEmpleado*, int);
int BuscarPorId(sEmpleado*, int, int);
int BuscarPorOcupado(sEmpleado*, int);


#endif /* EMPLEADOS_H_ */
