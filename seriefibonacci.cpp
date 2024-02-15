/**************************Presentación*****************************************
Nombre:Silvano Joset Valdivia Franco
Fecha: 9 de Febrero del 2024
Programa: serie de fibonacci
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripción:El siguente programa tiene el objetivo de realizar la serie de
fibonacci con los tres tipos de ciclo diferentes.
*******************************************************************************/
#include <stdio.h>
/*inicio del main*/
int main (){
/*declaracion de variables*/
char op;
int num, i=3, selec, fibo[40];
op='S';
fibo[1]=1;
fibo[2]=1;
while (op=='S') {
printf ("\n¿hasta que numero quieres procesar?");
scanf ("%i", &num);
printf ("que ciclo queres utilizar 1.while, 2.do-while, 3.for");
scanf ("%i", &selec);
switch (selec){
case 1:
while (true){
fibo[i]=fibo[i-1]+fibo[i-2];
if (fibo[i]<=num)printf ("%i\t",fibo[i]);
else break;
i++;
}
break;
case 2:
do {
fibo[i]=fibo[i-1]+fibo[i-2];
if (fibo[i]<=num)printf ("%i\t",fibo[i]);
else break;
i++;
}
while (true);
break;
case 3:
if (num>=1){;
printf("0\t1\t");
for(;;i++){
fibo[i]=fibo[i-1]+fibo[i-2];
if (fibo[i]<=num)printf ("%i\t",fibo[i]);
else break;
}
break;
}
default:
printf ("seleccion no valida");
break;
}
printf ("\n ciclo terminado deseas volver a iniciar S/N");
scanf ("%c", &op);
}
while (op='S');
return 0;
}
