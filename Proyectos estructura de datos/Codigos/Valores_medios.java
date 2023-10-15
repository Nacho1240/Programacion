//El valor medio es un concepto importante en estadística que se utiliza para describir la posición central de un conjunto de números ordenados. En particular, se define como el número que se encuentra en la mitad de dicho conjunto. Si el número de elementos en el conjunto es impar, entonces el valor medio es simplemente el número que se encuentra en la posición central. Sin embargo, si el número de elementos es par, el valor medio corresponde a conjunto de dos elementos que se encuentran en las posiciones centrales.

//El cálculo del valor medio es especialmente útil en situaciones en las que se desea obtener una medida de tendencia central que sea menos sensible a valores extremos o atípicos en el conjunto de datos. Además, es una forma sencilla de describir la posición central de un conjunto de números ordenados.

//En este problema en particular, se le solicita que calcule el valor medio de una lista de números cada vez que se ingresa un número nuevo al conjunto. Esto implica que deberá actualizar el valor medio cada vez que se agrega un número, para asegurarse de que siempre tenga el valor correcto
import java.io.*;
import java.util.*;



public class Solution {

    public static void med(PriorityQueue<Integer> hmax, PriorityQueue<Integer> hmin, int n) {

        

        if ((hmax.size() - hmin.size()) > 1) {

            hmin.add(hmax.poll());
            
      

        } else if ((hmin.size() - hmax.size()) > 1) {
            

            hmax.add(hmin.poll());
            
    

        }

        if (hmax.size() > hmin.size()) {


            System.out.println(hmax.peek());


        } else if (hmax.size() < hmin.size()) {


            System.out.println(hmin.peek());

        } else {
            
            System.out.println(hmax.peek() + "," + hmin.peek());
        }
        
    }

    public static void main(String[] args) {
        
        Scanner scann = new Scanner(System.in);
        
        int N = scann.nextInt();
        
             PriorityQueue<Integer> min = new PriorityQueue<>();
        
        PriorityQueue<Integer> max = new PriorityQueue<>(Collections.reverseOrder());
        
       

        for (int i = 0; i < N; i++) {
            
            int num = scann.nextInt();
            
            if (max.isEmpty()) {
                
                max.add(num);
                
            } else if (num < max.peek()) {
                
                max.add(num);
                
            } else {
                
                min.add(num);
            }
            med(max, min,N);
        }
        scann.close();

        

    }
}
