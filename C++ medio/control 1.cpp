#include<iostream>//terminado
using namespace std;
int totalvotantes=0, resultadoap=0, resultadore=0,resultadonu=0;
class Elecciones
 {
  private:
   int votantesMesa[34001];
   int apruebos[34001];
   int rechazos[34001];
   int nulos[34001];
  public:
    Elecciones()
     {
      //asumir que est� programado
      }
    void actualizarVotacion(int mesa, int ap, int re, int nu)
     { 
     
     
        if((apruebos[mesa]||rechazos[mesa]||nulos[mesa])==0)
     	{
     	   apruebos[mesa]=ap;
     	   rechazos[mesa]=re;
     	   nulos[mesa]=nu;
		}
		else{
			cout<<"esta mesa ya fue actualizada anteriormente"<<endl;
		}
     }
     	
     	
        //actualiza para la mesa los votos apruebo, rechazo y nulos
        //ojo no se puede repetir la votaci�n sobre una mesa
       //el dato se actualiza solo una vez

      //validar que ap + re + nu <= votos mesa
      
    void resultado()
     {
        for(int i=1 ; i<=34000 ; i++)
     	{
          totalvotantes = totalvotantes + votantesMesa[i];         	
     	  resultadoap = resultadoap + apruebos[i];
     	  resultadore = resultadore + rechazos[i];
     	  resultadonu = resultadonu + nulos[i];
		
		}
     	
		int total= (resultadoap + resultadore + resultadonu);
		int prctotal = (total/totalvotantes)*100;
		int porcap = (resultadoap/totalvotantes)*100;
		int porcre = (resultadore/totalvotantes)*100;
		int porcnu = (resultadonu/totalvotantes)*100; 
		
		cout<<"El total de votantes fue:"<<total<<"su porcentaje fue:"<<prctotal<<"%"<<endl;
		cout<<"Total de votos apruebo:"<<resultadoap<<"su porcentaje fue:"<<porcap<<"%"<<endl;
		cout<<"Total de votos rechazo :"<<resultadore<<"su porcentaje fue:"<<porcre<<"%"<<endl;
        cout<<"Total de votos nulo:"<<resultadonu<<"su porcentaje fue:"<<porcnu<<"%"<<endl;
     
      //indica el total de la poblaci�n que vot�
       //el porcentaje de la poblaci�n que vota
       //votos apruebo y su % c/r al total que vota
        //votos rechazo y su % c/r al total que vota
        //votos nulo y su % c/r al total que vota
      }
    void consultarMesa(int mesa)
      {
        cout<<"consultado mesa:"<<mesa<<endl;
        cout<<"total de votantes en:"<<totalvotantes<<endl;
        cout<<"apruebos:"<<apruebos[mesa]<<endl;
        cout<<"rechazos:"<<rechazos[mesa]<<endl;
        cout<<"nulos:"<<nulos[mesa]<<endl;
       }

};
int main()
 {
  Elecciones *e = new Elecciones();
  while (true)
   {
    cout << "1.- Votar" << endl;
   cout << "2.- Resultados" << endl;
   cout << "3.- Consultar mesa" << endl;
   
   //...
   //...
   }

  }

