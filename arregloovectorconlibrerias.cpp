/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 1 de Marzo del 2024
Programa: arreglo o vector con librerias
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de preguntarle al usuario
si desea usar un arreglo o un vector, y luego introducir valores dentro de
dicho arreglo o vector y despues sumarlos entre si y hacer todo esto utilizando
librerias de funciones creadas personalmente
*******************************************************************************/
#include <iostream>
#include <vector>
#include "milibreria.cpp"
//inicio de main
using namespace std;
int main(){
//varibables
bool ciclo= true;
int ar [10]
int vec [10];
char op; //opciones del menu
int val; // valores del usuario
int pos = 0;
int suma = 0;
hello ();
cout<< "¿Quieres usar un arreglo (1) o un vector (2)?: "<<endl;
cin >> selec;
if pos (selec<2) {
cout<< "Arreglo seleccionado "<<endl;
arreglo ();
} else {
cout<< "Vector seleccionado "<<endl;
vector ();
} // fin else
return 0;
}




