/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 5 de Marzo del 2024
Programa: arreglo o vector con librerias 2
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el introducir datos a dos conjuntos
diferentes, y luego imrpimirlos
*******************************************************************************/
#include <iostream>
#include <vector>
#include "mylib.cpp"
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
while (ciclo){
cout<<"1. insertar valor" <<endl;
cout<<"2. imprimir valores" <<endl;
cout<<"3. cerrar ciclo" <<endl;
cout<< "Elige una opcion: "<<endl;
cin >> op;
switch (op){
case '1': {
char val1, selec,
cout<<"Escribe tu valor" <<endl;
cin >> val1;
cout<<"En que conjunto quieres introducirlo a(arreglo), o b(vector)" <<endl;
cin >> selec;
if (selec==a) {
cout<<"Arreglo seleccionado" <<endl;
arreglo ();
} else {
if (selec==b) {
cout<<"Vector seleccionado" <<endl;
vector ();
} else {
cout<<"Seleccion no valida" <<endl;
// fin else
}
}
break;
}//fin case 1
case '2': {
cout<<"El arreglo es" <<endl;
printarreglo ();
cout<<"El vector es" <<endl;
printvector ();
break;
}//fin case 2
case '3': {
ciclo = false
break;
}//fin case 3
default: {
cout<< "Seleccion no valida"<<endl;
}//fin default
}//fin de switch
} //fin while
return 0;
}
