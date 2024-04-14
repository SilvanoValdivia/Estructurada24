/**************************Presentación*******************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 15 de Abril del 2024
Programa: Analizador de texto (con ayuda de internet)
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de analisar un texto,
mostrando si es o no un palidromo, y tambien dando la cantidad de vocales y
consonantes que se encuentran en el.
*******************************************************************************/
#include <iostream>
using namespace std;
bool esPalindromo(string cadena, int size){ //permite leer la cadena al derecho y al reves
    for(int i = 0; i < size/2; i++)
        if(cadena[i] != cadena[size-i-1])
            return false;
    return true;
}
int main(){ // inicio de main
    string cadena; // declaracion de cadena como string
    cout << "Ingresa la cadena: ";
    getline(cin,cadena); //inicia la idientificacion de palindromos
    esPalindromo(cadena,cadena.length()) ?
        cout << "\nEs palindromo \n" : cerr << "\nNo es palindromo \n"; //termina la idientificacion de palindromos
int vocales=0, consonante=0; //declaricon de vocales y consnonates como integrales iguales a 0
for(int i=0;i<cadena.length();i++){ //inicia el conteo de vocales y consonantes
    if((cadena[i]=='a')or (cadena[i]=='e')or (cadena[i]=='i')or (cadena[i]=='o')or (cadena[i]=='u')){

       vocales++;
     }else
      {
       consonante++;} //termina el conteo de vocales y consonantes
   }
  cout<<"Existen "<<vocales<<" vocales y "<<consonante<<" consonantes"<<endl;
    return 0; //fin de main
}
