#include <iostream>
using namespace std;

int main()
{
    //Solicitar Fans de ambos -- 0,4pts
    int fansJ, fansH; 
    
    cout<<"Ingrese los Fans de The Joker --> ";
    cin>>fansJ;
    cout<<"Ingrese los Fans de Harley Quinn --> ";
    cin>>fansH;
    cout<<"---"<<endl;
    
    //Suma de Fans - 0,3pts
    int fansTotales = fansJ + fansH;
    
    //Porcentajes y cálculos -- 0,8pts (importante los tipos de dato y el uso de float)
    float porcJ = float(fansJ)/float(fansTotales);
    float porcH = float(fansH)/float(fansTotales);
    
    //Sentencias IF
    if(porcH >= 0.58)
    {
        cout<<"El duelo lo ha ganado Harley Quinn"<<endl; //0,5 pts (IF y cout correcto)
    }
    else if(porcJ >= 0.54)
    {
        cout<<"El duelo lo ha ganado The Joker"<<endl;	//0,5 pts (ELSE IF y cout correcto)
    }
    else
    {
        cout<<"El duelo lo ha ganado Mr. Freeze"<<endl;	//0,5 pts (ELSE y cout correcto)
    }    
}
