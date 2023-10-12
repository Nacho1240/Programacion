#include <iostream>//terminado

using namespace std;
class paralelepipedo {
    public :
    float ancho,largo,prof;
    float area(){
        return 2*(largo*ancho+largo*prof+ancho*prof);
    }
    float volumen(){
        return largo*ancho*prof;
}
};
paralelepipedo comparar(paralelepipedo A, paralelepipedo B){
    if(A.volumen() > B.volumen()){
        return A;
    }else
    return B;
}

int main()
{
 paralelepipedo par1;
 paralelepipedo par2;
 paralelepipedo par3;
par1.ancho=3;par1.largo=9;par1.prof=2;
 par2.ancho=5;par2.largo=6;par2.prof=8;
 par3= comparar(par1,par2);
cout<<par3.volumen()<<endl;
    return 0;
}
