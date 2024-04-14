/**************************Presentación*******************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 15 de Abril del 2024
Programa: Analizador de texto
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de analisar un texto,
mostrando si es o no un palidromo, y tambien dando la cantidad de vocales y
consonantes que se encuentran en el. Ademas lo reimprime a modo de mayusculas.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
string pal[num]; //declara la variable pal
char op; //delara la variable op
while op=true { // hace que el programa se repita
cout<<"dime una palabra u oracion"<<endl;
cin>>pal[num]; // lee la varable pal
pal=toupper //cambia pal a mayusculas
cout<<pal[num]; // imprime pal a modo de mayusculas
if -pal[num]=pal[num] { //detecta los palindromos
cout<<"es un palindromo"<<endl;
}else{
cout<<"no es un palindromo"<<endl;
}//fin else
cout<<"la cantidad de letras en la palabra u oracion es de"<<[num]<<endl; //imprime la cantidad de letras totales en la palabra u oracion
cout<<"de estas la cantidad de letras vocales en la palabra u oracion es de"<<[num,voc]<<endl;//imprime la cantidad de letras vocales en la palabra u oracion
cout<<"de estas la cantidad de letras consonantes en lapalabra u oracion es de"<<[num,con]<<endl;//imprime la cantidad de letras consonantes en la palabra u oracion
cout<<"de estas la cantidad de espacios en la palabra u oracion es de"<<[num,esp]<<endl;//imprime la cantidad de espacios totales en la palabra u oracion
cout<<"quieres detener el programa"<<endl; //solicita saber si se desea repetir o no el programa
cin>>op; //lee la respuesta de usuario
if op="si" { //indica que hacer dependiendo de la respuesta anterior
op=true
}else{
op=false
}//fin else
}//fin while
return 0;
}
