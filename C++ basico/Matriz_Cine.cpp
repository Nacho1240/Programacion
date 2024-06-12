// A usted como ingenier@ de la Universidad Diego Portales le han solicitado desde uno de los cines más populares
// del país, la creación de un sistema de registro de la ocupación de asientos para sus tan asistidas funciones.
// La empresa le ha encomendado un programa escrito en C++ y que modele las salas como matrices (como
// sugerencia: booleanas) para indicar que asientos están disponibles para la venta.

// En específico debe crear un programa que en primera instancia simule una sala vacía con capacidad de 80
// personas y luego consulte para n clientes, el asiento que desea comprar y asignarlo (solo en el caso que esté
// disponible).

// 1. Se debe solicitar por consola la cantidad de clientes que compraran asientos.

// 2. En caso de no estar disponible el asiento, debe reproducir una advertencia y volver a consultar.

// 3. Finalmente muestre la sala con sus asientos disponibles y ocupados para cuando empiece la función. Utilice 'X'
// para los asientos ocupados y 'O' para los que quedaron libres.


#include <iostream>
#include <cmath>
using namespace std;







int main(){
int cli=0;
bool asientos[8][10];
int fila=0;
int columna=0;

cout << "Ingrese la cantidad de clientes que compraran asientos: ";
cin >> cli;
for(int i=0; i<cli; i++){
cout << "Ingrese la fila del asiento que desea comprar: ";
cin >> fila;
cout << "Ingrese la columna del asiento que desea comprar: ";
cin >> columna;
if(asientos[fila-1][columna-1]==true){
    cout << "El asiento ya esta ocupado, intente con otro asiento" << endl;
    i--;
}
else{
    asientos[fila-1][columna-1]=true;
}
}
for(int i=0; i<8; i++){
    for(int j=0; j<10; j++){
        if(asientos[i][j]==true){
            cout << "X ";
        }
        else{
            cout << "O ";
        }
    }
    cout << endl;
}
return 0;
}