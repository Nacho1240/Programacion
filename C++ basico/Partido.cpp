/*
Utilizando cout y cin, cree un programa en C++ que pida a un usuario por consola,
cuatro nombres de países que compiten las llaves de semifinales del mundial de
fútbol de la FIFA. Es decir, el primer país se enfrentará al segundo, y por otro lado, el
tercero se enfrentará al cuarto. La final, será entre los ganadores de esos
encuentros.
Debe indicar por consola quien gana cada partido.
Ademas, debe solicitar al usuario los goles de cada equipo en cada partido.
*/


#include <iostream>
#include <cmath>


using namespace std;


int main(){

string pais1, pais2, pais3, pais4;
int goles1, goles2, goles3, goles4;

cout << "Ingrese el nombre del primer pais: "<<endl;
cin >> pais1;
cout <<"Ingrese cuantos goles hizo el primer pais: "<<endl;
cin >> goles1;
cout << "Ingrese el nombre del segundo pais: "<<endl;
cin >> pais2;
cout <<"Ingrese cuantos goles hizo el segundo pais: "<<endl;
cin >> goles2;
cout << "Ingrese el nombre del tercer pais: "<<endl;
cin >> pais3;
cout <<"Ingrese cuantos goles hizo el tercer pais: "<<endl;
cin >> goles3;
cout << "Ingrese el nombre del cuarto pais: "<<endl;
cin >> pais4;
cout <<"Ingrese cuantos goles hizo el cuarto pais: "<<endl;
cin >> goles4;


cout << "El primer partido es entre: "<<pais1<<" y "<<pais2<<endl;
if(goles1>goles2){
    cout << "El ganador es: "<<pais1<<endl;
}else{
    cout << "El ganador es: "<<pais2<<endl;
}

cout << "El segundo partido es entre: "<<pais3<<" y "<<pais4<<endl;
if(goles3>goles4){
    cout << "El ganador es: "<<pais3<<endl;
}else if(goles3==goles4){
cout << "Empate"<<endl;
    }else{
    cout << "El ganador es: "<<pais4<<endl;
}



}