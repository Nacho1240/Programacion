#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Objeto {
public:
Objeto( string _nombre, string _tipo){
    nombre=_nombre; 
    tipo=_tipo;
}


string getnombre(){
    return nombre;
}

void setnombre(string _nombre){
nombre=_nombre;
}

string getTipo(){
return tipo;
}

void setTipo(string _tipo){
    tipo=_tipo;
}
protected:
string nombre;
string tipo;

};





int main(){
vector<Objeto>aux;
map<string , vector<Objeto>>Reciclaje;
Reciclaje.insert(make_pair("Vidrio",aux));




    return 0;
}