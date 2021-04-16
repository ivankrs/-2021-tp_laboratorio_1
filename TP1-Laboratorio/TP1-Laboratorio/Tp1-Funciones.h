/*
 * Tp1-Funciones.h
 *
 *  Created on: 14 abr. 2021
 *      Author: Ivan Keumurdji
 */

#ifndef TP1_FUNCIONES_H_
#define TP1_FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>


void Linias (void);

void MostrarOperando(int, int);
int IngresarOperando(void);
int ComprobarIngreso(int, int);


int SumarOperandos(int, int);
int RestarOperandos(int, int);
int MultiplicarOperandos(int, int);
float DividirOperandos(float, int);
int FactorialOperandoA(int);


void MostrarSuma(int);
void MostrarResta(int);
void MostrarMultiplicacion(int);
void MostrarDivision(float);
void MostrarFactorialA(int);
void MostrarFactorialB(int);


#endif /* TP1_FUNCIONES_H_ */
