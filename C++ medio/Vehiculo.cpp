#include <iostream>//Ejercicio N°10 de guia repaso solemne programacion avanzada
                    //Estado: Ejercicio finalizado, falta unicamente el main

using namespace std;



class ConsumoVehiculo{
  public:
  ConsumoVehiculo(string _marcaVehiculo, float _rendimiento, float _bencinaDisponible, float _capacidadEstanque){// nombre, km/l, l,l
        marcaVehiculo=_marcaVehiculo;
        rendimiento=_rendimiento;
        bencinaDisponible=_bencinaDisponible;
        capacidadEstanque=_capacidadEstanque;
  }
  
  ConsumoVehiculo(){
      
  }
  
  //getters and setters
  string getMarcaVehiculo(){
      return marcaVehiculo;
  }
  float getRendimiento(){
      return rendimiento;
  }
  float getBencinaDisponible(){
      return bencinaDisponible;
  }
  float getCapacidadEstanque(){
      return capacidadEstanque;
  }
  void  setmarcaVehiculo(string _marcaVehiculo){
      marcaVehiculo=_marcaVehiculo;
  }
  void  setrendimiento(float _rendimiento){
       rendimiento=_rendimiento;
  }
  void   setbencinaDisponible(float _bencinaDisponible){
       bencinaDisponible=_bencinaDisponible;
  }
  void    setcapacidadEstanque(float _capacidadEstanque){
      capacidadEstanque=_capacidadEstanque;
  }
  
  void imprimir(){
      cout<<"Auto modelo: "<<getMarcaVehiculo()<<endl;
      cout<<"Rendimiento: "<<getRendimiento()<<" Km/L "<<endl;
      cout<<"Bencina: "<<getBencinaDisponible()<<" Litros "<<endl;
      cout<<" Estanque: "<<getCapacidadEstanque()<<" Litros "<<endl;
  }
  
  
  
  //
  float CuantoPuedeRecorrer(){//Rendimiento y bencina
  float x=0;
     x=getRendimiento()*getBencinaDisponible();
     return x;
  }
  
  int LlenarEstanque(int precioLitro){
      int y=0;
      y=precioLitro*(getCapacidadEstanque() - getBencinaDisponible());
      setbencinaDisponible(getCapacidadEstanque());
      return y;
  }
  
  bool ValidarDistancia(int Kmarecorrer){
      if(Kmarecorrer<CuantoPuedeRecorrer()|| Kmarecorrer==CuantoPuedeRecorrer()){
          return true;
      }else 
      return false;
  }
  
  
  private:
  string marcaVehiculo;
    float  rendimiento;
        float bencinaDisponible;
        float capacidadEstanque;
    
};






int main()
{


    return 0;
}
