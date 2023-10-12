#include <iostream>
using namespace std;

int main ()
{
    float N = 3;
    float nota1;
    float nota2;
    float nota3;
    
    bool seguir = true;
    
    
    while (seguir)
    {
    
        cout << "Ingrese la primera nota --> " << endl;
        cin >> nota1;
        
        if (1 > nota1 || nota1 > 7)
            {
                seguir = false;
            
                cout <<"Ingrese una nota valida --> ";
                cin >> nota1;
            }
     
        cout << "Ingrese la segunda nota --> ";
        cin >> nota2;
        
        if (1 > nota2 || nota2 > 7)
        {
            seguir = false;
            
            cout <<"Ingrese una nota valida --> ";
            cin>> nota2; 
        }
    
        
        cout << "Ingrese la tercera nota --> ";
        cin >> nota3;
        
        if (1 > nota3 || nota3 > 7)
        {
            seguir = false;
            
            cout << "Ingrese una nota valida --> ";
            cin >> nota3;
        }
     
            
    }
    
    float promedio = (nota1 + nota2 + nota3) / N;
    
    cout <<"El promedio de las 3 notas es: "<< promedio << endl;

    return 0;

}