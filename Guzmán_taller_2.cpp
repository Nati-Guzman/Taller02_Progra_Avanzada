#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
/*******************************************************************************************

Febrero 15/2023
Natalia Catalina Guzmán Fuentes

Taller 2
- Se desea hacer un aplicación que genere un conjunto de números aleatorios entre 0 y 20. 
- Si el usuario lo desea,  se debe presentar un histograma sobre la frecuencia de los 
  números del conjunto de números aleatorios.
- Menú, que identifique en dos partes: 
	a) presentar la generación del conjunto de números aleatorios 
	b) presentar el histograma del conjunto de números aleatorios

********************************************************************************************/
using namespace std;

int generar_numeros(int minimo, int maximo);

struct resultados{
	int valor_maximo;
	int tam_array;
	int *int_array;
};


int main() {
	
	int i, mayor=0, k;
	resultados datos[i];
	int n,j, vector_numeros[datos[n].tam_array];
	int opcion;
	srand((unsigned)time(0));
	
	cout<<">> APLICACION QUE GENERA NUMEROS ALEATORIOS << "<<endl;
	
	do{
	cout<<endl<<" >> 1. Crear vector aleatorio con numeros del 1 al 20 de tam n"<<endl;
	cout<<" >> 2. Generar matriz de histograma"<<endl;
	cout<<" >> 0. Salir del programa"<<endl;
	cout<<endl<<" >> Digite su opcion: "<<endl;
	cout<<">> ";
	cin>>opcion;
	cout<<endl;
	
	switch(opcion){
		case 1: 
		cout<<"Digite el tam del array: (entre 1 y 19)"<<endl;
		cout<<">> ";
		cin>>datos[n].tam_array;
		cout<<endl<<"Vector aleatorio: "<<endl;
		for(i=0; i<datos[n].tam_array; i++)
			{	
				vector_numeros[datos[n].tam_array]= generar_numeros(0,19);
				cout<<vector_numeros[datos[n].tam_array]<<" ";				
			
			k=vector_numeros[datos[n].tam_array];
			if(k > mayor){
					mayor=k;
					}
			}
		cout<<endl;
		cout<<">> Mayor valor del array: "<<mayor<<endl;

	break;
	
		case 2: 
		
		
		
	break;
	}
	
	}while(opcion !=0);
	
	return 0;
}

int generar_numeros(int minimo, int maximo)
{
	return minimo + (rand()%(maximo-minimo));
}


//set wv reference

