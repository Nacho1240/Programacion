#include <iostream>//terminado
using namespace std;

class CuentaCorriente{
    public:
    CuentaCorriente(string _nombre, int _monto, string _RUT){
        
            nombre=_nombre;
            monto=_monto;
            RUT=_RUT;
    }
    //getters y setters
    string getNombre(){
        return nombre;
    }
    void setnombre(string _nombre){
        nombre=_nombre;
    }
    int getmonto(){
        return monto;
    }
    void setMonto(int _monto){
        monto=_monto;
    }
    string getRUT(){
        return RUT;
    }
    void setRUT(string _RUT){
        RUT=_RUT;
    }
    
    
    private:
    
    string nombre;
    int monto;
    string RUT;
};














bool Transferencia(CuentaCorriente*c1,CuentaCorriente*c2,int monto){
   if(monto <=c1->getmonto()){
    int aux1=c1->getmonto();
    int aux2=c2->getmonto();
    c1->setMonto(aux1-monto);
    c2->setMonto(aux2+monto);
    cout<<"Transferencia de "<<c1->getNombre()<<" al rut "<<c2->getRUT()<<endl;
    return true;
   }else
    return false;
};


int main()
{
    CuentaCorriente A ("Alan",1000,"15219074-2");
    CuentaCorriente B ("Jose",500,"21492164-7");
   cout<< A.getmonto()<<endl;
     cout<< B.getmonto()<<endl;
     cout<< A.getRUT()<<endl;
     cout<< B.getRUT()<<endl;
     cout<< A.getNombre()<<endl;
     cout<< B.getNombre()<<endl;
    
    Transferencia(&A,&B,1000);
    
     cout<< A.getRUT()<<endl;
      cout<<B.getRUT()<<endl;
     cout<< A.getNombre()<<endl;
      cout<<B.getNombre()<<endl;
cout<<A.getmonto()<<endl;
cout<<B.getmonto()<<endl;
    return 0;
}
