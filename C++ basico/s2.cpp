#include <iostream>

using namespace std;

int devolverMayor(int especialidades[])
{
    int mayor = 0, pos = 0;

    // 10  30  40   20  15

    for(int i = 0; i < 5; i++){
        if(especialidades[i] > mayor)
        {
            mayor = especialidades[i];
            pos = i;
        }
    }
    return pos;
}

int devolverPorcentaje(int especialidades[], int cantPacientes, int pos)
{
    int porcentaje = (100*(especialidades[pos]))/cantPacientes;
    return porcentaje;
}

void ContarPacientes(int cantPacientes, int especialidaes[])
{
    int esp;

    for(int j = 0; j<5; j++)
    {
        especialidaes[j] = 0;
    }

    cout<<"Bienvenido al programa de conteo de pacientes..."<<endl<<"Ingrese a que especialidad fue consecutivamente;";

    for(int i = 0; i< cantPacientes; i++)
    {
        cout<<"(1) Especialidad 1"<<endl;
        cout<<"(2) Especialidad 2"<<endl;
        cout<<"(3) Especialidad 3"<<endl;
        cout<<"(4) Especialidad 4"<<endl;
        cout<<"(5) Especialidad 5"<<endl;
        cin>>esp;

        if(esp == 1)
        {
            especialidaes[0]++;
        }else if(esp == 2){
            especialidaes[1]++;
        }else if(esp == 3){
            especialidaes[2]++;
        }else if(esp == 4){
            especialidaes[3]++;
        }else if(esp == 5){
            especialidaes[4]++;
        }else{
            cout<<"Especialidad invalida...";
        }
    }

    int pos = devolverMayor(especialidaes);
    int porcentaje = 0;
    if( pos == 0)
    {
        cout<<"La especialidad con mas pacientes fue: Cardiologia";
        porcentaje = devolverPorcentaje(especialidaes, cantPacientes, pos);
     }else if( pos == 1){
        cout<<"L especialidad con mas pacientes fue: esp 2";
        porcentaje = devolverPorcentaje(especialidaes, cantPacientes, pos);
    }else if( pos == 2){
        cout<<"La especialidad con mas pacientes fue: esp 3";
        porcentaje = devolverPorcentaje(especialidaes, cantPacientes, pos);
    }else if( pos == 3){
        cout<<"La especialidad con mas pacientes fue: esp 4";
        porcentaje = devolverPorcentaje(especialidaes, cantPacientes, pos);
    }else if( pos == 4){
        cout<<"La especialidad con mas pacientes fue: esp 5";
        porcentaje = devolverPorcentaje(especialidaes, cantPacientes, pos);
    }

    cout<<"Y obtuvo :"<<porcentaje<<"% del total de pacientes";

}



int main() {
    int pacientes;
    int especialidades[5];

    cout<<"Cuantos pacientes fueron atendidos...";
    cin>>pacientes;

    ContarPacientes(pacientes, especialidades);



    return 0;
}
