//Ejercicios para repasar vectores
//1,a) Crear un vector que contenga los múltiplos de 3 entre 100 y 150.(finalizado)
//1,b) Usando un nuevo ciclo, recorra el vector e imprima el contenido.(finalizado)
#include <iostream>
#include <vector>
using namespace std;





int main(){
int x=0;


cout<<" Seleccione la respuesta que desea obtener "<<endl;
cin>>x;
if(x==1){
vector<int>enteros;
for(int i=100; i<150; i++){
    if(i%3==0){
        enteros.push_back(i);
    }
}
for(int j=0; j<enteros.size();j++){
    cout<<enteros.at(j)<<endl;
}
    return 0;
}
//2)Crear y llenar un vector con 6 valores reales ingresados por el usuario. 
//Recorra el vector e imprima el mayor y menor valor. 
//Elimine el contenido del vector a excepción de estos dos valores, hágalo de dos formas distintas.  
if(x==2){



vector<int>Reales;


int t=0;

cout<<" Ingrese 6 valores Reales "<<endl;
for(int i=0; i<6; i++){
cin>>t;
Reales.push_back(t);
}
int p=Reales[0];
int f=Reales[0];

for(int i=0; i<6; i++){
if(f<Reales[i]){
    f=Reales[i];
}
if(Reales[i]<p){
    p=Reales[i];
}
}
cout<<" El mayor es: "<<f<<endl;
cout<<" El menor es: "<<p<<endl;


return 0;
}

