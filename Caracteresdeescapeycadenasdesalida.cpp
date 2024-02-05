/**************************Presentación*****************************************
Nombre:Silvano Joset Valdivia Franco
Fecha: 2 de Febrero del 2024
Programa: Caracteres de escape y cadenas de salida
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción:El siguente programa tiene el objetivo de imprimir una serie de
datos que correspondan a 6 tipos de cadenas de control tipo salida, ademas
de hacerlo utilizando 6 tipos diferentes de caracteres de escape
*******************************************************************************/
# include <iostream>
# include <stdio.h>
using namespace std;
int main (){
int edad; /*declara los integrales*/
float promedio, pi, numero; /*declara los flotantes*/
char nombre[10]="Silvano", letra; /*declara los caracteres*/
edad= 100; /*especifica el valor de edad*/
promedio= 9.99999; /*especifica el valor de promedio*/
pi=3.1416; /*especifica el valor de pi*/
numero=10000000; /*especifica el valor de numero*/
printf ("%i",edad); /*imprime edad*/
printf ("\n\t%f",promedio); /*imprime promedio y le aplica tabulacion*/
printf ("\n\v%s",nombre); /*imprime promedio y le aplica tabulacion vertical*/
scanf ("\n%c", &letra); /*lee el valor de letra*/
printf ("\n\"%c\"",letra); /*imprime letra entre comillas*/
printf ("\n%g\?",pi); /*imprime pi seguido de interrogacion*/
printf ("\n\\%e\\",numero); /*imprime numero entre diagonales inversas*/
    return 0;
}
