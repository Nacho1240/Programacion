//objetivo: Calcular Areas de las siguientes figuras.

#include <iostream>
using namespace std;

int main (){

int respuesta=0;


cout<<" ingrese la figura de la cual desea el área: "<<endl;
cout<<" 1)Triangulo "<<endl;
cout<<" 2)Cuadrado "<<endl;
cout<<" 3)Circulo "<<endl;
cout<<" 4)Rectangulo "<<endl;
cin>>respuesta;

switch(respuesta){
    case(1):
cout<<"ingrese la base del triangulo: "<<endl;
int base;
cin>>base;
cout<<"ingrese la altura del triangulo: "<<endl;
int altura;
cin>>altura;
cout<<"el area del triangulo es: "<<(base*altura)/2<<endl;


    break;

case(2):
cout<<"ingrese el lado del cuadrado: "<<endl;
int lado;
cin>>lado;
cout<<"el area del cuadrado es: "<<lado*lado<<endl;

    break;


    case(3):

cout<<"ingrese el radio del circulo: "<<endl;
int radio;
cin>>radio;
cout<<"el area del circulo es: "<<3.1416*(radio*radio)<<endl;

    break;

    case(4):
cout<<"ingrese la base del rectangulo: "<<endl;
int base1;
cin>>base1;
cout<<"ingrese la altura del rectangulo: "<<endl;
int altura1;
cin>>altura1;
cout<<"el area del rectangulo es: "<<base1*altura1<<endl;

    break;

    default:
    cout<<"opcion no valida"<<endl;
    break;



}
return 0;
}
