/*
Pida 2 números por consola y muestre el
resultado de su multiplicación (sin usar *
como operatoria).

*/


#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int contador = 0;
int a, b;
cout << "Ingrese el primer número: "<<endl;
cin >> a;
cout << "Ingrese el segundo número: "<<endl;
cin >> b;

for(int i = 1; i < a; i++)
{
contador = contador + b;
}
cout << "a*b=" << contador << endl;
return 0;
}

