#include <iostream>
using namespace std;

int main ( )
{
    float promedio, nota;  //0,2 por definir las variables 
    float sumaNotas = 0;   //0,2 por el acumulador
    int notasValidas = 0;  //0,2 pro el contador de notas válidas
    bool seguir = true; 
    while(seguir) //0,2 por la declaración correcta del while (yas sea con bool u otra forma)
    {
        if(notasValidas==3)
        {
            seguir = false; //0,3 por definir correctamente el cierre del while (puede sumar a la correcta declaración)
        }
        else
        {
            cout<<"Ingrese nota "<<notasValidas+1<<": ";  //0,2 por solicitar y almacenar la nota
            cin>>nota;
            
            if(nota<1 or nota>7) //0.6 por la validación de rango y el mensaje (puede validar en nota válida o no válida - Este fue de "no válida")
            {
                cout<<"Ingrese una nota válida. Reintente"<<endl;
            }
            else
            {
                sumaNotas = sumaNotas + nota; //0,3 por la acumulación correcta de las notas para el promedio (suma de las notas)
                notasValidas = notasValidas + 1; //0,3 por la suma (conteo) de la cantidad de notas
            }
        }
    }
    
    promedio = sumaNotas/3; //0,3 por la declaración correcta para obtener el promedio
    cout<<"El promedio de las tres notas válidas ingresadas es: "<<promedio<<endl;  //0,2 por mostrar el resultado
}
