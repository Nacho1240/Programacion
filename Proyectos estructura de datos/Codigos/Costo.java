//Para ordenar un arreglo podemos hacer volteos, es decir primero iteramos sobre el arreglo en donde en cada iteracion buscamos el elemento mas pequeño entre la posicion actual "i" y el fin, una vez encontrado digamos en "j", volteamos el arreglo desde la poscicion "i" hasta "j".

//En base a este algoritmo definió que tan costo es realizar una vueltita, para ello uso la siguiente formula de costo j-i+1 , por vuelta, por ejemplo si tenemos el arreglo [4,2,1,3] al aplicar el algoritmo sigue los siguientes estados:

//i = 0 y j = 2, entonces: [1,2,4,3], costo: 3
//i = 1 y j = 1, entonces: [1,2,4,3], costo: 4
//i = 2 y j = 3, entonces: [1,2,4,3], costo: 6
//Para facilitar las cosas los elementos a contar seran todos los números entre 1 y el largo definido de forma desordenada inicialmente, es decir si tenemos largo 4, tendremos los numero 1, 2, 3 y 4 en un orden aleatorio. Finalmente su tarea consiste en ver que tan costoso es ordenar un arreglo usando la regla descrita anteriormente.


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Tarea {

public static void cambio(int[]ordenar, int i, int minimo){
 while(i<minimo){
   
    int reorden=ordenar[i];
    ordenar[i]=ordenar[minimo];
    ordenar[minimo]=reorden;
    i++;
    minimo --;
    }
}




public static int orden(int[] ordenar){
int n = ordenar.length;
int minimo=0;

int contador=0;
for(int i=0; i<n-1;i++){

    minimo = i;

    for(int j=i+1;j<n;j++){
        if(ordenar[j]<ordenar[minimo]){
                minimo = j;
                
        }

    }
    contador+= minimo - i + 1;
    cambio(ordenar, i, minimo);
   
}
return contador;
}






    public static void main(String[] args) {


Scanner scan = new Scanner(System.in);
int n = scan.nextInt();
int sol=0;
int[] arreglo = new int[n];

for(int i=0; i<n;i++){

arreglo[i]=scan.nextInt();

}
scan.close();


sol=orden(arreglo);


       System.out.println(sol);
    }
}