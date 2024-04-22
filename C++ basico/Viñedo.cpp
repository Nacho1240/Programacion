/*
Juan es dueño de una gran viña y se está preparando para palear los problemas de
heladas del invierno. Juan acaba de comprar tres grandes quemadores de gas (estufas)
que posicionó junto a tres sensores de temperatura. Asociando cada sensor con su
quemador respectivo.


-Juan sabe que si un sensor marca temperatura menor a 5°C, debe encender el
quemador asociado a dicho sensor.

-También sabe que si dos o más sensores marcan temperatura bajo 0°C es necesario
encender los tres quemadores.

-Y solo por si acaso, si algún sensor marca bajo -3°C también se encienden los tres
quemadores.

Desarrolle un programa que lea los tres valores de los sensores e indique los
quemadores que se deben encender.
*/

#include <iostream>
using namespace std;
int main()
{
//Ejercicio 1
int t1, t2, t3;
cout << "Ingrese temperatura del sensor 1: "; cin >> t1;
cout << "Ingrese temperatura del sensor 2: "; cin >> t2;
cout << "Ingrese temperatura del sensor 3: "; cin >> t3;
if(t1 < -3 || t2 < -3 || t3 < -3)
{
cout << "Se encienden los tres quemadores";
}
else
{
if(t1 < 0 && t2 < 0)
{
cout << "Se encienden los tres quemadores";
}
else if(t2 < 0 && t3 < 0)
{
cout << "Se encienden los tres quemadores";
}
else if(t1 < 0 && t3 < 0)
{
cout << "Se encienden los tres quemadores";
}
else
{
if(t1 < 5) cout << "Se enciende el quemador 1" << endl;
if(t2 < 5) cout << "Se enciende el quemador 2" << endl;
if(t3 < 5) cout << "Se enciende el quemador 3" << endl;
}
}