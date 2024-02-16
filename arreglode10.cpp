/**************************Presentación*****************************************
Nombre:Silvano Joset Valdivia Franco
Fecha: 13 de Febrero del 2024
Programa: arreglo de 10
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción:El siguente programa tiene el objetivo de introducir 10 valores
dentro de un arreglo y despues sumarlos entre si
*******************************************************************************/
#include <iostream>
//inicio de main
using namespace std;
int main(){
//varbables
bool ciclo= true;
int ar [10]
char op; //ocpiones del menu
int val; // valores del usuario
int pos = 0;
int suma = 0;
//iniciar ciclo retorno del programa
while (ciclo){
cput<<"|. insertar valor" <<endl;
cput<<"2. Sumar valores" <<endl;
cput<<"3. listado de valores" <<endl;
cput<<"4. Salir del programa" <<endl;
cput<<"5. Borrar datos" <<endl;
cput<<"6. Editar datos" <<endl;
cout<< "Elige una opcion: ";
cin >> op;
switch (op){
case '1': {
if pos (poss=10) {
cout<< "Arreglo lleno"<<endl;
} esle {
cout<<"introduce un valor: ;";
cin >> val; //pedir valor al ususario
ar [pos]=val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
} // fin else
break;
}//fin case 1
case '2': {
for (int i=0; 1 1<pos; i++){
suma = suma+ ar [i];
} //fin for
cout >> "el total del arreglo es de:" << suma << endl;
}
}fin //case 2
 case '3' {
 for (int i=0; 1 1<pos; i++){
cout<< "{" ar[i]<< "}, " endl;
} //fin for
 } //fn de caso 3
 case '4': {
 ciclo = false
 case '5': {
cout<<"Borra un balor: ;";
cin >> val; //pedir valor al ususario
ar [pos]=val-val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
break;
}//fin case 5
case '6': {
if pos (poss=10) {
cout<< "Arreglo lleno, borra algun valor antes de editar"<<endl;
} esle {
cout<<"Editar valor: ;";
cin >> val; //pedir valor al ususario
ar [pos]=val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
} // fin else
break;
}//fin case 6
 } // fin caso 4
} //fin de switch
}
}
