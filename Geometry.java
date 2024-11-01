/***************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 29 de octubre del 2024
Programa: Geometry
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/3er semestre
Profesor: Sergio Franco Casillas
Descripción: Comprobacion de las clases para el calculo de figuras geometricas
*******************************************************************************/
package Geometricas;
/*
Bibliotecas de funciones
*/
import java.util.Scanner;  
/**
Esta clase es para iniciar y conocer el lenguaje java y se van a realizar algunos métodos o funciones para facilitar al trabajo, parecido al paradigma modular.
*/
public class Geometry {
/**
Inicio del metodo main
*/
public static void main(String[] args) {
    //instanciar objeto
    Scanner sc = new Scanner (System.in);
    //variables
    float l1, l2, l3, d, D, b, h, r, R;
    int x=1, selec, selecuad, selectri, selecpol, selecir;
    while (x== 1){
    impTxt ("Menu");  //imprimir la informacion del menu
    impTxt ("1.Cudrilateros");  
    impTxt ("2.Triangulos");  
    impTxt ("3.Poligonos");  
    impTxt ("4.Circulos");  
    impTxt ("5.Salir del programa");
    selec = sc.nextInt ();  //escanear la seleccion del usuario
    switch (selec) { //iniciar el menu
    case 1:
    while (x== 1){    
    impTxt ("Que cuadrilatero deseas calcular?");    
    impTxt ("1.Cuadrado"); 
    impTxt ("2.Rectangulo"); 
    impTxt ("3.Rombo"); 
    impTxt ("4.Salir del programa"); 
    selecuad = sc.nextInt ();
        switch (selecuad) {
        case 1: 
        impTxt ("Escribe la medida de los lados de tu cuadrado");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*4));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(l1*l1));//imprime el resultado del resultado del area
     break;// fin case 1.
        case 2:  
        impTxt ("Escribe la medida del lado menor de tu rectangulo");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt ("Escribe la medida del lado mayor de tu rectangulo");
        l2 = sc.nextFloat ();  
        impTxt("La medida del perimetro es de "+((l1*2)+(l2*2)));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(l1*l2));//imprime el resultado del resultado del area
        break;// fin case 2
        case 3:  
        impTxt ("Escribe la medida del lado menor de tu rombo");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt ("Escribe la medida del lado mayor de tu rombo");
        l2 = sc.nextFloat ();  
        impTxt ("Escribe la medida de la diagonal menor de tu rombo");
        d = sc.nextFloat ();  
        impTxt ("Escribe la medida de la diagonal mayor de tu rombo");
        D = sc.nextFloat ();          
        impTxt("La medida del perimetro es de "+((l1*2)+(l2*2)));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+((D*d)/2));//imprime el resultado del resultado del area
        break;// fin case 3        
        case 4:
            impTxt ("Gracias por su tiempo");
            x=2;
         break;// fin case 4.   
        default:
    impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 4");  
    break; // fin default
    } //fin case 1
  }  //fin while case 1
    case 2:
    while (x== 1){    
    impTxt ("Que triangulo deseas calcular?");    
    impTxt ("1.Equilatero"); 
    impTxt ("2.Isoceles"); 
    impTxt ("3.Escaleno"); 
    impTxt ("4.Salir del programa"); 
    selectri = sc.nextInt ();
        switch (selectri) {
        case 1: 
        impTxt ("Escribe la medida de los lados de tu triangulo equilatero");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt ("Escribe la medida de la altura de tu triangulo equilatero ");
        h = sc.nextFloat ();  
        impTxt("La medida del perimetro es de "+(l1*3));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+((l1*h)/2));//imprime el resultado del resultado del area
     break;// fin case 1.
        case 2:  
        impTxt ("Escribe la medida de la base de tu triangulo isoceles");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida 
        impTxt ("Escribe la medida de los dos lados iguales de tu triangulo isoceles");
        l2 = sc.nextFloat (); 
        impTxt ("Escribe la medida de la altura de tu triangulo isoceles ");
        h = sc.nextFloat ();  
        impTxt("La medida del perimetro es de "+(l1+(l2*2)));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+((l1*h)/2));//imprime el resultado del resultado del area
        break;// fin case 2
        case 3:  
        impTxt ("Escribe la medida del primer lado de tu triangulo escaleno");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt ("Escribe la medida del segundo lado de tu triangulo escaleno");
        l2 = sc.nextFloat (); 
        impTxt ("Escribe la medida del tercer lado de tu triangulo escaleno");
        l3 = sc.nextFloat (); 
        impTxt ("Escribe la medida de la base de tu triangulo escaleno");
        b = sc.nextFloat ();
        impTxt ("Escribe la medida de la altura de tu triangulo isoceles ");
        h = sc.nextFloat ();  
        impTxt("La medida del perimetro es de "+(l1+l2+l3));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+((b*h)/2));//imprime el resultado del resultado del area
        break;// fin case 3        
        case 4:
            impTxt ("Gracias por su tiempo");
            x=2;
         break;// fin case 4.   
        default:
    impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 4");  
    break; // fin default
    } //fin case 2
  }  //fin while case 2
    case 3:
    while (x== 1){  
    impTxt ("Que poligono desead calcular?");    
    impTxt ("1.Pentagono"); 
    impTxt ("2.Hexagono"); 
    impTxt ("3.Heptagono"); 
    impTxt ("4.Octagono");
    impTxt ("5.Nonagono"); 
    impTxt ("6.Decagono");
    impTxt ("7.Undecagono");
    impTxt ("8.Dodecagono");
    impTxt ("9.Salir del programa");  
    selecpol = sc.nextInt ();
        switch (selecpol) {
        case 1: 
        impTxt ("Escribe la medida de los lados de tu pentagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*5));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*5)*(l1/(2*(Math.tan(360/(2*5))))))/2));//imprime el resultado del resultado del area
        break;// fin case 1.
        case 2: 
        impTxt ("Escribe la medida de los lados de tu hexagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*6));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*6)*(l1/(2*(Math.tan(360/(2*6))))))/2));//imprime el resultado del resultado del area
        break;// fin case 2.
        case 3: 
        impTxt ("Escribe la medida de los lados de tu heptagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*7));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*7)*(l1/(2*(Math.tan(360/(2*7))))))/2));//imprime el resultado del resultado del area
        break;// fin case 3.
        case 4: 
        impTxt ("Escribe la medida de los lados de tu octagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*8));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*8)*(l1/(2*(Math.tan(360/(2*8))))))/2));//imprime el resultado del resultado del area
        break;// fin case 4.
        case 5: 
        impTxt ("Escribe la medida de los lados de tu nonagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*9));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*9)*(l1/(2*(Math.tan(360/(2*9))))))/2));//imprime el resultado del resultado del area
        break;// fin case 5.
        case 6: 
        impTxt ("Escribe la medida de los lados de tu decagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*10));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*10)*(l1/(2*(Math.tan(360/(2*10))))))/2));//imprime el resultado del resultado del area
        break;// fin case 6.   
        case 7: 
        impTxt ("Escribe la medida de los lados de tu undecagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*11));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*11)*(l1/(2*(Math.tan(360/(2*11))))))/2));//imprime el resultado del resultado del area
        break;// fin case 7.     
        case 8: 
        impTxt ("Escribe la medida de los lados de tu dodecagono");// indica la informacion a introducir
        l1 = sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(l1*12));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(((l1*12)*(l1/(2*(Math.tan(360/(2*12))))))/2));//imprime el resultado del resultado del area
        break;// fin case 8.  
        case 9:
            impTxt ("Gracias por su tiempo");
            x=2;
        break;// fin case 9.                  
        default:
        impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 9");  
        break; // fin default
      } //fin case 3
    }//fin while case 3  
    case 4:
    while (x== 1){    
    impTxt ("Que circulo deseas calcular?");    
    impTxt ("1.Circulo"); 
    impTxt ("2.Elipse"); 
    impTxt ("3.Salir del programa"); 
    selecir = sc.nextInt ();
        switch (selecir) {
        case 1: 
        impTxt ("Escribe la medida del radio de tu circulo");// indica la informacion a introducir
        r= sc.nextFloat ();  //escanea la informacion introducida
        impTxt("La medida del perimetro es de "+(3.1416*(r*2)));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(3.1416*(r*r)));//imprime el resultado del resultado del area
        break;// fin case 1.
        case 2: 
        impTxt ("Escribe la medida del radio menor de tu elipse");// indica la informacion a introducir
        r= sc.nextFloat ();  //escanea la informacion introducida
        impTxt ("Escribe la medida del radio mayor de tu elipse");
        R= sc.nextFloat ();  
        impTxt("La medida del perimetro es de "+ ((2*3.1416)*(Math.sqrt(((r*r)+(R*R))/2))));//imprime el resultado del resultado del perimetro 
        impTxt("La medida del area es de "+(3.1416*r*R));//imprime el resultado del resultado del area
        break;// fin case 2.
        case 3:
            impTxt ("Gracias por su tiempo");
            x=2;
        break;// fin case 3.                  
        default:
        impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 3");  
        break; // fin default
      } //fin case 4
    }//fin while case 4          
    case 5:
        impTxt ("Gracias por su tiempo");
        x=2;
     break;// fin case 5.
    default:
    impTxt ("Seleccion no valida, por favor presiona un numero del 1 al 5");  
    break; // fin default
  }  
}//final del main while
}// fin del main
/**
Este metodo es para imrpimir textos en pantalla con saltos de Floata
*/
private static void impTxt (String texto) {
System.out.println (texto);
}//fin de impTxt
/**
Este metodo es para imrpimir numeros enteros en pantalla con saltos de Floata
*/
private static void impTxt (int num) {
System.out.println (num);
}//fin de impTxt
/**
Este metodo es para imrpimir numeros reales en pantalla con saltos de Floata
*/
private static void impTxt (double texto) {
System.out.println (texto);
}//fin de impTxt

}//fin de clase Geometry