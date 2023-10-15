//Estás avanzando en la carrera y te das cuenta que necesitas buscar práctica universitaria, sientes que gracias a todo el estudio que te han dado las tareas de EDDA estás listo para encontrar la práctica que quieras. Después de mucho buscar y muchas desilusiones sientiendo que nadie te quiere dar práctica, gracias al profesor Yerko, que es una de las personas mas importantes en la empresa que trabaja, te ha conseguido la entrevista y te ha dado un consejo crucial: en la entrevista, te van a pedir que resuelvas un problema de programación. Te da un adelanto del problema y te explica que tendrás que escribir un programa que permita crear un subarreglo recursivo de un arreglo de longitud n, dado el punto de partida y la longitud del subarreglo.

//Queriendo prepararte para la entrevista, decides realizar este problema de programación, después de mucho buscar como realizar este problema en Hackerrank te das cuenta que lo estás leyendo, por lo que decides hacerlo.


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

     public static int[] Subaray(int[] Ar, int m, int s) {

        if(m >= Ar.length){
            m = 0;
        }
        if (s == 0) {
            return new int[0];
        }

        int[] sub = Subaray(Ar, m + 1, s - 1);

        int[] resp = new int[sub.length + 1];

        resp[0] = Ar[m];

        for (int i = 0; i < sub.length; i++) {

            resp[i + 1] = sub[i];
        }
        return resp;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int S = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
       int[]Resp = Subaray(arr, M, S);
        
        for(int i=0; i<Resp.length;i++){
            System.out.print(Resp[i] + " ");
        }
    }


}