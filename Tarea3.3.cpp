/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Ciclos
    -Contador
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main() {
	int numero=0, suma=0, i;	
	printf("Introduce los primeros numeros enteros : ", i);
		scanf("%d", &i);
	while(numero<i) {
		suma=suma+numero;
		numero++;
	}
	printf("La suma es %d", suma);
	return 0;	
}
