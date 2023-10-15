// En el mundo de la lingüística, El niño poeta se encontró con un desafío intrigante propuesto por el famoso antipoeta Nicanor Parra. Descubrió que había un conjunto de palabras que compartían exactamente las mismas letras, independientemente de su frecuencia o ubicación en la palabra. Fascinado por esta peculiaridad, decidió desarrollar un algoritmo para resolver este enigma lingüístico.

// El algoritmo de el niño poeta tomaría un conjunto de N palabras y buscaría agruparlos en listas que contengan exactamente las mismas letras, sin importar su frecuencia de aparición o posición en la palabra. Además, las listas se mostrarían en el orden en que las palabras fueron analizadas. Con su algoritmo, El niño poeta esperaba descubrir la conexión entre estas palabras y revelar el misterio oculto.
import java.util.*;

public class Solution {
    public static String letras(String word) {
        boolean[] Abc = new boolean[26];

        for (int i = 0; i < word.length(); i++) {
            Abc[word.charAt(i) - 'a'] = true;
        }

        String key = "";

        for (int j = 0; j < 26; j++) {
            if (Abc[j] == true) {
                key = key + (char) (j + 'a');
            }
        }

        return key;
    }

    public static void facinante(String words[]) {
        int n = words.length;

        LinkedHashMap<String, ArrayList<Integer>> hach = new LinkedHashMap<>();

        for (int i = 0; i < n; i++) {
            String key = letras(words[i]);

            if (hach.containsKey(key)) {
                ArrayList<Integer> tenpo = hach.get(key);
                tenpo.add(i);
                hach.put(key, tenpo);
            } else {
                ArrayList<Integer> tenpo = new ArrayList<>();
                tenpo.add(i);
                hach.put(key, tenpo);
            }
        }

        for (Map.Entry<String, ArrayList<Integer>> entry : hach.entrySet()) {
            ArrayList<Integer> indices = entry.getValue();

            for (Integer index : indices) {
                System.out.print(words[index] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner Escan = new Scanner(System.in);
        int x = Escan.nextInt();
        String[] palabra = new String[x];

        for (int i = 0; i < x; i++) {
            palabra[i] = Escan.next();
        }
        Escan.close();

        facinante(palabra);
    }
}
