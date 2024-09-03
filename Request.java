/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 27 de agosto del 2024
Programa: Hola Mundo
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/3er semestre
Profesor: Sergio Franco Casillas
Descripción: intrpduccion a java
*******************************************************************************/
package datos;
/*
Bibliotecas de funciones
*/
import java.util.Scanner;  
/**
Esta clase es para iniciar y conocer el lenguaje java y se van a realizar algunos métodos o funciones para facilitar al trabajo, parecido al paradigma modular.
*/
public class Request {
/**
Inicio del metodo main
*/
public static void main(String[] args) {
    //instanciar objeto
    Scanner sc = new Scanner (System.in);
    //variables
    int edad, estatura, num1, num2;
    String universitario, titulado;
    String nombre, apellidos, se, carrera;
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
impTxt ("Tus datos de alumno son:");
impTxt (nombre); // escribir en pantalla
impTxt (apellidos); 
impTxt (edad);
impTxt (se);
impTxt (carrera);
impTxt (universitario);
impTxt (titulado);
impTxt (estatura);
impTxt ("Iniciando calculadora");
impTxt ("Inserta tu primer termino");   
num1 = sc.nextInt ();
impTxt ("Inserta tu segundo termino");   
num2 = sc.nextInt ();
sumN (num1, num2);
resN (num1, num2);
mulN (num1, num2);
divN (num1, num2);
impTxt ("Gracias por su tiempo");


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
/**
Este metodo es para sumar 2 numeros reales en pantalla con saltos de linea
*/
public static void sumN (int x, int y) {
impTxt("El resultado de: "+x+" mas "+y+" es igual a "+(x+y));
}//fin sumN
/**
Este metodo es para restar 2 numeros reales en pantalla con saltos de linea
*/
public static void resN (int x, int y) {
impTxt("El resultado de: "+x+" menos "+y+" es igual a "+(x-y));
}//fin resN
/**
Este metodo es para multiplicar 2 numeros reales en pantalla con saltos de linea
*/
public static void mulN (int x, int y) {
impTxt("El resultado de: "+x+" por "+y+" es igual a "+(x*y));
}//fin mulN
/**
Este metodo es para dividir 2 numeros reales en pantalla con saltos de linea
*/
public static void divN (int x, int y) {
impTxt("El resultado de: "+x+" entre "+y+" es igual a "+(x/y));
}//fin divN


}//fin de clase Request