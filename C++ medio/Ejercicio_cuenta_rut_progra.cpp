#include <iostream>//Terminado

using namespace std;
class CuentaRut{
    
public:    
 //Constructor   
CuentaRut(int _numero, int _saldo, char _estado){
    numero=_numero;
    saldo=_saldo;
    estado=_estado;
    }
    //getters

    int getnumero(){
        return numero;
    }
    int getsaldo(){
        return saldo;
    }    
    char getestado(){
        return estado;
    }
    
    
    //setters
    
 void setnumero(int _numero){
     numero=_numero;
 }
        void setsaldo(int _saldo){
            saldo=_saldo;
        }
            void setestado(char _estado){
                 estado=_estado;
            }
    
void depositar(int monto){
    setsaldo(monto+getsaldo());
}
    
   void girar(int monto){
       if((getsaldo()-monto)<0){
           cout<<"No puede girar mas saldo......"<<endl;
           
       }else
       setsaldo(getsaldo()-monto);
   } 
    
    
    
    void imprimir(){
        
        cout<<"El numero de cuenta es:"<<getnumero()<<"........"<<endl;
         cout<<"El saldo es:"<<getsaldo()<<"........"<<endl;
         cout<<"El estado es:"<<getestado()<<"........"<<endl;
        
    }
    
    
    
    
    
  private:
  
  int numero;
  int saldo;
  char estado;
  
  
  
    
};

void transferencia(CuentaRut *A,CuentaRut *B, int *monto){
     if((A-> getsaldo()- *monto)<0){
           cout<<"No puede girar mas saldo......"<<endl;
           
       }else
       A->setsaldo(A->getsaldo()-*monto);
       B->depositar(*monto);
 
}




int main(){
 CuentaRut A(12,100,'D');
 CuentaRut B(16,300,'E');
 int monto =50;
 
A.depositar(100);
B.girar(100);
transferencia(&A,&B,&monto);
 A.imprimir();
    B.imprimir();

    return 0;
}
