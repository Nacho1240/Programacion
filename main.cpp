#include <iostream>
using namespace std;

int main()
{
   int m=0; 
    
    cout<<"seleccione el numero de la respuesta "<<endl;
cout<<" 1-Arreglo del 1 al 1000 "<<endl;
cout<<" 2-Espacios de arreglo "<<endl;1
cout << " 6-Emilio y su inteligencia " << endl;


cin>>m;

    if(m==1){
        //llenar arreglo ejercicio 1)
    int arr[1000];
    int promedio=0;
    int suma=0;
        arr[0]=0;
    for(int i=0;i<1000;i++){
    arr[i]=i;
    //calcular suma
    suma=suma+arr[i];
    }
   promedio=suma/1000;
    cout<<"la suma es: "<<suma<<endl;
        cout<< "el promedio es:"<<promedio<<endl;

    }
    
    //ejercicio 2)
   if(m==2){
    int espacio;
    int temp=0;
    int contador=0;
    cout<<" Ingrese el tamaño para un arreglo "<<endl;
    cin>>espacio;
    int arr[espacio];
    cout<<" Ingrese dicha cantidad de numeros "<<endl;
   
    
    for(int i=0;i<espacio;i++){
        cin>>arr[i];
    if(arr[i]==5 || arr[i]==24 ){cout<<" Numero invalido "<<endl;}
    
    }
    for(int i=0;i<espacio;i++){
     for(int j=0;j<espacio;j++){
        if(arr[i]==arr[j]){
            contador++;}
            
     }
    }
    contador=contador-espacio;
    cout<<" El contador de repetidas es: "<<contador<<endl;
   }
    

    //j=i contador++
    




   //respuesta 6











   
    return 0;
}
