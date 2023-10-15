//Imagínate que eres un ingeniero que trabaja en una empresa de telecomunicaciones. Tu trabajo consiste en analizar señales de radio para detectar la mayor interferencia continua y mejorar la calidad de las comunicaciones.

//Se le denomina la mayor interferencia continua a la suma maxima posible de elementos continuos dada una lista de valores de interferencias.

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Tarea {


    //0  4  7  -7  -7  -9  0  -7  0
static int dividepar(int[]Array, int minimo, int maximo){
if(minimo == maximo){
    return Array[minimo];
}   
int medio = (maximo + minimo)/2;
int derecha=0,izquierda=0;
int sumaizquierda=0,sumaderecha=0,temp1=0,temp2=0;


derecha = dividepar(Array, minimo, medio);
izquierda = dividepar(Array, medio+1, maximo);

sumaderecha=Array[medio+1];
sumaizquierda=Array[medio];


for(int i=medio;i>=minimo;i--){
   
    temp1= temp1 + Array[i];

    if(temp1>sumaizquierda){
        sumaizquierda=temp1;
    }
}

for(int i=medio +1;i<=maximo;i++){
    temp2= temp2 + Array[i];

    if(temp2>sumaderecha){
        sumaderecha=temp2;
    }

}

int Solution=izquierda;
if(derecha>Solution){
    Solution = derecha;
}

if(sumaizquierda + sumaderecha > Solution){
Solution = sumaizquierda + sumaderecha;
}


 return Solution;
    
}


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] Array = new int[n];
        for (int i = 0; i < n; i++) {
            Array[i] = scan.nextInt();
        }
        scan.close();

        int Resp = dividepar(Array, 0, n - 1);
        System.out.println(Resp);
    }
}