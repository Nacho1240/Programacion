// En un fascinante mundo mágico, existen diferentes aldeas habitadas por seres especiales conocidos como los Portadores de la Luz. Cada Portador de la Luz tiene una edad única que refleja su sabiduría y poder. Estas edades están registradas en un antiguo pergamino que contiene una lista de longitud N.

// Sin embargo, solo cuando los Portadores de la Luz se agrupan en subgrupos de tamaño K se revela su verdadero potencial. En cada subgrupo, la "edad significativa" se determina calculando la diferencia entre la mayor y la menor edad presente.

// Tu misión es descubrir la "edad significativa" más baja entre todos los subgrupos de tamaño K y proporcionar este valor crucial. Al hacerlo, podrás revelar el poder oculto de estos seres mágicos y desbloquear nuevas posibilidades para su mundo.

import java.io.*;
import java.util.*;

public class Solution {

    public static int Greedy(int array[], int N, int K) {
        
        int diferencia = 0;
        
        Arrays.sort(array);

        int Min = array[K-1] - array[0];
        

        for (int i = 1; i <= N - K; i++) {
            
            diferencia = array[i + K-1] - array[i];
            
            if (Min > diferencia) {
                
                Min = diferencia;
            }
        }

        return Min;
    }

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int N = scan.nextInt();
        
        int K = scan.nextInt();
        
        int[] luz = new int[N];

        for (int i = 0; i < N; i++) {
            
            luz[i] = scan.nextInt();
        }
        scan.close();
        
        int resp = Greedy(luz, N, K);

        System.out.println(resp);
    }
}