// Joaquín es un universitario obsesionado con el estudio. A él le gusta escribir cada detalle de lo que ve en sus clases en su cuaderno. Por ello, él decidió comprar cuadernos de diferentes tamaños, que simbolizan el grado de dificultad del curso en cuestión. Pero Joaquín tiene un problema: él es muy desordenado y apila sus cuadernos sin importar el grado de dificultad de éstos. Según su método de estudio, él primero estudia las materias de menor grado de dificultad. Con lo cual, al tener su pila de cuadernos desordenada, le es difícil encontrar los cuadernos más pequeños (menor dificultad). Como a Joaquín le gusta complicarse con cosas sencillas, él ideó una excelente forma de ordenar su pila de cuadernos desordenada, Revisar los pasos definidos en la restricción




import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void Ordenar(Stack<Integer> orden) {
        Stack<Integer> auxOrdenado = new Stack<>();

        while (!orden.empty()) {
            int des = orden.pop();

            while (!auxOrdenado.empty() && auxOrdenado.peek() < des) {
                orden.push(auxOrdenado.pop());
            }

            auxOrdenado.push(des);
        }

        while (!auxOrdenado.empty()) {
            System.out.print(auxOrdenado.peek() + " ");
            auxOrdenado.pop();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Stack<Integer> pila = new Stack<>();
        for (int i = 0; i < N; i++) {
            pila.push(sc.nextInt());
        }
        Ordenar(pila);
         while (!pila.empty()) {
            System.out.print(pila.peek() + " ");
            pila.pop();
        }
    }
}

