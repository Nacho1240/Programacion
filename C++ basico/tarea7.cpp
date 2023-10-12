//recibir las notas y determinar cuantos aprobaron y cuales notas son, aprobar= promadio o mayor del curso
#include <iostream>
using namespace std;
int main (){
double alumnos[45];
int contador=0;
 double notas=0;
double promedio=0;
int suma=0;
cout<<" ingrese las calificaciones finales "<<endl;
for(int i=0;i<45;i++){
    cin>>alumnos[i];
suma=suma+alumnos[i];
}
promedio=suma/45;
for(int i=0;i<45;i++){
    if(alumnos[i]>promedio || alumnos[i]==promedio){
        contador++;
        cout<<"los aprobados son las notas: "<<alumnos[i]<<endl;
    }
}
cout<<" el contador es: "<<contador<<endl;











    return 0;
}