/*
 ============================================================================
 Name        : TP1_Lab-Prog.c
 Author      : Roxana Rodríguez Betbeze
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>
#include <limits.h>
#include "utn.h"

#define ATTEMPS 3

int main(void) {
	setbuf(stdout, NULL);
	int resultOperation;
	int firstNumber;
	int secondNumber;
	int selectedOption;

	printf("Bienvenidxs a la calculadora\n");

	if(getNumber(&firstNumber, "Por favor, ingrese el primer numero \n", "Sólo valores numéricos.", ATTEMPS) == 0) {

		if (getNumber(&secondNumber, "Por favor, ingrese el segundo número\n", "Sólo valores numéricos.", ATTEMPS) == 0) {

			if (getNumber(&selectedOption, "Que operacion desea realizar ?\n 1-Sumar \n 2-Restar \n 3-Dividir \n 4-Multiplicar \n 5-Factorial \n 6-Salir \n", "Por favor, elija una opción válida.", ATTEMPS) == 0) {

				switch(selectedOption){
					case 1:
						if(add(&resultOperation,firstNumber, secondNumber) == 0) {
							printf("\nEl resultado de %d + %d es: %d.", firstNumber, secondNumber, resultOperation);
							}
						break;
					case 2:
						if(subtract(&resultOperation,firstNumber, secondNumber) == 0){
							printf("\nEl resultado de %d - %d es: %d.", firstNumber, secondNumber, resultOperation);
						}
						break;
					case 3:
						if(division(&resultOperation,firstNumber, secondNumber) == 0){
							printf("\nEl resultado de %d / %d es: %d.", firstNumber, secondNumber, resultOperation);
						}

						break;
					case 4:
						if(multiply(&resultOperation,firstNumber, secondNumber) == 0){
							printf("\nEl resultado de %d * %d es: %d.", firstNumber, secondNumber, resultOperation);
						}
						break;
					case 5:
						if(factorial(&resultOperation, firstNumber) == 0){
						printf("\nEl resultado del factoreal de %d es: %d.", firstNumber, resultOperation);
							}
						if(factorial(&resultOperation, secondNumber) == 0){
						printf("\nEl resultado del factoreal de %d es: %d.", secondNumber, resultOperation);
							}
						break;
					case 6:
						printf("Programa finalizado.");
						return EXIT_SUCCESS;
				}
			} else {
				printf("Elija una opción correcta.");
			}
		} else {
			printf("Agotó los intentos para ingresar el segundo número");
		}
	} else {
		printf("\nHa agotado el número de intentos para el primer número. Reinicie la aplicación.");
	}
	return EXIT_SUCCESS;
}
