//El torneo de Cell es uno de los torneos más importantes del universo. En este evento, se reúnen algunos de los personajes chilenos más poderosos para competir en una serie de enfrentamientos de artes marciales.

//Para garantizar que el torneo se desarrolle sin problemas, es fundamental contar con un programa que permita procesar la información de los participantes y ordenarlos de manera eficiente. Para lograrlo, se utilizarán técnicas de estructuras de datos y algoritmos que permitan la gestión de la información de manera efectiva.

//El programa debe ser capaz de ordenar a los participantes por su nivel de poder, lo que permitirá crear enfrentamientos justos y emocionantes. De esta manera, se garantiza que los espectadores puedan disfrutar de una competencia de alto nivel en la que todos los participantes tengan las mismas oportunidades de ganar.

//El objetivo final del programa es garantizar que el torneo de Cell se desarrolle de manera fluida y sin problemas, y que los participantes y espectadores (en Tik-Tok) disfruten de una experiencia emocionante e inolvidable.


import java.io.*;
import java.util.*;

public class Solution {
    static class Participante{
        private final String nombre;
        private final int Ki;

        public Participante(String nombre, int poder) {
            this.nombre = nombre;
            this.Ki = poder;
        }

        public String getNombre() {
            return nombre;
        }
        public  int getKi(){
            return Ki;
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        List<Participante> Majin = new ArrayList<>();
        int N = scan.nextInt();
        scan.nextLine();

        for (int i = 0; i < N; i++) {

            Majin.add(new Participante(scan.next(), scan.nextInt()));
        }

        Collections.sort(Majin, Comparator.comparing(Participante::getKi));



        for (Participante peleador : Majin) {
            System.out.println(peleador.getNombre() + " " + peleador.getKi());
        }

    }
}
