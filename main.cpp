/******************************************************************************
Autor: Byron Jair Hernandez Eulogio
Fecha 30/03/2025
Descripcion:El programa verifica si eres mayor de edad e imprime en pantalla,
lo cual si eres menor de edad el programa te dice cuantos años te faltan para tener la mayoria de edad
*******************************************************************************/
#include <iostream>
/*Biblioteca estándar de entrada y salida*/
using namespace std;
/*Permite usar directamente los elementos del espacio de nombres std*/
int main()
/*Es el punto de entrada del programa.*/
{
    int edad;
/*Declara una variable entera llamada edad para almacenar la edad que 
el usuario ingresará.*/
    do {
/*Inicia un ciclo do-while, que ejecuta el bloque de código al menos una vez
y luego repite mientras la condición sea verdadera.*/
        cout << "Teclea tu edad (entre 0 y 116 años): ";
/*Imprime en pantalla el mensaje para que el usuario ingrese su edad.*/
        cin >> edad;
/*Lee el valor ingresado por el usuario y lo almacena en la variable edad.*/
        if (edad < 0 || edad > 116) {
/*Verifica si la edad ingresada es menor que 0 o mayor que 116,
condiciones que se consideran inválidas*/
            cout << "Error: La edad debe estar entre 0 y 116 años. Intenta de nuevo." << endl;
        }
/*Si la edad es inválida, muestra un mensaje.*/
    } 
/*Fin del if.*/
    while (edad < 0 || edad > 116);
/*El ciclo do-while se repite mientras la edad sea inválida (menor que 0 o mayor que 116). 
    Esto obliga al usuario a ingresar una edad válida para continuar.*/

    if (edad >= 18) {
/*Después de salir del ciclo, verifica si la edad es mayor o igual a 18, que es la mayoría de edad.*/
        cout << "Eres mayor de edad." << endl;
/*Si la condición es verdadera, imprime que la persona es mayor de edad. */
    }
    else {
/*Si la edad es menor que 18, ejecuta el bloque else. */
        cout << "Eres menor de edad." << endl;
/*Imprime que la persona es menor de edad. */
        cout << "Te faltan " << (18 - edad) << " años para ser mayor de edad." << endl;
/*Calcula cuántos años faltan para llegar a los 18 y muestra ese mensaje. */    
    }
/*Fin del bloque else. */
    return 0;
}
/*Finaliza la función main y devuelve 0, indicando que el programa terminó correctamente. */