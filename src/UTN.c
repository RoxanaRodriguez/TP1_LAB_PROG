/*
 * UTN.c
 *
 *  Created on: 15 abr. 2021
 *      Author: R
 */


#include <stdio.h>
#include <stdlib.h>

/* \brief getNumero: Solicita al usuario un n�mero.
 * \param pResult: es la direccn de memoria (variable) donde guardar  el n�mero ingresado.
 * \param message: Texto informativo al momento de solicitar un valor al usuario.
 * \param errorMessage: Texto que se mostrar en caso de un rango de n�mers invalido.
 * \param max: Valor m�ximo v�lido (no inclusive).
 * \param min: Valor m�nimo v�lido (inclusive).
 * \param attemps: Es la cantidad de veces que ser  posible hacer esta operacin para el usuario.
 * \return : 0 si la operacin fue exitosa, -1 si se produjo un error.
 */

int getNumber(int* pResult, char* message, char* errorMessage, int attemps) {

	int _exit = -1;
	int bufferInt;
	int scanfResult;

	if (pResult != NULL &&
		message != NULL &&
		errorMessage != NULL &&
		attemps >= 0) {

		do {
			printf("%s", message);
			fflush(stdin);
			scanfResult = scanf("%d", &bufferInt);
			if (scanfResult == 1) {
				*pResult = bufferInt;
				_exit = 0;
				break;
			} else {
				attemps--;
				printf("%s Te quedan %d intentos \n", errorMessage, attemps);
				fflush(stdin);
			}
		} while (attemps > 0);
	}
	return _exit;
}

/* brief add: Toma dos numeros por parametro y calcula una suma de ellos.
 * param pResult: direccin de memoria (variable) donde se guardar  el resultado de la sumatoria de ambos numeros.
 * param firstNumber: primer numero ingresado.
 * param secondNumber: segundo numero ingresad por el usuario.
 * return : 0 si la operacin fue exitosa, -1 si se produjo un error.
 * */

int add(int* pResult, int firstNumber, int secondNumber) {
	int _exit = -1;
	if (pResult != NULL) {

		*pResult = (firstNumber + secondNumber);
		_exit = 0;
	}
	return _exit;
}

/* brief subtract: Toma dos numeros por parametro y calcula una resta de ellos.
 * param pResult: direccin de memoria (variable) donde se guardar el resultado de la resta de ambos numeros.
 * param firstNumber: primer numero ingresado.
 * param secondNumber: segundo numero ingresad por el usuario.
 * return : 0 si la operacin fue exitosa, -1 si se produjo un error.
 * */

int subtract(int *pResult, int firstNumber, int secondNumber) {
	int _exit = -1;
	if (pResult != NULL) {
		*pResult = (firstNumber - secondNumber);
		_exit = 0;
	}
	return _exit;
}

/* brief multiply: Toma dos numeros por parametro y calcula una multiplicacin de ellos.
 * param pResult: direccin de memoria (variable) donde se guardar el resultado de la multiplicacin de ambos numeros.
 * param firstNumber: primer numero ingresado.
 * param secondNumber: segundo numero ingresad por el usuario.
 * return : 0 si la operacin fue exitosa, -1 si se produjo un error.
 * */

int multiply(int *pResult, int firstNumber, int secondNumber) {
	int _exit = -1;
	if (pResult != NULL) {
		*pResult = (firstNumber * secondNumber);
		_exit = 0;
	}
	return _exit;
}

/* \ brief factorial: realizar el factorial de un n�mero pedido al usuario
 * \ param pResult: es un puntero al espacio de memoria donde est� el valor obtenido del usuario
 * \ param operator: operador por el cual se debe obtener el factoreal.
 * \ retorna (0) si est� ok / retorna (-1) si mal
 */

int factorial(int *pResult, int operator) {

	int resultOperation = 1;
	int repetitionsQuantity;
	int _exit = -1;

	if (pResult != NULL && operator > -1) {
		if (operator != 0) {
			for (repetitionsQuantity = operator; repetitionsQuantity > 1; repetitionsQuantity--) {
				resultOperation = resultOperation * repetitionsQuantity;
			}
			_exit = 0;
		} else {
			resultOperation = 1;
			_exit = 0;
		}
	}

	*pResult = resultOperation;
	return _exit;
}

/* \ brief division: dados un divisor y un dividendo, se realiza la operacin de divisin de los mismos.
 * \ param pResult: es un puntero al espacio de memoria donde este el valor obtenido del usuario.
 * \ param divisor: es el nmero a dividir.
 * \ param dividend: es la base por la cual se dividir al divisor.
 * return : 0 si la operacin fue exitosa, -1 si se produjo un error.
 */

int division(int* pResult, int divisor, int dividend) {
	int _exit = -1;
	if(pResult != NULL)	{
		if (dividend != 0) {
		*pResult = (float) divisor / dividend;
		_exit = 0;
		} else {
			printf("No se puede dividir por 0");
		}
	}
	return _exit;
}
