#include <iostream>
using namespace std;
int mayor(int *a, int *b){
    if(*a<*b){ return *b;
    }else
    return *a;
}

int main(){
int v=0;
cout<<" Escoja la solucion que desea observar: "<<endl;
cout<<" 1) Declare  una  variable  de  un  numero  entero  que  valga  5 "<<endl;
cout<<" 2) Programe  una  funcion  que  tome  dos  punteros  de  numeros  enteros "<<endl;
cout<<" 3) Usando  punteros,  cree  una  funcion  que  reciba  un  arreglo "<<endl;
cout<<" 4) Usando punteros, y dado un arreglo de espacio n de enteros, calcular su promedio "<<endl;
cin>>v;

if(v==1){ 
    int *a;
int b=5;
a=&b;
cout<<*a<<endl;
     }
if(v==2){
int a=0;
int b=0;
int *c;
int *d;
c=&a;
d=&b;
cout<<" Escriba los numeros a comparar: "<<endl;
cin>>a>>b;
cout<<" El mayor es:"<<mayor(c,d)<<endl;


}
if(v==3){
    
}


    return 0;
}