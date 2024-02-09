/**************************Presentación*****************************************
Nombre:Silvano Joset Valdivia Franco
Fecha: 6 de Febrero del 2024
Programa: ciclos numericos 0, 500 y 1000
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción:El siguente programa tiene el objetivo de realizar un ciclo
repetitivo de sumatorias hasta llegar a cierto punto, y luego imrpimir los
resultados de estas sumatorias y la cantidad de ciclos realizados, los cuales
dependeran de el valor de el termino introducido
*******************************************************************************/
#include <stdio.h>
/*inicio del main*/
int main (){
/*declaracion de variables*/
int num,i;
char op;
op='S';
/*inicio del while*/
while (op=='S') {
/*solicitud y lectura de los datos*/
printf ("\ndame un numero");
scanf ("%i", &num);
/*que hacer cuando menor a 0 o mayor a 1000*/
if (num<0 & num>1000){
printf ("No se puede calcular el valor");
}
/*que hacer cuando es entre 0 y 500*/
else if (num>0 & num<500){
for (i=1;i<=100;i+=1){
printf ("\nvez numero ""%i",i);
printf("\t%i",num=num+ 5);
}
}
/*que hacer cuando es entre 500 y 1000*/
else if (num>=500 & num<1000){
for (i=1;i<=50;i+=1){
printf ("\nvez numero, ""%i",i);
printf("\t%i",num=num+ 10);
}
}
/*condicion de final del while*/
printf ("\nciclos terminados deseas volver a iniciar S/N ");
scanf ("%c", &op);
}
return 0;
}
