/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 22 de febrero del 2024
Programa: matriz
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de introducir valores
dentro de una matriz y después sumarlos entre si.
*******************************************************************************/
#include <iostream>
//inicio de main
using namespace std;
int main(){
//variables
bool ciclo= true;
int mat[10][10];
char op; //opciones del menu
int val; // valores del usuario
int pos = 0;
int suma = 0;
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
cout<<"introduce un valor: "<<endl;
cin >> val; //pedir valor al usuario
for(i=0;i<20;i++){
     for(j=0;j<20;j++){
cin>>matriz [i][j]; //ingresar el valor en la posicion
} //fin for
} //fin for
break;
}//fin case 1
case '2': {
for (int i=0; 1; 1<pos; i++){
suma = suma + mat [i];
} //fin for
cout >> "el total del arreglo es de:" << suma << endl;
}//fin case 2
 case '3' {
 for (int i=0; 1; 1<pos; i++){
cout<< "{" mat[i]<< "}, " endl;
} //fin for
 } //fn de caso 3
 case '4': {
 ciclo = false
 }//fin case 4
 case '5': {
cout<<"Borra un valor: "endl;
cin >> val; //pedir valor al usuario
mat [pos]=val-val; //ingresar el valor en la posicion
pos++ //incremento de la posicion
break;
}//fin case 5
case '6': {
cout<<"introduce un valor: "<<endl;
cin >> val; //pedir valor al usuario
for(i=0;i<20;i++){
     for(j=0;j<20;j++){
cin>>matriz [i][j]; //ingresar el valor en la posicion
} //fin for
} //fin for
break;
}//fin case 6
default: {
cout<< "Seleccion no valida"<<endl;
} //fin de default
} //fin de switch
}
return 0;
}

