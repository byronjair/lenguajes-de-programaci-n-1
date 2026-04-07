/******************************************************************************
Autor:Byron Jair Hernandez Eulogio
Programa: Calcular el Rfc sin homovlabe
Fecha: 05/04/2026
*******************************************************************************/
#include <iostream>
/*libreria para entrada y salida de datos*/
#include <vector>
/* lbireria para usar el contenedor dinámico std::vector.*/
#include <string>
/*libreria para manejar cadenas de texto con std::string*/
const std::vector<std::string> palabrasProhibidas ={
    "PENE","VAGO","LOCO","CULO","MAME","CACA","COJE","PUTO","JOTO","CHINGAR","PENDEJO","CABRON",
    "PINCHE","VERGA"
/*Se declara un vector constante llamado palabrasProhibidas que
contiene palabras que no deben aparecer en el RFC porque son ofensivas o inapropiadas*/
    //dicionario de palabras no permitidas
};
//Verifica y modificar palabras prohibidas de diccionario
std::string corregirRFC(const std::string& rfc){
/*se verifica si coincide con alguna palabra prohibida.*/
    for (const std::string& palabra :palabrasProhibidas){
/*se usa un ciclo for para recorrer cada palabra prohibida.*/
        if(rfc==palabra)
        {
            return rfc.substr(0,3)+ "X";//remplaza la ultima letra por una 'x'
        }
    }
    return rfc;
/*se usa la "X" para reemplazar la última letra
Si no coincide con ninguna palabra prohibida, devuelve el RFC sin cambios.*/   
}

// funcion para opbtener la primera vocal de una cadena
    char obtenerPrimeraVocalInterna(const std::string& str ){
        for (size_t i = 1; i < str.length(); ++i){
            char c = str[i];
            if(c== 'A'||c== 'E'||c== 'I'||c== 'O'||c== 'U' )
             return c; 
        }
        return 'x'; 
        // Si no se necuentra ninguna vocal interna, se usa una x
    }
    // funcion principal para calcular el rfc
    std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {
      // se declara la variable donde guardaremos el rfc  
      std::string rfc;
      // se obtiene la letra inicial y la primer vocal interna del apellidoPaterno
      char letraaInicial =apellidoPaterno[0];
      char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
     // se obtiene la inicial del apellido materno o se usa una letra 'x' si no tiene 
     char inicialApellidoMaterno =(!apellidoMaterno.empty()) ? apellidoMaterno [0] :'X';
     // se obtinen la inoicial del primer nombre o se una una 'x' si no hay 
     char inicialNombre = nombre [0];
     // se obtiene lo dos ultimos digitos de fechaNacimiento
     std::string anio = fechaNacimiento.substr(2,2);
     // se ontiene el mes y el dia de FechaNacimiento
     std::string mes = fechaNacimiento.substr(5,2);
      std::string dia = fechaNacimiento.substr(8,2);
      // se contruye el rfc sumando el textode la informcion proporcionada
      rfc= letraaInicial;
      rfc+=primeraVocalInterna;
      rfc+=inicialApellidoMaterno;
      rfc+=inicialNombre;
      //aqui se ejecuta la comparacion de palabrabra  que podria ser noconvnierntes y se realiza el cambio por la letra X
      rfc= corregirRFC(rfc);
       // realizada la correcion se continua creando el rfc
       rfc +=anio;
       rfc += mes;
       rfc += dia;
       return rfc;
    }
    int main(){
//despliega en consala los pasos a seguir y se espera que los datos se introdusca en mayuscula
   std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
   std::cout<< "introduce tu nombre:  " ;
   std ::getline(std::cin,nombre);
   std::cout<< "introduce tu apellido Paterno:  " ;
   std ::getline(std::cin, apellidoPaterno);
   std::cout<< "introduce tu apellido Materno:  " ;
   std ::getline(std::cin,apellidoMaterno);
   std::cout<< "introduce tu Fecha Nacimiento en el formato (YYYY/MM/DD)  :  " ;
   std ::getline(std::cin,fechaNacimiento);
   std:: string rfc =calcularRFC(nombre, apellidoPaterno,apellidoMaterno, fechaNacimiento);
   std :: cout << "RFC: " <<rfc<< std::endl;
   return 0;
    }