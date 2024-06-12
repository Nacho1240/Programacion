// Se le solicita crear un arreglo lineal de tamaño n que solicite por consola tanto el tamaño como el contenido del arreglo, 
// posteriormente debe realizar una función que ordene el contenido del arreglo de forma descendiente, 
// debe especificar si paso el arreglo por valor o por referencia.
//bonus: hacer lo mismo con un arreglo bi dimencional
#include <iostream>

using namespace std;



float SortV(float array[], int n){
    float temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }


    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}

float SortR(float array[], int &n){
    float temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
   for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}






float SortBi( int n, int m){
    float temp;
    float array[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                for(int l = 0; l < m; l++){
                    if(array[i][j] > array[k][l]){
                        temp = array[i][j];
                        array[i][j] = array[k][l];
                        array[k][l] = temp;
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main(){


cout<<"Seleccione la Opcion que desea realizar:"<<endl;
cout<<"1. Ordenar un arreglo Lineal por Valor"<<endl;
cout<<"2. Ordenar un arreglo Lineal por Referencia"<<endl;
cout<<"3. Ordenar un arreglo Bi Dimencional"<<endl;
int opcion;
cin>>opcion;

if(opcion == 1){
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    float array[n];
    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor de la posicion " << i << ": ";
        cin >> array[i];
    }
    SortV(array, n);
}else if(opcion == 2){
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    float array[n];
    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor de la posicion " << i << ": ";
        cin >> array[i];
    }
    SortR(array, n);
}else if(opcion == 3){
    int n, m;
    cout << "Ingrese el tamaño de las filas: ";
    cin >> n;
    cout << "Ingrese el tamaño de las columnas: ";
    cin >> m;
    SortBi(n, m);
}else{
    cout << "Opcion no valida" << endl;
}












    return 0;
}