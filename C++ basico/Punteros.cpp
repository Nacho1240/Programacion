// Programe una función tipo void que reciba 3 punteros de números
// enteros y modifique aquellas variables de la siguiente forma:


//  1. La primera variable debe ser la suma de las tres variables.

// 2. La segunda variable debe contener el resultado de la primera variable elevada a la tercera variable.

// 3. La tercera variable debe contener la suma de la primera variable con la tercera elevada a la resta de la segunda menos la primera.


#include <iostream>
using namespace std;

void operaciones(int *a, int *b, int *c){
    *a = *a + *b + *c;
    *b = *a * *c;
    *c = *a + (*c * (*b - *a));
}

int main(){
    int a = 1, b = 2, c = 3;
    operaciones(&a, &b, &c);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

