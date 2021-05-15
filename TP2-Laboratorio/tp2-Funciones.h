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
void Funcion_Menu(char*, char*,char*,char*,char*,char*);
/**
 * @fn int ObtenerNumeroInt(int*, char*, char*, int, int, int)
 * @brief permite pedir un numero entero, al mismo tiempo marcar limites maximos y minimos, y una cantidad de reintentos.
 *
 * @param int
 * @param char
 * @param char
 * @param int
 * @param int
 * @param int
 * @return int
 */
int ObtenerNumeroInt(int*,char*,char*,int,int,int);
/**
 * @fn int ObtenerNumeroFloat(float*, char*, char*, float, float, int)
 * @brief permite pedir un numero flotante, al mismo tiempo marcar limites maximos y minimos, y una cantidad de reintentos.
 *
 * @param float
 * @param char
 * @param char
 * @param int
 * @param int
 * @param int
 * @return int
 */
int ObtenerNumeroFloat(float*,char*,char*,float,float,int);
/**
 * @fn int ComparaEstado(int, char*, char*)
 * @brief compara las banderas recibidas, siendo 1 o -1.
 *
 * @param int
 * @param char
 * @param char
 * @return int
 */
int ComparaEstado(int, char*, char*);
#endif /* TP2_FUNCIONES_H_ */
