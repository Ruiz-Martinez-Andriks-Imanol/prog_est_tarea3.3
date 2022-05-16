/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Ciclos
    -Contador
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaración
	int numero=0, suma=0, i;
	//Proceso
	printf("Introduce los primeros numeros enteros : ", i);
		scanf("%d", &i);
	while(numero<i) { //Ciclo
		suma=suma+numero;
		numero++;
	}
	//Salida
	printf("La suma es %d", suma);
	return 0;	
}
