//Existe una famosa serie de anime la cual posee un gran fandom, algunos la creen sobrevalorada, el resto también. Lo llamativo de esta es que existe el concepto de la fusión el cual logro captar su atención, esta consiste en que dos personajes fusionan sus características formando un único personaje, las características de los personajes esta representada por una serie de números ordenados de menor a mayor, con lo cual el resultado de la fusión es una única serie de números que contiene las características de ambos personajes ordenadas de menor a mayor.

//Debe completar la funcion "fusion"





import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Queue<Integer> N1 = new LinkedList<>();
        Queue<Integer> N2 = new LinkedList<>();
        int x = scan.nextInt();


        for (int i = 0; i < x; i++) {
            N1.add(scan.nextInt());
        }
        int y = scan.nextInt();

        for (int j = 0; j < y; j++) {
            N2.add(scan.nextInt());
        }

        Queue<Integer> resp = new LinkedList<>();

       
            while (!N2.isEmpty() && !N1.isEmpty()) {


                if (N2.isEmpty()) {
                    
                    resp.add(N1.poll());
                    
                } else if(N1.isEmpty()) {
                    
                    resp.add(N2.poll());
                    
                } else if (N1.peek() < N2.peek()) {
                    
                    resp.add(N1.poll());
                    
                }else if(N1.peek() > N2.peek()){
                    
                    resp.add(N2.poll());
                }else{
                    resp.add(N1.poll());
                    resp.add(N2.poll());
                }
            }
        while(N1.isEmpty()==false){
             resp.add(N1.poll());
        }
        
        while(N2.isEmpty()==false){
             resp.add(N2.poll());
        }
        

int N=resp.size();

            for (int k = 0; k < N; k++) {
                System.out.print(resp.poll() + " ");
            }
        
    }
}