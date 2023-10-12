#include <iostream>
using namespace std;

int main ( )
{
    int X,N; //0,4 por la declaración de variables
    cout<<"Ingrese la tabla que desea visualizar --> ";
    cin>>X; //0,4 por solicitar y almacenar X
    cout<<"Ingrese hasta que numero desea ver la tabla de multiplicar --> ";
    cin>>N; //0,4 por solicitar y almacenar N
    
    cout<<"===="<<endl;
    for(int i=1;i<=N;i++) //0,9 por la definición correcta del FOR (puede haber variantes)
    {
      cout<<X<<" * "<<i<<" = "<<X*i<<endl; //0,9 por la definición correcta de la salida utilizando concatenación (se debe visualizar el resultado correcto)
    }
    cout<<"===="<<endl;
}
