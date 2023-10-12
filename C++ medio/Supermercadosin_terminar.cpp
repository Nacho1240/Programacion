#include <iostream>//estudiar arreglo de objetos, particularmente con punteros, suerte

using namespace std;


class Producto{
    public:
    Producto(int _costo, string _nombre){
        costo=_costo;
        nombre=_nombre;
    }
    //getter y setters
    int getcosto(){
        return costo;
    }
    string getnombre(){
        return nombre;
    }
    void setcosto(int _costo){
        costo=_costo;
    }
    void setnombre(string _nombre){
        nombre=_nombre;
    }
    
    void print(){
        cout<<getnombre()<<endl;
        cout<<getcosto()<<endl;
    }
    
    
    
   private:
   int costo;
   string nombre;
    
    
};
//funcion 1
void Comparar(Producto*c1,Producto*c2){
    if(c1->getcosto()<c2->getcosto()){
        c2->print();
    }else
    if(c1->getcosto()>c2->getcosto()){
         c1->print();
    }
    else
    cout<<" El precio es el mismo "<<endl;
    
}

//funcion 2
void Calculo(int monto, Producto c1){
    int x=0;
   x=monto/c1.getcosto();
    cout<<x<<endl;
    
}




//ultima clase, recomiendo usar arreglos con punteros
class Canasta{
    public:
    Canasta(Producto*);
    
    
    
    
};


//main

int main()
{
    Producto Chocolate(10000,"Chocolate");
    Producto Manzana(1000, "Manzana");
    int monto=100000;
    Comparar(&Chocolate,&Manzana);
    
    Calculo(monto,Chocolate);
    
    
    
    

    return 0;
}
