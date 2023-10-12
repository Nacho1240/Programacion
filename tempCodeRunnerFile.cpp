#include <iostream>
using namespace std;
int especialidades[5];
void ConteoPacientes(int pacientes, int especialidades[5]){
int temp=0;
for(int j=0;j<pacientes;j++){
    especialidades[j]=0;
}
cout<<"Bienvenido al sector de especialidades, por favor seleccione la especialidad en la cual se atendio: "<<endl;
for(int i=0;i<pacientes;i++){
cout<<"1)cardiologia"<<endl;
cout<<"2)medicina genera"<<endl;
cout<<"3)obstetricia"<<endl;
cout<<"4)infectologia"<<endl;
cout<<"5)neumologia"<<endl;
cin>>temp;

if(temp==1){
    especialidades[0]++;
}else
if(temp==2){
    especialidades[1]++;
}else
if(temp==3){
    especialidades[2]++;
}else
if(temp==4){
    especialidades[3]++;
}else
if(temp==5){
    especialidades[4]++;
}else{
    cout<<"Especialidad invalida...."<<endl;
}
}
}



int CalcularPorcentaje(int especialidades[],int pacientes, int pos){
    int porcentaje=0;
    porcentaje=(100*(especialidades[pos]))/pacientes;
    return porcentaje;
}
void DevolverMayor(int especialidades[5],int pacientes){
    int mayor=0;
    int ps=0;
    for(int i=0;i<5;i++){
        if(especialidades[i]<mayor){
            especialidades[i]=mayor;
            ps=i;
        }
    }
    if(ps==0){
        cout<<"el mayor es esp1"<<endl;
        cout<<" y su porcentaje es: "<<CalcularPorcentaje(especialidades,pacientes,ps)<<"%"<<endl;
    }
    if(ps==1){
        cout<<"el mayor es esp2"<<endl;
         cout<<" y su porcentaje es: "<<CalcularPorcentaje(especialidades,pacientes,ps)<<"%"<<endl;
    }
    if(ps==2){
        cout<<"el mayor es esp3"<<endl;
         cout<<" y su porcentaje es: "<<CalcularPorcentaje(especialidades,pacientes,ps)<<"%"<<endl;
    }
    if(ps==3){
        cout<<"el mayor es esp4"<<endl;
         cout<<" y su porcentaje es: "<<CalcularPorcentaje(especialidades,pacientes,ps)<<"%"<<endl;
    }
    if(ps==4){
        cout<<"el mayor es esp5"<<endl;
         cout<<" y su porcentaje es: "<<CalcularPorcentaje(especialidades,pacientes,ps)<<"%"<<endl;
    }
}











int main(){
int pacientes=0;
cout<<"Ingrese cuantos pacientes fueros tratados"<<endl;
cin>>pacientes;
ConteoPacientes(pacientes,especialidades);
DevolverMayor(especialidades,pacientes);

cout<<"Finalizando Programa..."<<endl;

return 0;
}