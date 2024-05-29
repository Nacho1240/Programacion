#include<iostream>
#include<cmath>
using namespace std;
// Emilio es ingeniero. Emilio realiza estudios en base a mediciones. Emilio sabe que, para calcular un promedio
// de una serie de mediciones no se debe considerar el mayor ni el menor de los valores. Emilio es un buen
// ingeniero. Para que usted sea como Emilio, se le pide que haga un programa que retorne el promedio como
// los calcula Emilio. Genere un arreglo que contenga los valores de las mediciones (ingresadas por un usuario) y muestre el promedio.

int main(){
int n =0;
cout<<"Ingrese la cantidad de mediciones: "<<endl;
cin>>n;

int array[n];
int min =array[0];
int max = array[0];
float sum = 0;
int posmax = 0;
int posmin = 0;

for(int i=0; i<n; i++){
    cout<<"Ingrese la medicion "<<i+1<<": ";
    cin>>array[i];
}
for(int i=0; i<n; i++){
if(min>array[i]){
    min = array[i];
    posmin = i;
}
}
for(int i=0; i<n; i++){
if(max<array[i]){
    max = array[i];
    posmax = i;
}
}
for(int i=0; i<n; i++){
    if(i!=posmax && i!=posmin){
        sum+=array[i];
    }
}
cout<<"El promedio de las mediciones es: "<<sum/(n-2)<<endl;//si lo dividen por n se considera correcto

return 0;
}

