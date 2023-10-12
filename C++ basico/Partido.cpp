#include <iostream>
#include <math.h>

using namespace std;


int main2()
{
    /*hay muchimas variables porque pense que se tenia que imprimir las estadisticas de cada fecha por individual,
    cada variable se usa al menos 1 vez, solo queria aclarar eso :)
    */
    string nombre_equipo = "";
    int cantidad_fechas = 0;
    int puntos_aliado = 0;
    int puntos_rival = 0;
    int puntos_totales_aliado = 0;
    int puntos_totales_rival = 0;
    int partidos_ganados_aliado = 0;
    int partidos_ganados_rival = 0;
    int partidos_empatados = 0;
    int puntosFavor_aliado = 0;
    int puntosFavor_rival = 0;
    int puntosContra_aliado = 0;
    int puntosContra_rival = 0;
    int diferencia_goles = 0;


    cout << "Ingrese el nombre del equipo: ";
    cin >> nombre_equipo;
    cout << "Ingrese la cantidad de fechas: ";
    cin >> cantidad_fechas;

    int goles_aliado[cantidad_fechas];
    int goles_rival[cantidad_fechas];
    int golesFavor_aliado[cantidad_fechas];
    int golesFavor_rival[cantidad_fechas];

    for (int i = 0; i < cantidad_fechas; i++)
    {
        cout << "Ingrese los goles del equipo aliado en la fecha " << i + 1 << ": ";
        cin >> goles_aliado[i];
        cout << "Ingrese los goles del equipo rival en la fecha " << i + 1 << ": ";
        cin >> goles_rival[i];
        puntosFavor_aliado += goles_aliado[i];
        puntosFavor_rival += goles_rival[i];
        puntosContra_aliado += goles_rival[i];
        puntosContra_rival += goles_aliado[i];
    }

    for (int i = 0; i < cantidad_fechas; i++)
    {
        if (goles_aliado[i] > goles_rival[i])
        {
            puntos_aliado += 3;
            partidos_ganados_aliado += 1;
        }
        if (goles_aliado[i] == goles_rival[i])
        {
            golesFavor_aliado[i] = 0;
            golesFavor_rival[i] = 0;
            partidos_empatados += 1;
        }
        if (goles_rival[i] > goles_aliado[i])
        {
            puntos_rival += 3;
            partidos_ganados_rival += 1;
            puntos_totales_rival += 1;
        }

        golesFavor_aliado[i] = goles_aliado[i] - goles_rival[i];
        golesFavor_rival[i] = goles_rival[i] - goles_aliado[i];
    }


    cout << "Los puntos totales fueron : " << puntos_aliado + puntos_rival << endl;
    cout << "Las estadisticas del equipo " << nombre_equipo << " son: " << endl;
    cout << "Los puntos totales del equipo fueron : " << puntos_aliado << endl;
    cout << "Total de goles a favor: " << puntosFavor_aliado << endl;
    cout << "Total de goles en contra: " << puntosFavor_rival << endl;
    cout << "Total de partidos ganados: " << partidos_ganados_aliado << endl;
    cout << "Total partidos perdidos: " << partidos_ganados_rival << endl;
    cout << "Total partidos empatados: " << partidos_empatados << endl;
    cout << "DIferencia de goles: " << diferencia_goles << endl;

    return 0;
}

int main3()
{
    srand(time(NULL));               // generar semilla numero aleatorio
    int saldo = (rand() % 50000001); // generar saldo aleatorio
    int dinero_retirar = 0;
    int clave = 1234; // clave por defecto en banco, nunca la piden asi que da igual
    int ciclo = 0;
    int opcion = 0;


    while (ciclo == 0)
    {
        cout << "Opciones: \n1. Retirar dinero \n2. Consultar saldo \n3. Cambiar clave\n4.Salir \n";
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Ingrese el dinero a retirar: ";
            cin >> dinero_retirar;
            if (dinero_retirar > saldo)
            {

                cout << "No hay suficiente saldo en la cuenta\n";
            }
            else
            {
                saldo = saldo - dinero_retirar;

                cout << "Su saldo actual es: " << saldo << "\n";
            }
        }
        else if (opcion == 2)
        {

            cout << "Su saldo actual es: " << saldo << "\n";
        }
        else if (opcion == 3)
        {

            cout << "Ingrese la nueva clave: ";
            cin >> clave;
            // verificar si la clave tiene 4 digitos y si sus digitos no son consecutivos
            if (clave < 1000 || clave > 9999)
            {

                cout << "La clave debe tener 4 digitos\n";
            }
            else
            {
                int digito1 = clave / 1000;
                int digito2 = clave / 100 - digito1 * 10;
                int digito3 = clave / 10 - digito1 * 100 - digito2 * 10;
                int digito4 = clave - digito1 * 1000 - digito2 * 100 - digito3 * 10;
                if (digito2 == digito1 + 1 && digito3 == digito2 + 1 && digito4 == digito3 + 1 || digito2 == digito1 - 1 && digito3 == digito2 - 1 && digito4 == digito3 - 1)
                {

                    cout << "La clave no puede tener digitos consecutivos\n";
                }
                else
                {

                    cout << "Clave cambiada con exito\n";
                    cout << digito1 << digito2 << digito3 << digito4 << "\n";
                }
            }
        }
        else if (opcion == 4)
        {

            cout << "Saliendo del sistema...\n";
            ciclo = 1;
        }
        else if (opcion == 5)
        {

            main2();
        }
        else
        {

            cout << "Opcion invalida\n"; // por si se le ocurre al usuario ingresar una opcion que no corresponde
        }
    }

    return 0;
}



int main() 
{
    int opcion_tarea = 0;
    cout << "Tarea programacion: \n1. Ejercicio Cajero\n2. Ejercicio Futbol\n";
    cin >> opcion_tarea;
    if (opcion_tarea == 1)
    {
        main3();
    }
    else if (opcion_tarea == 2)
    {
        main2();
    }
    else
    {
        cout << "Opcion no valida";
    }
}


/*⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣶⣿⣿⣷⣶⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣾⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡟⠁⣰⣿⣿⣿⡿⠿⠻⠿⣿⣿⣿⣿⣧⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⠏⠀⣴⣿⣿⣿⠉⠀⠀⠀⠀⠀⠈⢻⣿⣿⣇⠀⠀⠀
⠀⠀⠀⠀⢀⣠⣼⣿⣿⡏⠀⢠⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀
⠀⠀⠀⣰⣿⣿⣿⣿⣿⡇⠀⢸⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀
⠀⠀⢰⣿⣿⡿⣿⣿⣿⡇⠀⠘⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⢀⣸⣿⣿⣿⠁⠀⠀
⠀⠀⣿⣿⣿⠁⣿⣿⣿⡇⠀⠀⠻⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⠃⠀⠀⠀
⠀⢰⣿⣿⡇⠀⣿⣿⣿⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀
⠀⢸⣿⣿⡇⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠛⠉⢉⣿⣿⠀⠀⠀⠀⠀⠀
⠀⢸⣿⣿⣇⠀⣿⣿⣿⠀⠀⠀⠀⠀⢀⣤⣤⣤⡀⠀⠀⢸⣿⣿⣿⣷⣦⠀⠀⠀
⠀⠀⢻⣿⣿⣶⣿⣿⣿⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣦⡀⠀⠉⠉⠻⣿⣿⡇⠀⠀
⠀⠀⠀⠛⠿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠈⠹⣿⣿⣇⣀⠀⣠⣾⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣦⣤⣤⣤⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⣿⣿⣿⣿⣿⣿⠿⠋⠉⠛⠋⠉⠉⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁*/