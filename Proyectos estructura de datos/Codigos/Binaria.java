// En un reino llamado Binaria, se te ha entregado una matriz binaria de N filas y M columnas.

// Tienes la habilidad de cambiar el estado de cada elemento de una fila o columna seleccionada: si es un 0, puedes convertirlo en un 1, y si es un 1, puedes convertirlo en un 0.
// No hay límite en la cantidad de operaciones que puedes realizar.
// Tu objetivo es encontrar la combinación de cambios que maximice la suma de los números obtenidos al interpretar cada fila como la representación binaria de un número. Deberás proporcionar el valor numérico resultante de la suma máxima obtenida.
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Solution {
    
    public static int Binario(int[][] Array, int N, int M) {
        int Suma = 0;

        for (int i = 0; i < N; i++) {
            if (Array[i][0] == 0) {
                for (int j = 0; j < M; j++) {
                    Array[i][j] = 1 - Array[i][j];
                }
            }
        }

        
        for (int j = 0; j < M; j++) {
            
            int Contador = 0;
            
            for (int i = 0; i < N; i++) {
                
                if (Array[i][j] == 1) {
                    
                    Contador++;
                }
            }
            if (Contador < N - Contador) {
                
                for (int i = 0; i < N; i++) {
                    
                    Array[i][j] = 1 - Array[i][j];
                }
            }
        }

        for (int i = 0; i < N; i++) {
            
            int Temp = 0;
            
            for (int j = 0; j < M; j++) {
                
                Temp = Temp + (Array[i][j] * (int) Math.pow(2, M - j - 1));
            }
            Suma = Suma + Temp;
        }

        return Suma;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int M = scanner.nextInt();

        int[][] Realm = new int[N][M];

        for (int i = 0; i < N; i++) {
            
            for (int j = 0; j < M; j++) {
                
                Realm[i][j] = scanner.nextInt();
            }
        }
        scanner.close();

        int Resp = Binario(Realm, N, M);

        System.out.println(Resp);
    }
}

