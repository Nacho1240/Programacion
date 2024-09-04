// Damian y Gonzalo, grandes ayudantes del curso de programación avanzada, desean
// organizar un torneo de tenis de mesa en la EIT. Para cada partida se deberá almacenar los
// nombre de los dos jugadores, los puntos obtenidos y los sets. Cada vez que un jugador gane
// un punto, se deberá aumentar en 1 los puntos actuales del jugador en cuestión. Si un
// jugador llega a 11 puntos, ganará un set y los puntos deberán ser reiniciados a 0. El jugador
// que consiga 4 sets ganará el encuentro



//Para este problema se pide:


//Crear la clase Partida, debe incluir el constructor que inicializa los nombres de los
//jugadores y los puntos/sets a 0. Además de lo anterior, crear el constructor vacío.


// Definir en la función main dos objetos de la clase Partida, uno por cada constructor
// definido en la pregunta anterior.


// Implementar los métodos void punto_jugadorA() y void punto_jugadorB(), los
// cuales suman 1 punto al jugador A y al jugador B respectivamente. Nota: Considere
// que estas funciones deben manejar de manera correcta lo explicado en el enunciado.

// Implementar el método ResultadoParcial() que imprime el resultado parcial del
// partido indicando: sets ganados por el jugador A, sets ganados por el jugador B. 




#include <iostream>
using namespace std;

class Partida{
    public:
    Partida(string Nombre1, string Nombre2, int Puntos1, int Puntos2, int Sets1, int Sets2){
        jugador1 = Nombre1;
        jugador2 = Nombre2;
        puntos1 = Puntos1;
        puntos2 = Puntos2;
        sets1 = Sets1;
        sets2 = Sets2;
    }
    Partida(){
        puntos1 = 0;
        puntos2 = 0;
        sets1 = 0;
        sets2 = 0;
    }


//getters
string getJugador1(){
    return jugador1;
}

string getJugador2(){
    return jugador2;
}

int getPuntos1(){
    return puntos1;
}

int getPuntos2(){
    return puntos2;
}

//setters
void setJugador1(string Nombre1){ jugador1 = Nombre1;}
void setJugador2(string Nombre2){ jugador2 = Nombre2;}
void setPuntos1(int Puntos1){ puntos1 = Puntos1;}
void setPuntos2(int Puntos2){ puntos2 = Puntos2;}
void setSets1(int Sets1){ sets1 = Sets1;}
void setSets2(int Sets2){ sets2 = Sets2;}

void punto_jugadorA(){setPuntos1(getPuntos1() + 1);}
void punto_jugadorB(){setPuntos2(getPuntos2() + 1);}
void ResultadoParcial(){ cout << "Sets ganados por " << getJugador1() << ": " << sets1 << endl;
                        cout << "Sets ganados por " << getJugador2() << ": " << sets2 << endl;}


    private:
    string jugador1;
    string jugador2;
    int puntos1;
    int puntos2;
    int sets1;
    int sets2;
};



int main(){
    Partida Partida1("Damian", "Gonzalo", 0, 0, 0, 0);
    Partida Partida2;
    return 0;
}