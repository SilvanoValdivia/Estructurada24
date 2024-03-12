/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 8 de marzo del 2024
Programa: matriz con librerias
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de introducir valores
dentro de una matriz y después sumarlos, restarlos, dividirlos o multiplicarlos.
*******************************************************************************/
#include <iostream>
#include " matrixlibrary.cpp"
//inicio de main
using namespace std;
int main(){
//variables
bool ciclo= true;
int mat[15][15];
char op; //opciones del menu
int val; // valores del usuario
int pos = 0;
int suma = 0;
int resta = 0;
int multi = 0;
int divi = 0;
//iniciar ciclo retorno del programa
while (ciclo){
cout<<"1. insertar valor" <<endl;
cout<<"2. Sumar valores" <<endl;
cout<<"3. Restar valores" <<endl;
cout<<"4. Multiplicar valores" <<endl;
cout<<"5. Dividir valores" <<endl;
cout<<"6. listado de valores" <<endl;
cout<<"7. Salir del programa" <<endl;
cout<<"8. Borrar datos" <<endl;
cout<<"9. Editar datos" <<endl;
cout<< "Elige una opcion: "<<endl;
cin >> op;
switch (op){
case '1': {
insertar ();
break;
}//fin case 1
case '2': {
Sumar ();
break;
}//fin case 2
case '3': {
Restar ();
break;
}//fin case 3
case '4': {
Multiplicar ();
break;
}//fin case 4
case '5': {
Dividir ();
break;
}//fin case 5
 case '6' {
 listado ();
break;
 } //fin de caso 6
 case '7': {
Salir ();
 break;
 }//fin case 7
 case '8': {
Borrar ();
break;
}//fin case 8
case '9': {
Editar ();
break;
}//fin case 9
default: {
cout<< "Seleccion no valida"<<endl;
break;
} //fin de default
} //fin de switch
} //fin de while
return 0;
}
