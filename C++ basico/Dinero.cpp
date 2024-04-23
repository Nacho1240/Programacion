/*

Escriba un programa en C++ que sirva para determinar la cantidad de dinero que debe recibir cada familia
por concepto de becas escolares.
El monto total de las becas se calcula de la siguiente manera:

-Solo reciben becas las familias cuyos ingresos totales sean menores que $500.000 CLP.

-Por cada hijo entre 6 y 24 años (que esté estudiando), la familia recibe $66.000 CLP.

-Los hijos menores de 10 años tiene un monto extra de $30.000 CLP.

-Los hijos mayores de edad, reciben una beca de movilización de $17.000 CLP.



El programa debe consultar el nombre del jefe de familia, cuánto es la suma total de los ingresos y solo si
le corresponde el beneficio, pasar a las siguientes preguntas.

Para el cálculo debe preguntar cuántos hijos entre 6 y 24 años, que están estudiando, tiene la familia y
posteriormente, la edad de cada hijo.


A medida que se ingresa la edad, el programa debe reportar el monto que recibe por cada hijo y al final
del programa el monto total.

*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    string jefe;
    int ingresos, hijos, edad, monto_beca, monto_total = 0;
    cout << "Ingrese el nombre de el/la jefe de familia: "; getline(cin, jefe);
    cout << "Ingrese ingresos totales: "; cin >> ingresos;
    if(ingresos >= 500000){
        cout << "La familia no recibe el beneficio.";
    }
    else{
        cout << "Ingrese cantidad de hijos entre 6 y 24 anios estudiando y son miembros de la familia: "; cin >> hijos;
        for(int it = 1;it<=hijos;it++)
        {
            cout << "Ingrese la edad del hijo " << it << ": "; cin >> edad;
            monto_beca = 66000;
            if(edad < 10) monto_beca = monto_beca + 30000;
            else if(edad >= 18) monto_beca = monto_beca + 17000;
            cout << "Beca hijo " << it << ": " << monto_beca << endl;
            monto_total = monto_total + monto_beca;
        }
        cout << "La suma total de las becas es de $" << monto_total << " CLP";
    }
    return 0;
}