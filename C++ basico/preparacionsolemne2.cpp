#include <iostream>
using namespace std;
int Consumos[100];
float Propinas[100];
void cero(int arr[100],float arr2[100]){
for(int i=0; i<100;i++){
    arr[i]=0;
    arr2[i]=0;
}
    
}

void AgregarConsumo(int arr1[100],float arr2[100], float montoventa, float porcentaje){
    for(int i=0;i<0;i++){
        if(arr1[i]==0){
            arr1[i]=montoventa;
            arr2[i]=montoventa*(porcentaje/100);
        }
    }
}





void MontoPropinas(int arr1[100],float arr2[100]){
    float suma=0;
    float propina;
    for(int i=0;i<100;i++){
        suma=arr2[i]+suma;

    }
}





int main(){

int temp=0;
int consumo=0;
int propina=0;
float porcentaje;

cout<<" Escoja la opcion preferida: "<<endl;
cout<<"1-a) Agregar consumo "<<endl;
cout<<"2-b) Obtener monto propinas "<<endl;
cout<<"3-c) salir "<<endl;
cin>>temp;
if(temp==1){
cero(Consumos[100], Propinas[100]);
cout<<" Ingrese el valor de consumo "<<endl;
cin>>consumo;
 cout<<" Ingrese el porcentaje de Propina "<<endl;
 cin>>porcentaje;
 AgregarConsumo(consumos[100], propinas[100],consumo,porcentaje);
}else
if(temp==2){
MontoPropinas(Consumos[100],Propinas[100]);
}
if(temp==3){
cout<<"Finalizando Programa...."<<endl;
}

}