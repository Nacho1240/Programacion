#include<iostream>
#include<cmath>
using namespace std;

// Pedir al usuario crear un arreglo de tamaño N que contendrá solo números pares que el mismo ingrese, en caso de ingresar un impar debe infomarlo.
//  Luego, debe imprimir solo los números que sean mayores que el número del índice anterior (el primer elemento siempre lo imprime).

int main(){
    int N;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> N;
    int arreglo[N];
    for(int i = 0; i < N; i++){
        cout << "Ingrese un número par: ";
        cin >> arreglo[i];
        if(arreglo[i] % 2 != 0){
            cout << "El número ingresado no es par." << endl;
            i--;
        }
    }
    cout << "Los números mayores que el número del índice anterior son: " << endl;
    cout << arreglo[0] << endl;
    for(int i = 1; i < N; i++){
        if(arreglo[i] > arreglo[i-1]){
            cout << arreglo[i] << endl;
        }
    }

return 0;
}



