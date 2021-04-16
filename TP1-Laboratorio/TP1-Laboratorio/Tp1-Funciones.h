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

/**
 * @fn void Linias(void)
 * @brief Crea lineas decorativas.
 *
 */
void Linias (void);
/**
 * @fn void MostrarOperando(int, int)
 * @brief Muestra los valores de los operando A y B, si alguno vale -1111, entoces muestra (' '),
 * de caso contrario muestra el valor real ingresado.
 * @param operandoA
 * @param operandoB
 */
void MostrarOperando(int, int);
/**
 * @fn int IngresarOperando(void)
 * @brief Pide el ingreso de un numero, el cual lo de vuelva, ya sea a la variable numeroIngresado1
 * o numeroIngresado2.
 * @return operando
 */
int IngresarOperando(void);
/**
 * @fn int ComprobarIngreso(int, int)
 * @brief Compara el valor de las variables operandoA y operandoB con -1111, de ser igual,
 * entonces falta ingresar algun operando, en caso contrario se devuelve estado=1.
 * @param operandoA
 * @param operandoB
 * @return estado
 */
int ComprobarIngreso(int, int);

/**
 * @fn int SumarOperandos(int, int)
 * @brief Suma la variable operandoA mas operandoB, y devuelve el resultado en
 *la variable suma.
 * @param operandoA
 * @param operandoB
 * @return suma
 */
int SumarOperandos(int, int);
/**
 * @fn int RestarOperandos(int, int)
 * @brief Resta la variable operandoA menos operandoB, y devuelve el resultado en
 *la variable resta.
 * @param operandoA
 * @param operandoB
 * @return resta
 */
int RestarOperandos(int, int);
/**
 * @fn int MultiplicarOperandos(int, int)
 * @brief Multiplica la variable operandoA por operandoB, y devuelve el resultado
 *en la variable multiplica.
 * @param operandoA
 * @param operandoB
 * @return multiplica
 */
int MultiplicarOperandos(int, int);
/**
 * @fn float DividirOperandos(float, int)
 * @brief Divide la variable operandoA con operandoB, y devuelve el resultado en
 *la variable divide.
 * @param operandoA
 * @param operandoB
 * @return divide
 */
float DividirOperandos(float, int);
/**
 * @fn int FactorialOperandoA(int)
 * @brief Toma el valor de la variable numeroIngresado1 o numeroIngresado2 y devuleve el
 * factorial en la variable factorial, de ser posible.
 * @param operando
 * @return factorial
 */
int FactorialOperandoA(int);

/**
 * @fn void MostrarSuma(int)
 * @brief Muestra un texto con el resultado de la variable suma.
 *
 * @param suma
 */
void MostrarSuma(int);
/**
 * @fn void MostrarResta(int)
 * @brief Muestra un texto con el resultado de la variable resta
 *
 * @param resta
 */
void MostrarResta(int);
/**
 * @fn void MostrarMultiplicacion(int)
 * @brief Muestra un texto con el resultado de la variable multiplica.
 *
 * @param multiplica
 */
void MostrarMultiplicacion(int);
/**
 * @fn void MostrarDivision(float)
 * @brief Muestra un texto con el resultado de la variable divide
 *
 * @param divide
 */
void MostrarDivision(float);
/**
 * @fn void MostrarFactorialA(int)
 * @brief Muestra un texto con el resultado de la variable factorialA
 *
 * @param factorialA
 */
void MostrarFactorialA(int);
/**
 * @fn void MostrarFactorialB(int)
 * @brief Muestra un texto con el resultado de la variable factorialB
 *
 * @param factorialB
 */
void MostrarFactorialB(int);


#endif /* TP1_FUNCIONES_H_ */
