#include <iostream>
using namespace std;

int main()
{
	//Solicitar la cantidad de sacos - 0,4pts
    int cantSacos;
    cout<<"Ingrese la cantidad de sacos a vender --> ";
    cin>>cantSacos;
    
    //Libras que comprende la cantidad a vender -- 0,7 por todo lo que involucra (uso de datos float)
    float libras = float(cantSacos)/0.453592*25;
    cout<<"La cantidad ingresada de sacos corresponde a "<<libras<<" libras del producto"<<endl;
    
    //Cantidad en pesos chilenos a cobrar -- 0,7 por todo lo que involucra (uso de datos int)
    int pesos = cantSacos*4500;
    cout<<"La cantidad ingresada de sacos corresponde a "<<pesos<<" pesos chilenos"<<endl;
    
    //Cantidad de dólares a cobrar -- 0,7 por todo lo que involucra (uso de datos float... ignorar cantidad de decimales)
    float dolares = float(pesos)/810.73;
    cout<<"La cantidad ingresada de sacos corresponde a "<<dolares<<" dolares"<<endl;
    
    //Último mensaje -- 0,3pts
    cout<<"Le voy a vender Oxido de Calcio a su papa, a su mama y a su perro y si no tiene perro, le regalo uno para que le compre a el tambien"<<endl;
    
    //Sumar 0,2pts por tener todo correcto
}
