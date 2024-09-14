/**************************Presentación*****************************************
Nombre: Silvano Joset Valdivia Franco
Fecha: 10 de aseptiembre del 2024
Programa: Conuter
Centro Universitario de los Altos/Universidad de Guadalajara
Ingeniería en computacion/3er semestre
Profesor: Sergio Franco Casillas
Descripción: creacion de clases propias
*******************************************************************************/

Package: Contador
public class Counter
{
    private int numero;
    private int limite;
   
    // constructor: metodo o metodos que inicializa varavles o atributes. Se llama igual que la classe
    /**
     * constructor por default
     */
     
    public void Counter (){
        this.numero=0;
    }//fin de counter
    public void Limiter (){
        this.limite=0;
    }//fin de limiter
    /**
     * inicializar el contador en un valor x dado por el programador
     */
     
    public void Counter(int x){
        this.numero=x; //permite establecer el valor del contador
    }
    public void Limiter(int x){
        this.limite=x; //permite establecer el valor del limite
    }    
    //metodos sobrecargados
    public void addNum () { //aumenta el numero del contador por 1
        this.numero++;
    }
    public void addNum (int x) { //aumenta el numero del contador por el numero especificado 
        this.numero+=x;
    }
    public void subNum () { //disminuye el numero del contador por 1
        this.numero--;
    }
    public void subNum (int x) { //disminuye el numero del contador por el numero especificado 
        this.numero-=x;
    }  
    public void modNum (int x) { //cambia el numero del contador por el numero especificado 
        this.numero=x;
    }  
    public int getNum () { //imprime el valor del contador
        return this.numero;
    }
    
    public void addLim () {  //aumenta el numero limite por 1
        this.limite++;
    }
    public void addLim (int x) { //aumenta el numero limite a el numero especificado 
        this.numero+=x;
    }
    public void subLim () { //disminuye el numero  limite por 1
        this.limite--;
    }
    public void subLim (int x) { //disminuye el numero limite por el numero especificado 
        this.limite-=x;
    }  
    public void modLim (int x) { //cambia el numero limite por el numero especificado 
        this.limite=x;
    }  
    public int getLim () { //imprime el valor del limite
        return this.limite;
    }
} // fin de counter