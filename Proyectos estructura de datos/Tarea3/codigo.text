import java.util.Scanner;

public class codigo {

    public static int DivideyConquista(int[] arr, int Inicio, int Final) {
    if (Inicio == Final) { 
        return arr[Inicio];
    }
    
    int mid = (Inicio + Final) / 2;
    int DerMax = DivideyConquista(arr, Inicio, mid);
    int IzqMax = DivideyConquista(arr, mid + 1, Final);
    
    int IzqSuma = arr[mid];
    int DerSuma = arr[mid + 1];
    int suma = 0;
    
    for (int i = mid; i >= Inicio; i--) {
        suma += arr[i];
        if (suma > IzqSuma) {
            IzqSuma = suma;
        }
    }
    
    suma = 0;
    for (int i = mid + 1; i <= Final; i++) {
        suma += arr[i];
        if (suma > DerSuma) {
            DerSuma = suma;
        }
    }
    
    int SUMA = IzqSuma + DerSuma;
    
    int maximo = IzqMax;
    if (DerMax > maximo) {
        maximo = DerMax;
    }
    if (SUMA > maximo) {
        maximo = SUMA;
    }
    
    return maximo;
}

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        int Maximo = DivideyConquista(arr, 0, n - 1);
        System.out.println(Maximo);
    }
}