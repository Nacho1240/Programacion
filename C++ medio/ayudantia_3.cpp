#include <iostream>
using namespace std;// Terminado

class Mesa{
 public:    
    Mesa(int _silla, int _client){
        silla=_silla;
            client=_client;
            }
    
    
int getsilla(){
    return silla;
}
    
    int getclient(){
        return client;
    }
    
    void setsilla(int _silla){
        silla=_silla;
    }
    
    void setclient(int _client){
        client=_client;
    }
    
private:
    
    int silla;
    int client;
};


bool Cambio(Mesa *A, Mesa *B){
    if( (B->getsilla() > A->getclient()) && (B->getclient()==0) ){
        B->setclient(A->getclient());
        A->setclient(0);
        return true;
    }
    else{
        return false;
    }
}









int main(){
Mesa A(3,2);
Mesa B(3,0);
bool resultado;

cout<<"mesa 1:"<<A.getclient()<<endl;
cout<<"mesa 2:"<<B.getclient()<<endl;
resultado = Cambio(&A,&B);
     cout << "Funcion ejecutada..." <<endl;
        cout<<"mesa 1:"<<A.getclient()<<endl;
        cout<<"mesa 2:"<<B.getclient()<<endl;
    return 0;
}
