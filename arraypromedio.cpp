#include <iostream>
using namespace std;
int main(){
int n=0;
int m=0;
int suma=0;
cout<<" ingrese cuantos valores "<<endl;
cin>>m;
cout<<" ingrese medidas "<<endl;
int medidas[m];
for(int i=0;i<m;i++){
cin>>medidas[i];
 }
for(int i=0;i<m;i++){
suma=suma + medidas[i];
}
double promedio=suma/m;
cout<<"el promedio es:" <<promedio<<endl;
cout<<"la suma es:"<<suma<<endl;



    return 0;
}
