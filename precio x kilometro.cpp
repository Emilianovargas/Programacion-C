#include <iostream>
#include <iomanip>
using namespace std;
float kilometro,precio;
int main(){

	cout<<"ingresa los kilometros a recorrer:";
	cin>>kilometro;
	cout<<"ingresa el costo de viaje por kilometro:";
	cin>>precio;//ingreso de datos 
	precio=precio*kilometro;//calculo del viaje por kilometro
	cout<<"El costo del viaje es: $"<<" "<<setprecision(2)<<fixed<<precio;
	
	return 0;
}