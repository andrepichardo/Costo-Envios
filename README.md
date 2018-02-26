# Costos-Viajes
Programa que calcula el costo de un viaje en automóvil a partir de los datos ingresados por el usuario.
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<mespace std;
int main()
{

 float mpg= 0.00;    // Millas por galon
 float p= 0.00;      //   precio por galón
 float d= 0.00;      //   Distancia en Kms 
 float pe= 234.30;   // Precio estandar galosina premium
 
 cout<<"Bienvenido al programa de calculo del costo de tu viaje"<< endl;
 cout<<""<< endl;
 cout<<"<<Por favor, introduzca los datos que se le piden a continuacion>>"<< endl;
 cout<<"1. Rendimiento del vehiculo (Millas por Galon): < endl;
 cin>> mpg;
 cout<<"2. Precio por galon (presione '0' para usar valor estandar) "<< endl;
 cin>> p;
  if (p == 0)
    	{
	    p = pe;ath.h>
using nam
	    }
 cout<<"3. Distancia en Kilometros (Kms): "<< endl;
 cin>> d; 
 cout<<setprecision(3)<<fixed;
 cout<<""<< endl;
 cout<<"El costo total de su viaje seria de: $RD "<< ((0.621371*d)/(mpg))*(p)  << " Pesos dominicanos" << endl;
 cout<<"Feliz Viaje!"<< endl;
 cout<<""<< endl;
   
	
	system ("PAUSE");
	return 0;
}
