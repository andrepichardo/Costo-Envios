/* 
*  Programa: Costo de Transporte KAOS, S.A.
*
* André Pichardo, 1067155
* Fecha: 08/02/2018
*
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{

 char nom[40];    // Nombre Completo
 char id[15];     //   Cédula de identificacion
 float peso;      //   Peso original del articulo 
 float precio;    //   Precio original del articulo
 float costo;     // Costo de transporte articulo
 
 cout<<"Programa de calculo del costo de envio de su articulo, por la empresa KAOS, S.A."<< endl;
 cout<<""<< endl;
 cout<<"<<Por favor, introduzca los datos que se le piden a continuacion>>"<< endl;
 
 cout<<"1. Nombre Completo (Maximo 40 caracteres): "<< endl;
 cin.getline(nom,40);
 
 cout<<"2. Cedula de identidad (Puede usar guiones): "<< endl;
 cin>> id;
 
 cout<<"3. El peso(Lbs) y precio original ($RD) de su articulo (separados por espacios): "<< endl;
 cin>> peso >> precio; 
 cout<<""<< endl;
 
 if (peso < 50) 
    {
	if  (precio > 75 ){
		costo = 0.00;}
	else if  (precio > 50 && precio <= 75){
		costo = 5.00;}
	else if (precio > 25 && precio <= 50){
		costo = 10.00;}
	else if (precio > 0 && precio <= 25){
		costo = 15.00 ;}
	}
	
 else 
     {
    costo = 25*(1-(pow(1.01, (-9.21)*peso)));
	 }
 
 cout<<setprecision(2)<<fixed;
 cout<< "Estos son sus resultados: " << endl;
 cout<<""<< endl;  
 cout<< setw(40) <<"(1)Cliente"<< setw(18) << "(2)Cedula" << setw(13) << "(3)Peso" << setw(13)   << "(4)Precio" << setw(13) << "(5)Costo" << endl;
 cout<< setw(40) <<   nom      << setw(18) <<      id      << setw(13) <<   peso    << setw(13)  <<    precio   << setw(13) << costo ;
 cout<<""<< endl; 
 
	system ("PAUSE");
	return 0;
}
