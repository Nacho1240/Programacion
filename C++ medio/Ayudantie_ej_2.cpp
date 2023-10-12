#include <iostream>//terminado

using namespace std;
class Superheroe{
    public:
        Superheroe( string _nombre, int _edad, float _poder){
                nombre=_nombre;
                    edad=_edad;
                    poder=_poder;
        }
    
    string nombre;
        int edad;
          float poder;  
};

string Pelea(Superheroe x, Superheroe y){
    if(x.poder> y.poder){
        cout<<"Gana el Peleador "<<x.nombre<<endl;
    }
     if(x.poder < y.poder){
         cout<<"Gana el Peleador:"<<y.nombre<<endl;
    }
     if(x.poder== y.poder){
         cout<<"Empate"<<endl;
    }
    return 0;
}


int main()      
{
    int n=0;
    Superheroe Chapulin("El Chapulin Colorado",30,3000);
        Superheroe Huevo("Huevo Ramirez",70,2500);
         Superheroe Tortugas("Leonardo",19,1200);
                Superheroe Pig("El cerdito valiente",6,2200);
                
Pelea(Chapulin,Huevo);



    return 0;
}