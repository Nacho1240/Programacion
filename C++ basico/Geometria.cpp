#include <iostream>
#include <cmath>

/*
La empresa multimillonaria Pesla ha solicitado su ayuda para generar un programa que le ayude a calcular el area de sus autos
 geometricamente perfectos, para ello debe crear un programa que cumpla con las siguientes caracteristicas:

1) Debe desplegar un menu para seleccionar la figura geometrica de la cual desea calcular sus caracteristicas geometricas.
2) Debe permitir al usuario ingresar la opcion de figura geometrica que desea calcular.
3) Despues debe desplegar un menu con las opcione de calculo de las caracteristicas, las cuales son (area, perimetro, volumen,) en los casos generales.
4) Debe permitir al usuario ingresar la opcion de calculo que desea realizar.
5) Debe permitir al usuario ingresar los datos necesarios para realizar el calculo.
6) Debe desplegar el resultado del calculo realizado.
7) Debe permitir al usuario realizar otro calculo o salir del programa.
8) Debe validar que los datos ingresados sean correctos y que no sean negativos.


*/

using namespace std;

int main()
{
    int opcion = 0;
    bool Verificador = true;

    while (Verificador)
    {

        cout << "Bienvenido a la calculadora de Pesla" << endl;
        cout << "Seleccione la figura geometrica de la cual desea calcular sus caracteristicas" << endl;
        cout << " " << endl;
        cout << "1) Circulo" << endl;
        cout << "2) Triangulo" << endl;
        cout << "3) Cuadrado" << endl;
        cout << "4) Rectangulo" << endl;
        cout << "5) Cubo" << endl;
        cout << "6) Esfera" << endl;
        cout << "7) Salir" << endl;

        cin >> opcion;

        /*
        Aqui pueden usar un switch para seleccionar la figura geometrica
        y realizar los calculos correspondientes o simplemente usar if y else if.

        */
        int opcion2 = 0;
        switch (opcion)
        {

        case 1:
            cout << "Ha seleccionado Circulo" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor del radio del circulo" << endl;
                double radio;
                cin >> radio;
                cout << "El area del circulo es: " << 3.1416 * pow(radio, 2) << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor del radio del circulo" << endl;
                double radio;
                cin >> radio;
                cout << "El perimetro del circulo es: " << 2 * 3.1416 * radio << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }

            break;

        case 2:
            cout << "Ha seleccionado Triangulo" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor de la base del triangulo" << endl;
                double base;
                cin >> base;
                cout << "Ingrese el valor de la altura del triangulo" << endl;
                double altura;
                cin >> altura;
                cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor del lado 1 del triangulo" << endl;
                double lado1;
                cin >> lado1;
                cout << "Ingrese el valor del lado 2 del triangulo" << endl;
                double lado2;
                cin >> lado2;
                cout << "Ingrese el valor del lado 3 del triangulo" << endl;
                double lado3;
                cin >> lado3;
                cout << "El perimetro del triangulo es: " << lado1 + lado2 + lado3 << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }
            break;

        case 3:
            cout << "Ha seleccionado Cuadrado" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor del lado del cuadrado" << endl;
                double lado;
                cin >> lado;
                cout << "El area del cuadrado es: " << pow(lado, 2) << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor del lado del cuadrado" << endl;
                double lado;
                cin >> lado;
                cout << "El perimetro del cuadrado es: " << lado * 4 << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }
            break;

        case 4:
            cout << "Ha seleccionado Rectangulo" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Perimetro" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor de la base del rectangulo" << endl;
                double base;
                cin >> base;
                cout << "Ingrese el valor de la altura del rectangulo" << endl;
                double altura;
                cin >> altura;
                cout << "El area del rectangulo es: " << base * altura << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor de la base del rectangulo" << endl;
                double base;
                cin >> base;
                cout << "Ingrese el valor de la altura del rectangulo" << endl;
                double altura;
                cin >> altura;
                cout << "El perimetro del rectangulo es: " << (base * 2) + (altura * 2) << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }
            break;

        case 5:
            cout << "Ha seleccionado Cubo" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Volumen" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor del lado del cubo" << endl;
                double lado;
                cin >> lado;
                cout << "El area del cubo es: " << 6 * pow(lado, 2) << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor del lado del cubo" << endl;
                double lado;
                cin >> lado;
                cout << "El volumen del cubo es: " << pow(lado, 3) << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }

            break;

        case 6:
            cout << "Ha seleccionado Esfera" << endl;
            cout << " " << endl;
            cout << "Seleccione la operacion que desea realizar" << endl;
            cout << "1) Area" << endl;
            cout << "2) Volumen" << endl;
            cout << "3) Salir" << endl;
            cin >> opcion2;
            if (opcion2 == 1)
            {
                cout << "Ingrese el valor del radio de la esfera" << endl;
                double radio;
                cin >> radio;
                cout << "El area de la esfera es: " << 4 * 3.1416 * pow(radio, 2) << endl;
            }
            else if (opcion2 == 2)
            {
                cout << "Ingrese el valor del radio de la esfera" << endl;
                double radio;
                cin >> radio;
                cout << "El volumen de la esfera es: " << (4 / 3) * 3.1416 * pow(radio, 3) << endl;
            }
            else if (opcion2 == 3)
            {
                cout << "Programa Finalizado" << endl;
            }
            else
            {
                cout << "Opcion no valida" << endl;
            }
            break;

        default:
            cout << "Programa Finalizado" << endl;
            Verificador = false;
            break;
        }
    }

    return 0;
}