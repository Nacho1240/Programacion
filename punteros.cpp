#include <iostream>
using namespace std;
int main(){
int a;
int *b;

a=12;
b=&a;
cout<<" el valor de a: "<<a<<endl;
cout<<" el valor de la direccion de a: "<<&a<<endl;
cout<<" el valor de b: "<<b<<endl;
cout<<" el valor de lo apuntado de b: "<<*b<<endl;
cout<<" el valor de la direccion de b: "<<&b<<endl;







    return 0;
}