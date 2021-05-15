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
/**
 * @fn int CargarEmpleado(sEmpleado*, int)
 * @brief Da llamado a la funcion BuscarEspacio, de la cual recibe el indice donde guardar el empleado. Luego llama a al
 * funcion PedirDato, con la cual recibe los datos del empleado. Informa de haber o no espacio.
 *
 * @param sEmpleado*
 * @param int
 * @return int
 */
int CargarEmpleado(sEmpleado*, int);
/**
 * @fn sEmpleado ModificarEmpleado(sEmpleado*)
 * @brief  permite ingresar los dato a cambiar del empleado.
 *
 * @param sEmpleado
 * @return sEmpleado
 */
sEmpleado ModificarEmpleado(sEmpleado*);
/**
 * @fn int ModificacionEmpleados(sEmpleado*, int)
 * @brief llama a la función ModificarEmpleado, por la que recibe los datos del empleado y guardar.
 *
 * @param sEmpleado
 * @param int
 * @return int
 */
int ModificacionEmpleados(sEmpleado*, int);
/**
 * @fn int EliminarEmpleado(sEmpleado*, int)
 * @brief cambia el estado hayEspacio de OCUPADO a VACÍO.
 *
 * @param sEmpleado
 * @param int
 * @return int
 */
int EliminarEmpleado(sEmpleado*, int);
/**
 * @fn int BuscarEspacio(sEmpleado*, int)
 * @brief recorre el array comparando la bandera hayEspacio con VACÍO y de ser igual devuelve el indice en donde lo encontró.
 *
 * @param sEmpleado
 * @param int
 * @return int
 */
int BuscarEspacio(sEmpleado*, int );
/**
 * @fn void PrintArrayEmpleados(sEmpleado*, int)
 * @brief recorre el array comparando la bandera hayEspacio, y de ser igual a OCUPADO, imprime en esos indices llamando a la función PrintUnEmpleado.
 *
 * @param sEmpleado pArray
 * @param int cantidad
 */
int PrintArrayEmpleados(sEmpleado*, int);
/**
 * @fn void PrintUnEmpleado(sEmpleado)
 * @brief permite imprimir un empleado.
 *
 * @param sEmpleado
 */
void PrintUnEmpleado(sEmpleado);
/**
 * @fn void OrdanarEmpleados(sEmpleado*, int)
 * @brief permite ordenar el array y luego llama a la función PrintArrayEmpleados para mostrar.
 *
 * @param sEmpleado
 * @param int
 */
void OrdanarEmpleados(sEmpleado*, int);
/**
 * @fn int BuscarPorId(sEmpleado*, int, int)
 * @brief recorre el array comparando el id ingresado y de ser igual a otro pre-existen, compara la bandera hayEspacio si esta en OCUPADO, devuelve el indice.
 *
 * @param sEmpleado
 * @param int
 * @param int
 * @return int
 */
int BuscarPorId(sEmpleado*, int, int);
/**
 * @fn int BuscarPorOcupado(sEmpleado*, int)
 * @brief recorre el array comparando la bandera hayEspacio, de coincidir con OCUPADO, devuelve 1.
 *
 * @param sEmpleado
 * @param int
 * @return int
 */
int BuscarPorOcupado(sEmpleado*, int);


#endif /* EMPLEADOS_H_ */
