/******************************************************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 18 de Abril del 2024
Programa: juego del ahorcado
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de presentar el juego del
ahorcado
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
// declaracion de variables
int random;
char repetir;
string adivina;
cout<<"Banco de palabras"<<endl; //banco de palabras completo
cout<<"1.-Tripa"<<endl;
cout<<"2.-Limar"<<endl;
cout<<"3.-Chicle"<<endl;
cout<<"4.-Perseguir"<<endl;
cout<<"5.-Tribu"<<endl;
cout<<"6.-Quedarse"<<endl;
cout<<"7.-Hija"<<endl;
cout<<"8.-Agacharse"<<endl;
cout<<"9.-Red"<<endl;
cout<<"10.-Maleta"<<endl;
cout<<"11.-Ocupado"<<endl;
cout<<"12.-Segundo"<<endl;
cout<<"13.-Congelar"<<endl;
cout<<"14.-Seda"<<endl;
cout<<"15.-Reclinar"<<endl;
cout<<"16.-internacional"<<endl;
cout<<"17.-Controlar"<<endl;
cout<<"18.-Actriz"<<endl;
cout<<"19.-Grabar"<<endl;
cout<<"20.-Biombo"<<endl;
random = 1-20; //elige una de las 20 palabras aleatoriamente
while (repetir=true){
cout<<"que palabra crees que elegí?"<<endl;
cin>>adivina>>endl;
if (adivina=random){
cout<<"Felicidades, lo adivinaste (・▽・)!!!!"<<endl;
repetir=false;
}//fin if
else {
if((adivina=='a')or (adivina=='e')or (adivina=='i')or (adivina=='o')or (adivina=='u')){
    cout<<"Seleccionaste una volcal";
    for(int i=1;i<=6;i+=1)
    cout<<"Este es tu intento numero "<< i<<endl;
    for(int i=5;i>=0;i-=1)
    cout<<"te quedan "<< i <<" intentos"<<endl;
}//fin segundo if
else{
    for(int i=1;i<=6;i+=1)
    cout<<"Estas mal este es tu intento numero "<< i<<endl;
    for(int i=5;i>=0;i-=1)
    cout<<"te quedan "<< i <<" intentos"<<endl;
    cout<<"intentalo de nuevo"<<endl;
}//fin segundo else
}//fin else
}//fin while
    return 0;
}//fin main
