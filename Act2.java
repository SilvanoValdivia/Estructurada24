/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 03 de agosto del 2024
Programa: Arraylist
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/3er semestre
Profesor: Sergio Franco Casillas
Descripción: Uso de Arraylist
*******************************************************************************/
package datos;
/*
Bibliotecas de funciones
*/
import java.util.Scanner;  
/**
Esta clase es para iniciar y conocer el lenguaje java y se van a realizar algunos métodos o funciones para facilitar al trabajo, parecido al paradigma modular.
*/
public class Act2 {
/**
Inicio del metodo main
*/
public static void main(String[] args) {
    //instanciar objeto
    Scanner sc = new Scanner (System.in);
    //variables
    int x=1, i, selec=0, edad=0, estatura=0, num1=0, num2=0;
    String universitario=null, titulado=null;
    String nombre=null, apellidos=null, se=null, carrera=null;
    while (x== 1){
    impTxt ("Menu");  //imprimir la informacion del menu
    impTxt ("1. Inesertar datos");  
    impTxt ("2. Mostrar datos");  
    impTxt ("3. Reemplazar un dato");  
    impTxt ("4 Reemplazar todos los datos.");
     impTxt ("5 Salir del programa");
    selec = sc.nextInt ();  //escanear la seleccion del usuario
    switch (selec) { //iniciar el menu
    case 1:
    impTxt ("Inserta tu nombre/s");    
nombre = sc.nextLine (); // escaneear el texto solicitado
impTxt ("Inserta tus apellidos");    
apellidos = sc.nextLine ();
impTxt ("Inserta tu edad");    
edad = sc.nextInt ();//escanear el numero solicitado
impTxt ("");    
se = sc.nextLine ();
impTxt ("Inserta tu sexo: M, F o N");    
se = sc.nextLine ();
impTxt ("Inserta el nombre de tu carrera");    
carrera = sc.nextLine ();
impTxt ("Inserta si eres universitario o no 0 para no 1 para si");  
universitario = sc.nextLine (); //escanear el booleno solicitado
impTxt ("Inserta si estas titulado o no 0 para no 1 para si");  
titulado = sc.nextLine ();
impTxt ("Inserta tu estatura en centimetros por favor");  
estatura = sc.nextInt ();    
     break;// fin case 1.
    case 2:
    impTxt ("Tus datos de alumno son:");
impTxt (nombre); // escribir en pantalla
impTxt (apellidos);
impTxt (edad);
impTxt (se);
impTxt (carrera);
impTxt (universitario);
impTxt (titulado);
impTxt (estatura);
     break;// fin case 2
    case 3:
            impTxt ("Que dato quieres borrar?");
            impTxt ("1. nombre"); // escribir en pantalla
            impTxt ("2. apellidos");
            impTxt ("3. edad");
            impTxt ("4. sexo");
            impTxt ("5. carrera");
            impTxt ("6. estatus universitario");
            impTxt ("7. estatus titulado");
            impTxt ("8. estatura");
i = sc.nextInt ();  //escanear la seleccion del usuario            
 switch(i) {
  case 1:
impTxt ("Inserta tu nombre/s");    
nombre = sc.nextLine (); // escaneear el texto solicitado
    break; //fin case 1;
  case 2:
impTxt ("Inserta tus apellidos");    
apellidos = sc.nextLine ();
    break; //fin case 2
  case 3:
impTxt ("Inserta tu edad");    
edad = sc.nextInt ();//escanear el numero solicitado
    break; //fin case 3
  case 4:
impTxt ("Inserta tu sexo: M, F o N");    
se = sc.nextLine ();
    break; //fin case 4
  case 5:
impTxt ("Inserta el nombre de tu carrera");    
carrera = sc.nextLine ();
    break; //fin case 5
  case 6:
impTxt ("Inserta si eres universitario o no 0 para no 1 para si");  
universitario = sc.nextLine (); //escanear el booleno solicitado
    break; //fin case 6    
  case 7:
impTxt ("Inserta si estas titulado o no 0 para no 1 para si");  
titulado = sc.nextLine ();
    break; //fin case 7
case 8:
impTxt ("Inserta tu estatura en centimetros por favor");  
estatura = sc.nextInt ();
    break; //fin case 8    
  default:
  impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 4");
    break; //fin default
 }
     break;// fin case 3.
    case 4:
        impTxt ("Inserta tu nombre/s");    
nombre = sc.nextLine (); // escaneear el texto solicitado
impTxt ("Inserta tus apellidos");    
apellidos = sc.nextLine ();
impTxt ("Inserta tu edad");    
edad = sc.nextInt ();//escanear el numero solicitado
impTxt ("");    
se = sc.nextLine ();
impTxt ("Inserta tu sexo: M, F o N");    
se = sc.nextLine ();
impTxt ("Inserta el nombre de tu carrera");    
carrera = sc.nextLine ();
impTxt ("Inserta si eres universitario o no 0 para no 1 para si");  
universitario = sc.nextLine (); //escanear el booleno solicitado
impTxt ("Inserta si estas titulado o no 0 para no 1 para si");  
titulado = sc.nextLine ();
impTxt ("Inserta tu estatura en centimetros por favor");  
estatura = sc.nextInt ();
     // fin case 4.
    break;
    case 5:
        impTxt ("Gracias por su tiempo");
        x=2;
     break;// fin case 5.
    default:
    impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 4");  
    break; // fin default
  }  
}//final del while
}// fin del main
/**
Este metodo es para imrpimir textos en pantalla con saltos de linea
*/
private static void impTxt (String texto) {
System.out.println (texto);
}//fin de impTxt
/**
Este metodo es para imrpimir numeros enteros en pantalla con saltos de linea
*/
private static void impTxt (int num) {
System.out.println (num);
}//fin de impTxt
/**
Este metodo es para imrpimir numeros reales en pantalla con saltos de linea
*/
private static void impTxt (double texto) {
System.out.println (texto);
}//fin de impTxt



}//fin de clase Act2