// En un popular juego de construcción basado en bloques, los jugadores tienen la tarea de construir sus propias viviendas. A medida que avanzan en el juego, estas casas crecen y se expanden. Una forma de medir dicho crecimiento es evaluando la cantidad de "chunks" utilizados, siendo el "chunk" una unidad de medida en el juego. Ahora, su tarea consiste en encontrar la casa que ocupe la mayor cantidad de "chunks" en total.

// Para llevar a cabo esta tarea, contamos con una matriz que representa los "chunks". En esta matriz, hay dos valores posibles: 0, que indica que no hay nada construido en ese "chunk", y 1, que indica que esa porción del terreno forma parte de una casa. Es importante tener en cuenta que una casa puede estar compuesta por varios "chunks", pero únicamente aquellos "chunks" adyacentes de forma vertical u horizontal se consideran una conexión válida para que se representen como parte de una misma casa.

// Al finalizar, se espera que usted entregue la suma total de "chunks" de la casa más grande encontrada en la matriz.




import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Solution {
    public static int DFS(int[][] matriz, int i, int j, boolean[][] Check) {
        
        int F = matriz.length;
        
        int C = matriz[0].length;
        
        int temp = 0;
        
       
        
        Check[i][j] = true;
             temp = 1;
        int[][] adyacentes = {{i - 1, j}, {i + 1, j}, {i, j - 1}, {i, j + 1}};
        
        for (int[] chunk : adyacentes) {
            
            int M = chunk[0];
            
            int N = chunk[1];
            
            if (0 <= M && M < F && 0 <= N && N < C) {
                
                if (matriz[M][N] == 1 && Check[M][N] == false) {
                    
                    temp += DFS(matriz, M, N, Check);
                }
            }
        }

        return temp;
    }

    public static int Casa(int[][] matriz) {
        
        int F = matriz.length;
        
        int C = matriz[0].length;
        
        boolean[][] Check2 = new boolean[F][C];
        
        int length = 0;

        for (int i = 0; i < F; i++) {
            
            for (int j = 0; j < C; j++) {
                
                if (matriz[i][j] == 1 && Check2[i][j] == false) {
                    
                    int Size = DFS(matriz, i, j, Check2);
                    
                    length = Math.max(length, Size);
                }
            }
        }

        return length;
    }

    public static void main(String[] args) {
        Scanner scann = new Scanner(System.in);
        
        int N = scann.nextInt();
        
        int M = scann.nextInt();
 
        int[][] matriz = new int[N][M];
       
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                matriz[i][j] = scann.nextInt();
            }
        }
        scann.close();

        int resp = Casa(matriz);

        System.out.println(resp);
    }
}