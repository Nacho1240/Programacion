// Estás trabajando en un nuevo software de jardinería. En este programa, cada planta en el jardín virtual es representada por un número entero único y el jardín en sí se representa como un árbol binario de búsqueda (BST). Un BST es un árbol binario en el que, para cada nodo, cualquier descendiente del hijo izquierdo tiene un valor estrictamente menor que el valor del nodo y cualquier descendiente del hijo derecho tiene un valor estrictamente mayor.

// El software guarda la estructura del jardín en dos formatos particulares de recorrido de árbol. Los recorridos de árbol pueden ser de tres tipos:

// Preorden: Registra el valor del nodo actual primero, luego recorre el hijo izquierdo del nodo y finalmente recorre el hijo derecho.
// Inorden: Recorre el hijo izquierdo del nodo primero, luego registra el valor del nodo actual y finalmente recorre el hijo derecho.
// Postorden: Recorre el hijo izquierdo del nodo primero, luego recorre el hijo derecho y finalmente registra el valor del nodo actual.
// Debes escribir una función que tome dos listas de enteros y reconstruya el \textbf{BST}, devolviendo la impresión de los elementos en \textbf{PREORDER}. Estas listas representan dos recorridos diferentes del mismo \textbf{BST} (\textbf{INORDER} y \textbf{POSTORDER} respectivamente).
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    static void preOrder(int[] in, int[] post) {
        int size = in.length;
        
        if (size == 0) {
            return;
        }

        int root = post[size  -  1];
        int temp = 0;
        
        while (temp < size) {
            if (root == in[temp]) {
                break;
            } else {
                temp++;
            }
        }

        System.out.print(in[temp] + " " );

        preOrder(Arrays.copyOfRange(in, 0, temp), Arrays.copyOfRange(post, 0, temp));

        preOrder(Arrays.copyOfRange(in, temp + 1, size), Arrays.copyOfRange(post, temp, size - 1));
        
    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        int[] I = new int[n];
        int[] P = new int[n];
                    
        
       for(int i=0; i<n; i++){
        I[i]=scan.nextInt();
       }
       for(int i=0; i<n; i++){
        P[i]=scan.nextInt();
       }
       
       preOrder(I, P);
    }
}