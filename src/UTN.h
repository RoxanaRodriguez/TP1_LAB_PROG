/*
 * UTN.h
 *
 *  Created on: 15 abr. 2021
 *      Author: R
 */


#ifndef SRC_LIB_H_
#define SRC_LIB_H_

int getNumber(int *pResult, char *message, char *errorMessage, int attemps);
int add(int* pResult, int firstNumber, int secondNumber);
int subtract(int* pResult, int firstNumber, int secondNumber);
int multiply(int* pResult, int firstNumber, int secondNumber);
int division(int* pResult, int divisor, int dividend);
int factorial(int *pResult, int operator);
#endif /* SRC_LIB_H_ */
