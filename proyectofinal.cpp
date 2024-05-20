/******************************************************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 14 de Mayo del 2024
Programa: Registro de alumnos(proyecto final).
Centro Universitario de los Altos/Universidad de Guadalajara
Ingenieria en computacion/2do semestre
Profesor: Sergio Franco Casillas
Descripcion: Este programa tiene la funcion de registrar los datos de alumnos.
*******************************************************************************/

#include <iostream>
using namespace std;
int
main ()
{
  char op; //opciones del menu
  string nombre1, padre1, madre1, nombre2, padre2, madre2, nombre3, padre3, madre3, nombre4, padre4, madre4, nombre5, padre5, madre5; //valores de texto
  int ed1, mat1, bio1, fis1, esp1, art1, pro1, ed2, mat2, bio2, fis2, esp2, art2, pro2, ed3, mat3, bio3, fis3, esp3, art3, pro3, ed4, mat4, bio4, fis4, esp4, art4, pro4, ed5, mat5, bio5, fis5, esp5, art5, pro5; //valores numC)ricos
  string telpa1, telma1, telpa2, telma2, telpa3, telma3, telpa4, telma4, telpa5, telma5; //valores telefonicos
  bool ciclo=true; // valores del usuario
  while (ciclo) //Hace que se repita el programa hasta que el usuario desida cerrarlo
{
 cout << endl << "a. Registrar datos del alumno 1" << endl; //imprime todo el menu
 cout << "b. Registrar datos del alumno 2" << endl;
 cout << "c. Registrar datos del alumno 3" << endl;
 cout << "d. Registrar datos del alumno 4" << endl;
 cout << "e. Registrar datos del alumno 5" << endl;
 cout << "f. Mostrar datos de los alumnos de forma general" << endl;
 cout << "g. Mostrar datos del alumno 1" << endl;
 cout << "h. Mostrar datos del alumno 2" << endl;
 cout << "i. Mostrar datos del alumno 3" << endl;
 cout << "j. Mostrar datos del alumno 4" << endl;
 cout << "k. Mostrar datos del alumno 5" << endl;
 cout << "l. Mostrar promedio del alumno 1" << endl;
 cout << "m. Mostrar promedio del alumno 2" << endl;
 cout << "n. Mostrar promedio del alumno 3" << endl;
 cout << "o. Mostrar promedio del alumno 4" << endl;
 cout << "p. Mostrar promedio del alumno 5" << endl;
 cout << "q. Cerrar ciclo" << endl;
 cout << "Elige una opcion: " << endl;
 cin >> op; //Lee la opcion seleccionada
 switch (op)
{
case 'a': // Guarda los datos del primer estudiante
 {
cout << "Nombre del alumno" << endl;
cin >> nombre1;
cout << "Edad del alumno" << endl;
cin >> ed1;
cout << "Padre del alumno" << endl;
cin >> padre1;
cout << "Madre del alumno" << endl;
cin >> madre1;
cout << "Telefono del padre" << endl;
cin >> telpa1;
cout << "Telefono de la madre" << endl;
cin >> telma1;
cout << "Calificacion de matematicas" << endl;
cin >> mat1;
cout << "Calificacion de biologia" << endl;
cin >> bio1;
cout << "Calificacion de educacion fisica" << endl;
cin >> fis1;
cout << "Calificacion de espanol" << endl;
cin >> esp1;
cout << "Calificacion de artes" << endl;
cin >> art1;
break;
 }//fin case a
case 'b':// Guarda los datos del segundo estudiante
 {
cout << "Nombre del alumno" << endl;
cin >> nombre2;
cout << "Edad del alumno" << endl;
cin >> ed2;
cout << "Padre del alumno" << endl;
cin >> padre2;
cout << "Madre del alumno" << endl;
cin >> madre2;
cout << "Telefono del padre" << endl;
cin >> telpa2;
cout << "Telefono de la madre" << endl;
cin >> telma2;
cout << "Calificacion de matematicas" << endl;
cin >> mat2;
cout << "Calificacion de biologia" << endl;
cin >> bio2;
cout << "Calificacion de educacion fisica" << endl;
cin >> fis2;
cout << "Calificacion de espanol" << endl;
cin >> esp2;
cout << "Calificacion de artes" << endl;
cin >> art2;
break;
 }//fin case b
case 'c': // Guarda los datos del tercer estudiante
 {
 cout << "Nombre del alumno" << endl;
 cin >> nombre3;
 cout << "Edad del alumno" << endl;
 cin >> ed3;
 cout << "Padre del alumno" << endl;
 cin >> padre3;
 cout << "Madre del alumno" << endl;
 cin >> madre3;
 cout << "Telefono del padre" << endl;
 cin >> telpa3;
 cout << "Telefono de la madre" << endl;
 cin >> telma3;
 cout << "Calificacion de matematicas" << endl;
 cin >> mat3;
 cout << "Calificacion de biologia" << endl;
 cin >> bio3;
 cout << "Calificacion de educacion fisica" << endl;
 cin >> fis3;
 cout << "Calificacion de espanol" << endl;
 cin >> esp3;
 cout << "Calificacion de artes" << endl;
 cin >> art3;
break;
 }//fin case c
case 'd': // Guarda los datos del cuarto estudiante
 {
 cout << "Nombre del alumno" << endl;
 cin >> nombre4;
 cout << "Edad del alumno" << endl;
 cin >> ed4;
 cout << "Padre del alumno" << endl;
 cin >> padre4;
 cout << "Madre del alumno" << endl;
 cin >> madre4;
 cout << "Telefono del padre" << endl;
 cin >> telpa4;
 cout << "Telefono de la madre" << endl;
 cin >> telma4;
 cout << "Calificacion de matematicas" << endl;
 cin >> mat4;
 cout << "Calificacion de biologia" << endl;
 cin >> bio4;
 cout << "Calificacion de educacion fisica" << endl;
 cin >> fis4;
 cout << "Calificacion de espanol" << endl;
 cin >> esp4;
 cout << "Calificacion de artes" << endl;
 cin >> art4;
break;
 }//fin case d
case 'e': // Guarda los datos del quinto estudiante
 {
 cout << "Nombre del alumno" << endl;
 cin >> nombre5;
 cout << "Edad del alumno" << endl;
 cin >> ed5;
 cout << "Padre del alumno" << endl;
 cin >> padre5;
 cout << "Madre del alumno" << endl;
 cin >> madre5;
 cout << "Telefono del padre" << endl;
 cin >> telpa5;
 cout << "Telefono de la madre" << endl;
 cin >> telma5;
 cout << "Calificacion de matematicas" << endl;
 cin >> mat5;
 cout << "Calificacion de biologia" << endl;
 cin >> bio5;
cout << "Calificacion de educacion fisica" << endl;
cin >> fis5;
cout << "Calificacion de espanol" << endl;
cin >> esp5;
cout << "Calificacion de artes" << endl;
cin >> art5;
   break;
 }//fin case e
case 'f': //imprime los datos de todos los estudiantes
 {
 cout << "el nombre del 1er alumno es " << nombre1 << endl;
 cout << "su edad es " << ed1 << endl;
 cout << "Su padre es " << padre1 << " y su numero telefonico es " << telpa1 << endl;
 cout << "Su madre es " << madre1 << " y su numero telefonico es " << telma1 << endl;
 cout << "Su calificacion de matematicas es " << mat1 << endl;
 cout << "Calificacion de biologia es " << bio1 << endl;
 cout << "Calificacion de educacion fisica es " << fis1 << endl;
 cout << "Calificacion de  espanol es " << esp1 << endl;
 cout << "Calificacion de artes es " << art1 << endl;
 cout << endl << "el nombre del 2do alumno es " << nombre2 << endl;
 cout << "su edad es " << ed2 << endl;
 cout << "Su padre es " << padre2 << " y su numero telefonico es " << telpa2 << endl;
 cout << "Su madre es " << madre2 << " y su numero telefonico es " << telma2 << endl;
 cout << "Su calificacion de matematicas es " << mat2 << endl;
 cout << "Calificacion de biologia es " << bio2 << endl;
 cout << "Calificacion de educacion fisica es " << fis2 << endl;
 cout << "Calificacion de  espanol es " << esp2 << endl;
 cout << "Calificacion de artes es " << art2 << endl;
 cout << endl << "el nombre del 3er alumno es " << nombre3 << endl;
 cout << "su edad es " << ed3 << endl;
 cout << "Su padre es " << padre3 << " y su numero telefonico es " << telpa3 << endl;
 cout << "Su madre es " << madre3 << " y su numero telefonico es " << telma3 << endl;
 cout << "Su calificacion de matematicas es " << mat3 << endl;
 cout << "Calificacion de biologia es " << bio3 << endl;
 cout << "Calificacion de educacion fisica es " << fis3 << endl;
 cout << "Calificacion de  espanol es " << esp3 << endl;
 cout << "Calificacion de artes es " << art3 << endl;
 cout << endl << "el nombre del 4to alumno es " << nombre4 << endl;
 cout << "su edad es " << ed4 << endl;
 cout << "Su padre es " << padre4 << " y su numero telefonico es " << telpa4 << endl;
 cout << "Su madre es " << madre4 << " y su numero telefonico es " << telma4 << endl;
 cout << "Su calificacion de matematicas es " << mat4 << endl;
 cout << "Calificacion de biologia es " << bio4 << endl;
 cout << "Calificacion de educacion fisica es " << fis4 << endl;
 cout << "Calificacion de  espanol es " << esp4 << endl;
 cout << "Calificacion de artes es " << art4 << endl;
 cout << endl << "el nombre del 5to alumno es " << nombre5 << endl;
 cout << "su edad es " << ed5 << endl;
 cout << "Su padre es " << padre5 << " y su numero telefonico es " << telpa5 << endl;
 cout << "Su madre es " << madre5 << " y su numero telefonico es " << telma5 << endl;
 cout << "Su calificacion de matematicas es " << mat5 << endl;
 cout << "Calificacion de biologia es " << bio5 << endl;
 cout << "Calificacion de educacion fisica es " << fis5 << endl;
 cout << "Calificacion de  espanol es " << esp5 << endl;
 cout << "Calificacion de artes es " << art5 << endl;
   break;
 }//fin case f
 case 'g': //imprime los datos del estudiante 1
 {
 cout << "el nombre del 1er alumno es " << nombre1 << endl;
 cout << "su edad es " << ed1 << endl;
 cout << "Su padre es " << padre1 << "y su numero telefonico es " << telpa1 << endl;
 cout << "Su madre es " << madre1 << "y su numero telefonico es " << telma1 << endl;
 cout << "Su calificacion de matematicas es " << mat1 << endl;
 cout << "Su calificacion de biologia es " << bio1 << endl;
 cout << "Su calificacion de educacion fisica es " << fis1 << endl;
 cout << "Su calificacion de  espanol es " << esp1 << endl;
 cout << "Su calificacion de artes es " << art1 << endl;
break;
 } //fin case l
 case 'h': //imprime los datos del estudiante 2
 {
 cout << "el nombre del 2do alumno es " << nombre2 << endl;
 cout << "su edad es " << ed2 << endl;
 cout << "Su padre es " << padre2 << " y su numero telefonico es " << telpa2 << endl;
 cout << "Su madre es " << madre2 << " y su numero telefonico es " << telma2 << endl;
 cout << "Su calificacion de matematicas es " << mat2 << endl;
 cout << "Su calificacion de biologia es " << bio2 << endl;
 cout << "Su calificacion de educacion fisica es " << fis2 << endl;
 cout << "Su calificacion de  espanol es " << esp2 << endl;
 cout << "Su calificacion de artes es " << art2 << endl;
break;
 } //fin case m
  case 'i': //imprime los datos del estudiante 3
 {
 cout << "el nombre del 3er alumno es " << nombre3 << endl;
 cout << "su edad es " << ed3 << endl;
 cout << "Su padre es " << padre3 << " y su numero telefonico es " << telpa3 << endl;
 cout << "Su madre es " << madre3 << " y su numero telefonico es " << telma3 << endl;
 cout << "Su calificacion de matematicas es " << mat3 << endl;
 cout << "Su calificacion de biologia es " << bio3 << endl;
 cout << "Su calificacion de educacion fisica es " << fis3 << endl;
 cout << "su calificacion de  espanol es " << esp3 << endl;
 cout << "Su calificacion de artes es " << art3 << endl;
break;
 } //fin case n
  case 'j': //imprime los datos del estudiante 4
 {
 cout << endl << "el nombre del 4to alumno es " << nombre4 << endl;
 cout << "su edad es" << ed4 << endl;
 cout << "Su padre es " << padre4 << " y su numero telefonico es " << telpa4 << endl;
 cout << "Su madre es " << madre4 << " y su numero telefonico es " << telma4 << endl;
 cout << "Su calificacion de matematicas es " << mat4 << endl;
 cout << "Suc alificacion de biologia es " << bio4 << endl;
 cout << "Su calificacion de educacion fisica es " << fis4 << endl;
 cout << "Su calificacion de  espanol es " << esp4 << endl;
 cout << "Su calificacion de artes es " << art4 << endl;
break;
 } //fin case ñ
  case 'k': //imprime los datos del estudiante 5
 {
 cout << "su edad es " << ed5 << endl;
 cout << "Su padre es " << padre5 << " y su numero telefonico es " << telpa5 << endl;
 cout << "Su madre es " << madre5 << " y su numero telefonico es " << telma5 << endl;
 cout << "Su calificacion de matematicas es " << mat5 << endl;
 cout << "Su calificacion de biologia es " << bio5 << endl;
 cout << "Su calificacion de educacion fisica es " << fis5 << endl;
 cout << "Su calificacion de  espanol es " << esp5 << endl;
 cout << "Su calificacion de artes es " << art5 << endl;
break;
 } //fin case k
case 'l': //Calcula, imprime y califica de reprobado a excelente el promedio del alumno 1
 {
     pro1=((mat1+bio1+fis1+esp1+art1)/5);
   if (pro1==100){
                cout<<"El promedio de "<<nombre1<<" es un promedio perfecto!"<<endl;
            }else{
                if (90<=pro1 && pro1<100){
                    cout<<"El promedio de "<< nombre1<< " es de " <<pro1<< " Excelente"<< endl;
                }else{
                    if (80<=pro1 && pro1<=89){
                        cout<<"El promedio de " <<nombre1<< " es de " <<pro1<< " Muy bien"<< endl;
                    }else{
                        if (60<=pro1 && pro1<=79){
                            cout<<"El promedio de " <<nombre1<< " es de " <<pro1<< " Regular"<< endl;
                        }else{
                            if (pro1<=59){
                                cout<<"El promedio de " <<nombre1<< " es de " <<pro1<< " Reprobado"<< endl;}
                        } //fin del cuarto else
                    } //fin del tercer else
                } //fin del segundo else
            } //fin del primer else
break;
 }//fin case l
case 'm': //Calcula, imprime y califica de reprobado a excelente el promedio del alumno 2
 {
     pro2=((mat2+bio2+fis2+esp2+art2)/5);
   if (pro2==100){
                cout<<"El promedio de "<<nombre2<<" es un promedio perfecto!"<<endl;
            }else{
                if (90<=pro2 && pro2<100){
                    cout<<"El promedio de "<< nombre2<< " es de " <<pro2<< " Excelente"<< endl;
                }else{
                    if (80<=pro2 && pro2<=89){
                        cout<<"El promedio de "<< nombre2<< " es de " <<pro2<< " Muy bien"<< endl;
                    }else{
                        if (60<=pro2 && pro2<=79){
                            cout<<"El promedio de "<< nombre2<< " es de " <<pro2<< " Regular"<< endl;
                        }else{
                            if (pro2<=59){
                                cout<<"El promedio de "<< nombre2<< " es de " <<pro2<< " Reprobado"<< endl;}
                        } //fin del cuarto else
                    } //fin del tercer else
                } //fin del segundo else
            } //fin del primer else
break;
 }//fin case m
case 'n': //Calcula, imprime y califica de reprobado a excelente el promedio del alumno 3
 {
     pro3=((mat3+bio3+fis3+esp3+art3)/5);
   if (pro3==100){
                cout<<"El promedio de "<<nombre3<<" es un promedio perfecto!"<<endl;
            }else{
                if (90<=pro3 && pro3<100){
                    cout<<"El promedio de "<< nombre3<< " es de " <<pro3<< " Excelente"<< endl;
                }else{
                    if (80<=pro3 && pro3<=89){
                        cout<<"El promedio de "<< nombre3<< " es de " <<pro3<< " Muy bien"<< endl;
                    }else{
                        if (60<=pro3 && pro3<=79){
                            cout<<"El promedio de "<< nombre3<< " es de " <<pro3<< " Regular"<< endl;
                        }else{
                            if (pro3<=59){
                                cout<<"El promedio de "<< nombre3<< " es de " <<pro3<< " Reprobado"<< endl;}
                        } //fin del cuarto else
                    } //fin del tercer else
                } //fin del segundo else
            } //fin del primer else
break;
 }//fin case n
case 'o': //Calcula, imprime y califica de reprobado a excelente el promedio del alumno 4
 {
     pro4=((mat4+bio4+fis4+esp4+art4)/5);
   if (pro4==100){
               cout<<"El promedio de "<<nombre4<<" es un promedio perfecto!"<<endl;
            }else{
                if (90<=pro4 && pro4<100){
                    cout<<"El promedio de "<< nombre4<< " es de " <<pro4<< " Excelente"<< endl;
                }else{
                    if (80<=pro4 && pro4<=89){
                        cout<<"El promedio de "<< nombre4<< " es de " <<pro4<< " Muy bien"<< endl;
                    }else{
                        if (60<=pro4 && pro4<=79){
                            cout<<"El promedio de "<< nombre4<< " es de " <<pro4<< " Regular"<< endl;
                        }else{
                            if (pro4<=59){
                                cout<<"El promedio de "<< nombre4<< " es de " <<pro4<< " Reprobado"<< endl;}
                        } // fin del cuarto else
                    } //fin del tercer else
                } //fin del segundo else
            } //fin del primer else
break;
 }//fin case o
case 'p': //Calcula, imprime y califica de reprobado a excelente el promedio del alumno 5
 {
     pro5=((mat5+bio5+fis5+esp5+art5)/5);
   if (pro5==100){
               cout<<"El promedio de "<<nombre5<<" es un promedio perfecto!"<<endl;
            }else{
                if (90<=pro5 && pro5<100){
                    cout<<"El promedio de "<< nombre5<< " es de " <<pro5<< " Excelente"<< endl;
                }else{
                    if (80<=pro5 && pro5<=89){
                        cout<<"El promedio de "<< nombre5<< " es de " <<pro5<< " Muy bien"<< endl;
                    }else{
                        if (60<=pro5 && pro5<=79){
                            cout<<"El promedio de "<< nombre5<< " es de " <<pro5<< " Regular"<< endl;
                        }else{
                            if (pro5<=59){
                                cout<<"El promedio de "<< nombre5<< " es de " <<pro5<< " Reprobado"<< endl;}
                        } //fin del cuarto else
                    } //fin del tercer else
                } //fin del segundo else
            } //fin del primer else
break;
 }//fin case p
case 'q': //cierra el ciclo y concluye el programa
 {
ciclo = false;
break;
 } //fin case q
default: //indica cuando una de las selecciones no es valida
 {
cout << "Seleccion no valida" << endl;
 }//fin default
}//fin de switch
}//fin while
  return 0;
}
