#include <iostream>//terminado

using namespace std;
 class Reloj{
            public:
                Reloj(int _hora, int _min, int _seg){
                    hora=_hora;
                        min=_min;
                            seg=_seg;
                }
        
        int gethora(){  
       return hora;
        }
        int getmin(){  
       return min;
        }
         int getseg(){  
       return seg;
        }
        
        void sethora(int _hora){
            hora=_hora;
        }
        
        void setmin(int _min){
               min=_min; 
        }
        void setseg(int _seg){
            seg=_seg;
        }
        
        
        
        
        void Print(){
            cout<<hora<<":"<<min<<":"<<seg<<endl;
        }
        
        void Comparar(Reloj R){//modificar debido a incoerencia en la comparativa independiente
            if(hora<R.gethora() && min<R.getmin() && seg<R.getseg()){
                    cout<<" El reloj esta atrasado en comparacion. "<<endl;
            }
             if(hora>R.gethora() && min>R.getmin() && seg>R.getseg()){
                cout<<"El reloj esta adelantado en comparacion."<<endl;
            }
                if(hora==R.gethora() && min==R.getmin() && seg==R.getseg()){
                    cout<<"El reloj esta igual en comparacion."<<endl;
                }
        }
        
        
        void Sincronizar(Reloj R){
            sethora(R.gethora());
            setmin(R.getmin());
            setseg(R.getseg());
        }
        
        
        
        
        private:
        int hora;
        int min;
        int seg;
        
        
    };
    
int main()
{
  
    return 0;
}
