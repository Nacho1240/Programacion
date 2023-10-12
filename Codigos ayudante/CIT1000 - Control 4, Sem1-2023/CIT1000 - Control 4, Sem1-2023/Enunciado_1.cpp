#include <iostream>
using namespace std;

//Letra A
void ingresarInformacion(int a[15])
{
	for(int i=0;i<15;i++)
	{
		cout<<"Ingrese cantidad de 'Me gusta' de la pelicula "<<i<<": ";
		cin>>a[i];
	}
	cout<<"---------"<<endl;
}

//Letra B
void buscarMenoresQue(int a[15], int x)
{
	for(int i=0;i<15;i++)
	{
		if(a[i]<x)
		{
			cout<<"La pelicula numero "<<i<<" tiene menos que "<<x<<" Me gusta"<<endl;
		}
	}
	cout<<"---------"<<endl;
}

//Letra C
int obtenerMenosPopular(int a[15])
{
	int indiceMenor = 0;
	int menosLikes = a[0];
	for(int i=1;i<15;i++)
	{
		if(menosLikes>a[i])
		{
			menosLikes = a[i];
			indiceMenor = i;
		}
	}
	return indiceMenor;
}

//Letra D
float calcularPromedioDeLikes(int a[15])
{
	float suma = 0;
	float promedio;
	for(int i=0;i<15;i++)
	{
		suma = suma + float(a[i]);	
	}
	promedio = suma/15;
	return promedio;
}

void sumarLikes(int x, int y, int a[15])
{
	a[y] = a[y] + x;
	cout<<"Al sumar los "<<x<<" Me gusta, la pelicula "<<y<<" alcanzo un total de "<<a[y]<<" Me gusta"<<endl;
	cout<<"---"<<endl;
}

//Letra F
void imprimirRecomendaciones(int a[15])
{
	int copiaLikes[15];
	for(int i=0;i<15;i++) //Copiamos en copiaLikes el contenido de a[i] 
	{
		copiaLikes[i] = a[i];
	}
	
	//Ordenamos copiaLikes (las tres mayorías serán los índices 14, 13 y 12 de copiaLikes)
	int temp, pass = 0;
	for(int i = 0; i<15; i++) 
	{
   		for(int j = i+1; j<15; j++)
   		{
      		if(copiaLikes[j] < copiaLikes[i]) 
			{
         		temp = copiaLikes[i];
         		copiaLikes[i] = copiaLikes[j];
         		copiaLikes[j] = temp;
      		}
   		}
		pass++;
	}
	
	//Buscamos las 3 mas populares en a[i] (que no modificamos)
	for(int i=0;i<15;i++)
	{
		if(copiaLikes[14]==a[i] or copiaLikes[13]==a[i] or copiaLikes[12]==a[i])
		{
			cout<<"La pelicula "<<i<<" es una de las mas populares con "<<a[i]<<" Me gusta"<<endl;
		}
	}
	cout<<"----"<<endl;
}

//Solo para probar la solución generada
int main()
{
    int likesDePeliculas[15];
    ingresarInformacion(likesDePeliculas);
    buscarMenoresQue(likesDePeliculas,10); //Imprime todas las peliculas que tienen menos de 10 likes (se pudo usar cualquier valor para probar el codigo)
    cout<<"----\nLa pelicula menos popular es la numero "<<obtenerMenosPopular(likesDePeliculas)<<endl;
    cout<<"----\nEl promedio de 'Me gusta' de las peliculas es "<<calcularPromedioDeLikes(likesDePeliculas)<<"\n----"<<endl;
    sumarLikes(25,0,likesDePeliculas); //Sumamos 25 likes a la pelicula 0 (se pudo usar cualquier par de valores para probar el codigo)
    imprimirRecomendaciones(likesDePeliculas);
}
