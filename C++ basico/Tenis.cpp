/*


Como estudiantes de la UDP, se les solicita que genere un programa en C++ que indique
si un set de tenis ha terminado o no.

Para que un jugador gane un set de tenis debe ganar mínimo 6 juegos con una diferencia
de dos con su rival. En el caso en que estén empatados a 5 juegos, el ganador del set
será el primero en llegar a los 7 puntos. Si el set está empatado a 6, el set se define en
un último juego con resultado 7-6 o 6-7.

Sabiendo que el jugador A ha ganado x juegos y el jugador B ha ganado y juegos. El
programa debe indicar si:


-A ganó el set, o
-B ganó el set, o
-El set todavía no termina (por ejemplo, 5-4), o
-El resultado es inválido (por ejemplo, 8-6 o 7-3).

*/


#include <iostream>
#include <cmath>
using namespace std;
int main(){

int x, y;
if((x== 6 && x-y>=2)|| (x==7 && y==5) || (x==7 && y==6))
{
cout << "Jugador A gana el set" << endl;
}
//Parte 3
else if((y== 6 && y-x>=2)|| (y==7 && x==5) || (y==7 && x==6))
{
cout << "Jugador B gana el set" << endl;
}
//Parte 4
else if(x<=6 && y<=6)
{cout << "El set aun no termina" << endl;
}
//Parte 5
else
{
cout << "Resultado inválido" << endl;
}

 return 0;   
}