#include <iostream>//terminado
using namespace std;

class Trabajador{
    public:
        Trabajador(string _nombre, double _sueldo){
            nombre=_nombre;
            sueldo=_sueldo;
        }
            //getters y setters
            string getnombre(){
                return nombre;
            }
                double getsueldo(){
                    return sueldo;
                }
                    void setnombre(string _nombre){
                        nombre=_nombre;
                    }
                        void setsueldo(double _sueldo){
                            sueldo=_sueldo;
                        }
            
            
            
            
        
    
    
    
    protected:
    string nombre;
    double sueldo;
    
};

class Chef : public Trabajador{
    public:
    Chef(string _nombre, double _sueldo, string _plato):Trabajador(_nombre, _sueldo){
        plato=_plato;
        
    }
    //getters and setters
    string getplato(){
        return plato;
    }
    
    void setplato(string _plato){
        plato=_plato;
    }
    
    
    
    
    
    private:
    string plato;
};

class Camarero : public Trabajador{
        public:
            Camarero(string _nombre, double _sueldo, int _mesas, float _propina): Trabajador(_nombre, _sueldo){
                
              mesas=_mesas;
              propina=_propina;
                
                
            }
                
                      //getters and setters
                        
                            int getmesas(){
                                return mesas;
                            }
                                float getpropina(){
                                    return propina;
                                }
                                    void setmesa(int _mesas){
                                        mesas=_mesas;
                                    }
                                        void setpropina( float _propina){
                                            propina=_propina + propina;
                                        }
  
  
  
  private:
  int mesas;
  float propina;
  
};


class Restaurant{
     private:
        string estado;
        Chef *chefs[5];
        Camarero *camareros[10];
        
    public:
        Restaurant(string _estado){
            estado=_estado;
            chefs[0] = new Chef("Remi", 500, "Desayuno");
            chefs[1] = new Chef("Linguini", 500, "Almuerzo");
            chefs[2] = new Chef("Colette", 500, "Almuerzo");
            chefs[3] = new Chef("Horst", 500, "Once");
            chefs[4] = new Chef("Anton", 500, "Once");
            camareros[0] = new Camarero("Juan", 400, 2, 50);
            camareros[1] = new Camarero("Mary", 400, 0, 0);
            camareros[2] = new Camarero("Carlo", 400, 5, 150);
            camareros[3] = new Camarero("Fer", 400, 7, 70);
            camareros[4] = new Camarero("Hector", 400, 0, 0);
            camareros[5] = new Camarero("Emily", 400, 2, 20);
            camareros[6] = new Camarero("Javiera", 400, 6, 100);
            camareros[7] = new Camarero("Jhon", 400, 0, 0);
            camareros[8] = new Camarero("Elvis", 400, 8, 200);
            camareros[9] = new Camarero("Yhin", 400, 1, 1);
        }
        
        
        
        
            
                int mesastotal(){
                    int x=0;
                    for(int i=0; i<10; i++){
                        x=x+camareros[i]->getmesas();
                    }
                    return x;
                }
                int repartepropina(){
                    int y=0;
                    for(int i=0; i<15; i++){
                        y=y+camareros[i]->getpropina();
                    }
                        return y/15;

                }
                    void Conteoplatos(){
                        int desayuno=0;
                        int almuerzo=0;
                        int once=0;
                        for(int i=0; i<5; i++){
                            if(chefs[i]->getplato()=="Desayuno"){
                                desayuno++;
                            }else if(chefs[i]->getplato()=="Almuerzo"){
                                almuerzo++;
                            }else if(chefs[i]->getplato()=="Once"){
                                once++;
                            }
                        }
                        cout<<desayuno<<endl<<almuerzo<<endl<<once<<endl;

                    }
};













int main()
{
    cout<<"Hello World";

    return 0;
}
