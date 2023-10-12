import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

public static int Binario( int[][]Array,int N ,int M){
int Suma = 0;
int Contador = 0;
        for (int i = 0; i < N; i++) {
            
            if (Array[i][0] == 0) {
                for (int j = 0; j < M; j++) {
                    Array[i][j] = 1 - Array[i][j];
                }
            }
        }

        for (int j = 1; j < M; j++) {

            

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
                Temp += Array[i][j] * (int) Math.pow(2, M - j - 1);
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
        
        int Resp = 0;
        Resp = Binario(Realm, N, M);
       
        System.out.println(Resp);
    }
}

