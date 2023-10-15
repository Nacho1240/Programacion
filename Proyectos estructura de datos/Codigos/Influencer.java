// Los influencers son personas con una gran cantidad de seguidores en redes sociales (RRSS). Por lo general, sus seguidores los admiran y tienden a replicar lo que ellos comparten en sus perfiles de RRSS. Por lo tanto, el objetivo es analizar el comportamiento de una persona en RRSS para determinar su nivel de influencia.

// Para llevar a cabo este análisis, se seleccionará de manera aleatoria una persona de una red social, que estará representada por una matriz de enteros. Luego, esta persona compartirá un post, el cual también será representado por un número entero, en su red social. El propósito es observar cómo reaccionan sus seguidores ante esta publicación.

// Cada seguidor adyacente, es decir, aquellos que se encuentran en posición vertical u horizontal respecto al influencer, será evaluado. Si estos seguidores ya compartían la misma afinidad que el influencer (es decir, tenían el mismo número entero), cambiarán su publicación para reflejar la del influencer (es decir, su número entero se actualizará al nuevo número).

// Posteriormente, este proceso se repetirá para cada persona que haya cambiado su publicación, evaluando su impacto en la red social.

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    
    public static void Adyacente(int[][] matriz, int filaInicio, int columnaInicio, int nuevoValor, int M, int N) {
        
        List<int[]> cola = new ArrayList<>();
    int filas = matriz.length;
    
    int columnas = matriz[0].length;
    

 

    int valorInicio = matriz[filaInicio][columnaInicio];
    
    cola.add(new int[]{filaInicio, columnaInicio});
       boolean[][] Check = new boolean[filas][columnas];
    Check[filaInicio][columnaInicio] = true;
    

    int[][] direcciones = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    

    int indice = 0;

    while (indice < cola.size()) {
        
        int[] celda = cola.get(indice);
        
        int fila = celda[0];
        
        int columna = celda[1];
        

        if (matriz[fila][columna] == valorInicio) {
            
            
            matriz[fila][columna] = nuevoValor;
            

            for (int[] direccion : direcciones) {
                
                
                int nuevaFila = fila + direccion[0];
                
                
                int nuevaColumna = columna + direccion[1];
                

                if (nuevaFila >= 0 && nuevaFila < filas && nuevaColumna >= 0 && nuevaColumna < columnas && 
                    !Check[nuevaFila][nuevaColumna]) {
                    cola.add(new int[]{nuevaFila, nuevaColumna});
                    
                    Check[nuevaFila][nuevaColumna] = true;
                }
            }
        }

       indice++;
    }

        for (int i = 0; i < N; i++) {
            
            for (int j = 0; j < M; j++) {
                
                System.out.print(matriz[i][j] + " ");
            }
            System.out.println();
        }
}
    
    
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        

        
        int N = scan.nextInt();
        
        int M = scan.nextInt();
        

        
        int[][] personas = new int[N][M];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                personas[i][j] = scan.nextInt();
            }
        }

        int X = scan.nextInt();
        int Y = scan.nextInt();
        int Z = scan.nextInt();
 
        
        scan.close();
        
       Adyacente(personas, X, Y, Z, M, N);

     
    }

    
    


}

