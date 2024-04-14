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
bool esPalindromo(string cadena, int size){
    for(int i = 0; i < size/2; i++)
        if(cadena[i] != cadena[size-i-1])
            return false;
    return true;
}
int main(){
    string cadena;
    cout << "Ingresa la cadena: ";
    getline(cin,cadena);
    esPalindromo(cadena,cadena.length()) ?
        cout << "\nEs palindromo \n" : cerr << "\nNo es palindromo \n";
int vocales=0, consonante=0;
for(int i=0;i<cadena.length();i++){
    if((cadena[i]=='a')or (cadena[i]=='e')or (cadena[i]=='i')or (cadena[i]=='o')or (cadena[i]=='u')){

       vocales++;
     }else
      {
       consonante++;}
   }
  cout<<"Existen "<<vocales<<" vocales y "<<consonante<<" consonantes"<<endl;
    return 0;
}
