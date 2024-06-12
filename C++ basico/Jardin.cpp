#include <iostream>
using namespace std;
void printA(int arreglo[3][3]){
// Imprimir
for(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++){
cout << arreglo[i][j];
}
cout << endl;
}
}

void regados(int arreglo[3][3], int *tmp){
int regados = 0;
int noregados = 0;
for(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++){
if(arreglo[i][j] == 1){
tmp[0]++;
}else{
if(arreglo[i][j] == 0){
tmp[1]++;
cout << "No regado en Posición ("<< i << ", "<< j << ")" <<
endl;
}}}}}

int main()
{
int m = 3, n =3;
int arr[3][3];
//llenado
for(int i = 0; i < m; i++){
for(int j = 0; j < n; j++){
cout << "Ingrese estado: ";
cin >> arr[i][j];
}
}
printA(arr);
int tmp[2] = {0,0};
regados(arr, tmp);
cout << "Total regado = " << tmp[0] << endl;
cout << " Porcentaje no regados :" << tmp[1]/9.0;
return 0;
}