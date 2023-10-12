#include <iostream>
#include <vector>
using namespace std;
class Circunferencia{
    public:
    Circunferencia(int _radio){
            radio=_radio;
    }
//setters and getters

        void setradio(int _radio){
            radio=_radio;
        }
                int getradio(){
                    return radio;
                }
void Aumentar( vector<Circunferencia>y ){
for(int i=0; i<y.size();i++){
    if(y[i].getradio()>radio){
radio++;
return;
    }
}
}

    private:
    int radio;
};

//funcion mayor

void Mayor(vector<Circunferencia>x){
    int aux=0;
    int tem=0;
    for(int i=0; i<5; i++){
            if(aux<x[i].getradio()){
                aux=x[i].getradio();
                tem=i+1;
            }
           
    }
    cout<<"El mayor radio es: "<<aux<<endl<<"En la posicion: "<<tem<<endl;
} 





int main(){
int x=0;
vector<Circunferencia>Vi;
vector<Circunferencia>Vii;
cout<<" Ingrese sus Valores: "<<endl;
for(int i=0; i<5; i++){
    cin>>x;
    Vi.push_back(x);
    Vii.push_back(x+3);
}
Mayor(Vi);
Vi[4].Aumentar(Vii);
return 0;
}

  

