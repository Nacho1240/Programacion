// El Torneo de Cell se ha convertido en uno de los eventos más esperados en el universo de TikTok. Este año, los organizadores han decidido dar un giro al proceso de selección de los participantes, generando así el Torneo de Cell Z. Ahora, los participantes serán ordenados utilizando un Árbol de Búsqueda Binario (BST), basándose en el poder que poseen. Cada nodo del BST representa a un participante, con su puntaje de poder como la clave del nodo y su nombre asociado a ese nodo.

// El torneo implementa estas reglas con el objetivo de asegurar que los más fuertes se enfrenten contra los más fuertes y los más débiles contra los más débiles, siempre y cuando los participantes sean ingresados al BST de manera balanceada.

// Dado que estás interesado en realizar apuestas, te gustaría saber quién se encuentra en un nivel superior a un participante dado. En particular, estás interesado en conocer cuál es el participante más cercano con el que podrían enfrentarse dos participantes dados.
import java.io.*;
import java.util.*;


class Node {

    String nombre;
    int poder;
    Node izq;
    Node der;

    Node(String nombre, int poder) {

        this.nombre = nombre;

        this.poder = poder;

        this.izq = null;

        this.der = null;
        
    }
}

public class Solution {
    




  public static Node inser(Node hijo, String nombre, int poder) {
    if (hijo == null) {
        return new Node(nombre, poder);
    }
    if (poder < hijo.poder) {
        hijo.izq = inser(hijo.izq, nombre, poder);
    } else {
        hijo.der = inser(hijo.der, nombre, poder);
    }
    return hijo;
}





    public static Node Padre(Node hijo, Node node1, Node node2) {
        if (hijo == null) {
            return null;
        }
        if (hijo.poder > node1.poder && hijo.poder > node2.poder) {
            return Padre(hijo.izq, node1, node2);
        }
        if (hijo.poder < node1.poder && hijo.poder < node2.poder) {
            return Padre(hijo.der, node1, node2);
        }
        return hijo;
    }




    public static Node findNode(String nombre,Node hijo ) {
        if (hijo == null) {
            return null;
        }
        if (hijo.nombre.equals(nombre)) {
            return hijo;
        }
        Node foundNode = findNode(nombre, hijo.izq);
        if (foundNode == null) {
            foundNode = findNode(nombre, hijo.der);
        }
        return foundNode;
    }



    public static String Cercanos(Node hijo, String n1, String n2) {
        Node node1 = findNode(n1, hijo);
        Node node2 = findNode(n2,hijo );

        Node Tabaco = Padre(hijo, node1, node2);
        return Tabaco.nombre;
    }




    public static void main(String[] args) {
        
       
        
        
        
        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();
        
        Node hijo = null;

        for (int i = 0; i < N; i++) {
            
            String nombre = scan.next();
            
            int poder = scan.nextInt();
            
            hijo = inser(hijo, nombre,poder);
        }

        String peleadorA = scan.next();
        String peleadorB = scan.next();

            scan.close();

        String resp = Cercanos(hijo, peleadorA, peleadorB);

        System.out.println(resp);
    }
}
