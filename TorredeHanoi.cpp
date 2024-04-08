/**************************Presentación*******************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 8 de Abril del 2024
Programa: Torre de Hanoi
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computación/2do semestre
Profesor: Sergio Franco Casillas
Descripción: El siguiente programa tiene el objetivo de presentar el juego de la
torre de Hanoi utilizando a su vez la recursividad
*******************************************************************************/
#include <iostream>
using namespace std;
void opc (int opctual)
{
    if (opctual <= '8'){
        opc(opctual+1);
        cout << opctual << " "<<endl;
    }
    return;
}
int main()
{
cout<< "Elige cuantos discos quieres usar: "<<endl;
    char inicio='1';
    opc (inicio);
cin>> n;
cout<< n <<" discos seleccionados "<<endl;
cout<< "Traslada rodos los discos de la columna A a la C,"<<endl;
cout<< "No puedes poner un disco con un numero mayor sobre uno menor"<<endl;
cout<< "Inicio"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< "[1]"<<endl;
cout<< "[ 2 ]"<<endl;
cout<< "[  3  ]"<<endl;
cout<< "Movimineto 1"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< "[ 2 ]"<<endl;
cout<< "[  3  ]\t\t[1]"<<endl;
cout<< "Movimineto 2"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< ""<<endl;
cout<< "[  3  ]\t[ 2 ]\t[1]"<<endl;
cout<< "Movimineto 3"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< "\t[1]"<<endl;
cout<< "[  3  ]\t[ 2 ]"<<endl;
cout<< "Movimineto 4"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< "\t[1]"<<endl;
cout<< "\t[ 2 ]\t[  3  ]"<<endl;
cout<< "Movimineto 5"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< ""<<endl;
cout<< "[1]\t[ 2 ]\t[  3  ]"<<endl;
cout<< "Movimineto 6"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< ""<<endl;
cout<< "\t\t[ 2 ]"<<endl;
cout<< "[1]\t\t[  3  ]"<<endl;
cout<< "Movimineto 7"<<endl;
cout<< "A \tB \tC"<<endl;
cout<< "\t\t[1]"<<endl;
cout<< "\t\t[ 2 ]"<<endl;
cout<< "\t\t[  3  ]"<<endl;
cout<< "Felicidades"<<
    return 0;
}
