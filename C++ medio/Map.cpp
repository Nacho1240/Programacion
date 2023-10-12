#include <iostream>
#include <map>
#include <vector>
#include <stack>
using namespace std;



class SeccionesPA{
    public:
    
    void agregarSeccion(string codseccion, int _cuposeccion){
    vector<string>aux;
    if(cuposeccion.size() !=0 && cuposeccion.find(codseccion)!=cuposeccion.end()){
        
        cuposeccion.insert(make_pair(codseccion, _cuposeccion));
        alumnoseccion.insert(make_pair( codseccion,aux));
    }
}



        bool agregarAlumno(string codseccion, string rutAlumno){
            map<string, int>::iterator it;
             map<string, vector<string>>::iterator ip;
             
            it=cuposeccion.find(codseccion);
            ip =alumnoseccion.find(codseccion);
            
            if(cuposeccion.find(codseccion)!= cuposeccion.end() && ip->second.size() < it->second){
                alumnoseccion.insert(make_pair(codseccion, push_back(rutAlumno)));
                return true;
            } else
            return false;
            
        }






    private:
    map<string,int>cuposeccion;
    map<string,vector<string>>alumnoseccion;
};





int main()
{
    cout<<"Hello World";

    return 0;
}
