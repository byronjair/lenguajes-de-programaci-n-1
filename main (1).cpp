/******************************************************************************

Progrma: Suma, Resta, Multiplicacion Y Division.
Autor: Byron Jair Hernandez Eulogio.
Fecha:04/04/2026

*******************************************************************************/
#include <iostream>
/* Es la biblioteca estándar de entrada y salida*/
int main()
/* Es el punto de entrada del programa*/
{
	float numero1, numero2;
/*Declaramos dos variables de tipo float llamadas numero1 y numero2.
float es un tipo de dato para números con decimales*/
	std::cout << "Teclea el primer numero: ";
/* Imprime en pantalla el texto*/
    std::cin >> numero1;
/* Se almacena el dato en ala variable numero 1*/
    std::cout << "Teclea el segundo numero: ";
/* Imprime en pantalla el texto*/
    std::cin >> numero2;
/* Se almacena el dato en ala variable numero 2*/
         float suma = numero1 + numero2;
/*Declaramos una variable suma de tipo float y
le asigna el resultado de sumar numero1 y numero2*/
         float resta = numero1 - numero2;
/*Declaramos una variable resta de tipo float y
le asigna el resultado de restar numero2 a numero1.*/
         float multiplicacion = numero1 * numero2;
/*Declaramos una variable multiplicacion de tipo float y 
le asigna el resultado de multiplicar numero1 por numero2*/
         float division = numero1 / numero2;
/*Declara una variable division y
le asigna el resultado de dividir numero1 entre numero2*/
   std::cout << "El resultado de la suma es: " << suma <<std:: endl;
/*Imprime el texto "El resultado de la suma es: " seguido del valor almacenado en la suma.*/
    std::cout << "El resultado de la resta es: " << resta <<std:: endl;
/*Imprime el texto "El resultado de la resta es: " seguido del valor almacenado en la resta.*/
    std::cout << "El resultado de la multiplicacion es: " << multiplicacion << std:: endl;
/*Imprime el texto "El resultado de la multiplicacion es: " seguido del valor almacenado en la multiplicacion.*/
    std::cout << "El resultado de la division es: " << division << std:: endl;
/*Imprime el texto "El resultado de la division es: " seguido del valor almacenado en la division .*/
	return 0;
/*El programa finaliza sin errores*/
}