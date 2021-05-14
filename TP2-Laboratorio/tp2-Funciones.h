/*
 * tp2-Funciones.h
 *
 *  Created on: 11 may. 2021
 *      Author: ivank
 */

#ifndef TP2_FUNCIONES_H_
#define TP2_FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @fn void Funcion_Menu(void)
 * @brief Imprime un menu.
 *
 */
void Funcion_Menu(void);
/**
 * @fn int get_Nuemero(int*, char*, char*, int, int, int)
 * @brief pide el ingreso de un entero, un mensaje para pedir el entero, un mensaje de error, y una cantidad de reintentos.
 * 		  Se compara el numero entero con las opciones posibles. De no corresponder a una de las opciones, se pide que reingrese, hasta la cantidad maxima de
 * 		  reintentos, caso contrario, que el entero sea parte de las opciones, devuelve el entero.
 * @param int* pRespuesta
 * @param char* mensaje
 * @param char* mensajeError
 * @param int reintentos
 */
int get_Nuemero(int*,char*,char*,int);
#endif /* TP2_FUNCIONES_H_ */
