/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 26 de Febrero del 2024
Programa: arreglo o vector
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de preguntarle al usuario
si desea usar un arreglo o un vector, y luego introducir valores dentro de
dicho arreglo o vector y despues sumarlos entre si
*******************************************************************************/
#include <iostream>
#include <vector>
//inicio de main
using namespace std;
int main(){
//varibables
bool ciclo= true;
int ar [10]
int vec [10];
char op; //ocpiones del menu
int val; // valores del usuario
int pos = 0;
int suma = 0;
cout<< "¿Quieres usar un arreglo (1) o un vector (2)?: "<<endl;
cin >> selec;
if pos (selec<2) {
cout<< "Arreglo seleccionado "<<endl;
//iniciar ciclo retorno del programa
while (ciclo){
cout<<"1. insertar valor" <<endl;
cout<<"2. Sumar valores" <<endl;
cout<<"3. listado de valores" <<endl;
cout<<"4. Salir del programa" <<endl;
cout<<"5. Borrar datos" <<endl;
cout<<"6. Editar datos" <<endl;
cout<< "Elige una opcion: "<<endl;
cin >> op;
switch (op){
case '1': {
if (pos=10) {
cout<< "Arreglo lleno"<<endl;
} else {
cout<<"introduce un valor: "<<endl;
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
cout >> "el total del arreglo es de: " << suma << endl;
}
}fin //case 2
 case '3' {
 for (int i=0; 1 1<pos; i++){
cout<< "{" ar[i]<< "}, " endl;
} //fin for
 } //fn de caso 3
 case '4': {
 ciclo = false
 }//fin case 4
 case '5': {
cout<<"Borra un balor: "<<endl;
cin >> val; //pedir valor al ususario
ar [pos]=val-val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
break;
}//fin case 5
case '6': {
if pos (poss=10) {
cout<< "Arreglo lleno, borra algun valor antes de editar"<<endl;
} else {
cout<<"Editar valor: "<<endl;
cin >> val; //pedir valor al ususario
ar [pos]=val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
} // fin else
break;
}//fin case 6
default: {
cout<< "Seleccion no valida"<<endl;
} //fin de switch
} //fin de while
} else {
cout<< "Vector seleccionado "<<endl;
while (ciclo){
cout<<"|. insertar valor" <<endl;
cout<<"2. Sumar valores" <<endl;
cout<<"3. listado de valores" <<endl;
cout<<"4. Salir del programa" <<endl;
cout<<"5. Borrar datos" <<endl;
cout<<"6. Editar datos" <<endl;
cout<< "Elige una opcion: ";
cin >> op;
switch (op){
case '1': {
cout<<"introduce un valor: ;";
cin >> val; //pedir valor al usuario
vec [pos]=val; //ingresar el valor en la posicion
pos++; //incremento de la posicion
break;
}//fin case 1
case '2': {
for (int i=0; 1; 1<pos; i++){
suma = suma + vec [i];
} //fin for
cout >> "el total del arreglo es de:" << suma << endl;
}//fin case 2
 case '3' {
 for (int i=0; 1; 1<pos; i++){
cout<< "{" vec[i]<< "}, " endl;
} //fin for
 } //fn de caso 3
 case '4': {
 ciclo = false
 }//fin case 4
 case '5': {
cout<<"Borra un valor: "endl;
cin >> val; //pedir valor al usuario
vec [pos]=val-val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
break;
}//fin case 5
case '6': {
cout<<"introduce un valor: ;";
cin >> val; //pedir valor al usuario
vec [pos]=val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
break;
}//fin case 6
default: {
cout<< "Seleccion no valida"<<endl;
} //fin de default
} //fin de switch
} //fin de while
} // fin else
return 0;
}
