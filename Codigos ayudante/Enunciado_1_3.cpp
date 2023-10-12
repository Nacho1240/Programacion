#include <iostream>
using namespace std;

int main()
{
    //Letra A 0.6 puntos
    int N = 0;
    while(N<=100)
    {
    	cout<<"Ingrese la cantidad de obras que ha pintado Pedro (mayor a 100) --> ";
    	cin>>N;
	}
	cout<<"==="<<endl;
	
	//Letra B 1 punto
	float precioTemporal;
	float precioPinturas[N]; //Creamos el arreglo para registrar los precios
	for(int i=0;i<N;i++)
	{
		precioTemporal = 0;
		while(precioTemporal<=100.57)
		{
			cout<<"Ingrese el precio de la obra numero "<<i+1<<" (mayor a 100.57) --> ";
			cin>>precioTemporal;
		}
		precioPinturas[i] = precioTemporal; //Ya fuera del while podemos guardar el precio en el arreglo
	}
	cout<<"==="<<endl;
	
	//Letra C 1 punto
	float sumaTotal = 0; //Acumulador
	for(int i=0;i<N;i++)
	{
		sumaTotal = sumaTotal + precioPinturas[i];	
	}	
	cout<<"Al vender todas las obras se puede recaudar un total de "<<sumaTotal<<" euros"<<endl;
	cout<<"==="<<endl;
	
	//Letra D 0.4 puntos
	float precioPromedio = sumaTotal/N;
	cout<<"El precio promedio de las obras de Pedro es "<<precioPromedio<<" euros"<<endl;
	cout<<"==="<<endl;
	
	//Letra E 1 punto
	//Ordenamos el arreglo e imprimimos los primeros dos indices y los ultimos dos indices 
	float burbuja;
	for(int i=0;i<N;i++) //Usaremos el "bubblesort adaptado" por simplicidad en el uso de iteradores
	{
		for(int j=0;j<N;j++)
		{
			if(precioPinturas[i]<precioPinturas[j])
			{
				burbuja = precioPinturas[i];
				precioPinturas[i] = precioPinturas[j];
				precioPinturas[j] = burbuja;
			}
		}	
	}	
	cout<<"Las dos pinturas de menor valor cuestan "<<precioPinturas[0]<<" y "<<precioPinturas[1]<<" euros"<<endl;
	cout<<"Las dos pinturas de mayor valor cuestan "<<precioPinturas[N-2]<<" y "<<precioPinturas[N-1]<<" euros"<<endl;
	cout<<"==="<<endl;
	
	//Letra F 1 punto
	int cantidad = 0; //Contador para la cantidad
	for(int i=0;i<N;i++) 
	{
		if(precioPinturas[i]<precioPromedio)
		{
			cantidad = cantidad + 1;
		}
	}
	cout<<"Hay un total de "<<cantidad<<" pinturas con un precio inferior al promedio"<<endl;
	cout<<"==="<<endl;
	
	//Letra G 1 punto
	int cantidad2 = 0; //Contador para la cantidad
	for(int i=0;i<N;i++) 
	{
		if(precioPinturas[i]>1500)
		{
			cantidad2 = cantidad2 + 1;
		}
	}
	cout<<"Hay un total de "<<cantidad2<<" pinturas con un precio mayor a 1500 euros"<<endl;
	cout<<"==="<<endl;	
}
