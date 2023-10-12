#include <iostream>//terminado
using namespace std;


class Reloj{
public:
Reloj(int _hora, int _minutos, int _segundos){
hora=_hora;
minutos=_minutos;
segundos=_segundos;
}
//getters and setters
int gethora(){
    return hora;
}

    int getminutos(){
        return minutos;
    }

        int getsegundos(){
            return segundos;
        }

void sethora(int _hora){
    hora=_hora;
}
void setmin(int _minutos){
    minutos=_minutos;
}
void setseg(int _segundos){
    segundos=_segundos;
}

void ajustarHoraOficial (Reloj *ho){
   if(hora<ho->gethora()){
cout<<" EL RELOJ ESTABA ATRASADO"<<endl;

   }else if(hora==ho->gethora()&&minutos<ho->getminutos()){
    cout<<" EL RELOJ ESTABA ATRASADO"<<endl;
  
   }else if(hora==ho->gethora()&&minutos==ho->getminutos()&&segundos<ho->getsegundos()){
    cout<<" EL RELOJ ESTABA ATRASADO"<<endl;

   }else if(hora==ho->gethora()&&minutos==ho->getminutos()&&segundos==ho->getsegundos()){
    cout<<" EL RELOJ ESTA  A LA HORA"<<endl;
    
   }else if(hora>ho->gethora()){
cout<<" EL RELOJ ESTABA ADELANTADO"<<endl;

   }else  if(hora==ho->gethora()&&minutos>ho->getminutos()){
    cout<<" EL RELOJ ESTABA ADELANTADO"<<endl;
    
   }else if(hora==ho->gethora()&&minutos==ho->getminutos()&&segundos>ho->getsegundos()){
    cout<<" EL RELOJ ESTABA Adelantado"<<endl;
}
   
   
   hora= ho->gethora();
   segundos= ho->getsegundos();
   minutos= ho->getminutos();
}





private:
int hora;
int minutos;
int segundos;
};









int main(){
Reloj Abuelo (16,15,20);
Reloj Oficial(16,12,40);

Abuelo.ajustarHoraOficial(&Oficial);


return 0;
}
