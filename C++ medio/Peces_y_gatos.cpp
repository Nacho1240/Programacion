#include <iostream>//terminado
using namespace std;

class Tamagochi{
        protected:
        string nombre;
        char tipo;
           string color; 
            public:
                Tamagochi(string _nombre, char _tipo, string _color){
                    nombre=_nombre;
                    tipo=_tipo;
                    color=_color;
                }
                string getnombre(){
                    return nombre;
                }
                    char gettipo(){
                        return tipo;
                    }
                        void setnombre(string _nombre){
                             nombre=_nombre;
                        }
                            void settipo(char _tipo){
                                tipo=_tipo;
                            } 
                           string getcolor(){
                               return color;
                           }
};
    
    class PezV : public Tamagochi{
        public:
        PezV(string _nombre, char _tipo, string _color): Tamagochi(_nombre,_tipo,_color){
            _color="terracota";
            color=_color;
        }
            void sentirGato(){
                color="blanco";
            };
    };
    
    
    
    
    
    
    
    
    
    class GatoV : public Tamagochi{
        public:
        GatoV(string _nombre, char _tipo,string _color):Tamagochi(_nombre,_tipo,_color){
        }
                string sentirPezDorado(PezV nemo){
                    if(nemo.getcolor()=="blanco"){
                            return "Muerto";
                    }else 
                    return "miau";
                }
                
    };
















    
    


int main()
{
   GatoV Gato("jose",'A',"azul");
    PezV Pez("martin",'B',"verde");

cout<<Gato.getcolor()<<endl;
cout<<Pez.getcolor()<<endl;
cout<<Gato.sentirPezDorado(Pez)<<endl;
Pez.sentirGato();
cout<<Gato.sentirPezDorado(Pez)<<endl;
cout<<Gato.getcolor()<<endl;
cout<<Pez.getcolor()<<endl;


    return 0;
}
