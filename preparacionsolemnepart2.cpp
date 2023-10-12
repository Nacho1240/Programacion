#include <iostream>
using namespace std;
int especialidades[5];
void ceropacientes(int npacientes, int especialidades[5]){


for(int j=0; j<5;j++){
    especialidades[j]=0;
}
}

int CalcularPorcentaje(int especialidades[],int npacientes,int pos){
int porcentaje=0;
porcentaje=(100*(especialidades[pos]))/npacientes;
return porcentaje;
}
void Devolvermayor(int especialidades[5],int npacientes){
   int temp=0;
   cout<<"Bienvenido al selector de especialidades, por favor ingrese la especialidad con la que se atendio "<<endl;
for(int i=0;i<npacientes;i++){
cout<<"1)cardiologia"<<endl;
cout<<"2)medicina genera"<<endl;
cout<<"3)obstetricia"<<endl;
cout<<"4)infectologia"<<endl;
cout<<"5)neumologia"<<endl;
cin>>temp;
if(temp==1){
    especialidades[0]++;
}else if(temp==2){
    especialidades[1]++;
}else if(temp==3){
    especialidades[2]++;
}else if(temp==4){
    especialidades[3]++;
    }else if(temp==5){
    especialidades[4]++;
    }else{
cout<<"Especialidad invalida"<<endl;
    }
}

    int mayor=0;
    int ps=0;
    for(int i=0;i<5;i++){
        if(especialidades[i]>mayor){
mayor=especialidades[i];
ps=i;
   }
    }
 if(ps==0){
    cout<<"el mayor es Cardiologia"<<endl;
    cout<<"su Porcentaje es: "<<CalcularPorcentaje(especialidades,npacientes,ps)<<"%";
 }else
  if(ps==1){
    cout<<"el mayor es medicina genera "<<endl;
     cout<<"su Porcentaje es: "<<CalcularPorcentaje(especialidades,npacientes,ps)<<"%";
 }else if(ps==2){
    cout<<"el mayor es obstetricia"<<endl;
     cout<<"su Porcentaje es: "<<CalcularPorcentaje(especialidades,npacientes,ps)<<"%";
 }else if(ps==3){
    cout<<"el mayor es infectologia"<<endl;
     cout<<"su Porcentaje es: "<<CalcularPorcentaje(especialidades,npacientes,ps)<<"%";
 }else if(ps==4){
    cout<<"el mayor es neumologia"<<endl;
     cout<<"su Porcentaje es: "<<CalcularPorcentaje(especialidades,npacientes,ps)<<"%";
 }
}


int main (){
int pacientes;
int ps=0;
cout<<" cuantos pacientes fueron atendidos "<<endl;
cin>>pacientes;
ceropacientes(pacientes,especialidades);

Devolvermayor(especialidades,pacientes);






    return 0;
}



