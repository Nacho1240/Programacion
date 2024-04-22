/* Escribir un programa que reciba minutos y
muestre la hora como un reloj digital.
*/


#include <iostream>
#include <cmath>
using namespace std;
int main(){

int minutos;
int horas;
int minutosRestantes;

cout << "Ingrese los minutos: "<<endl;
cin >> minutos;

horas = minutos/60;
minutosRestantes = minutos%60;  

cout << "La hora es: "<<horas<<":"<<minutosRestantes<<endl;

}