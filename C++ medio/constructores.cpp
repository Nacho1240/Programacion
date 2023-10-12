#include <iostream>//terminado
#include <math.h>
using namespace std;
class puntoCartesiano {
    public :
    
    puntoCartesiano(float _x, float _y){
        x=_x;
        y=_y;
    }
  
    float distanciaOrigen(){
        return sqrt(x*x+y*y);
    } 
    float x;
    float y;
};


float distancia(puntoCartesiano A, puntoCartesiano B){
    return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
    
}






int main()
{
puntoCartesiano car(9,7);
puntoCartesiano car2(2,9);
cout<<distancia(car,car2)<<endl;
cout<<car.distanciaOrigen()<<endl;
    return 0;
}
