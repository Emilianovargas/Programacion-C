#include <iostream>
using namespace std;
int matriz [100][100];
int a,b;
int main(){
	cout<<"ingresa el tamanio de la matriz de la matriz:";
	cin>>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<"ingresa los datos para la matriz:";
			cin>>matriz[i][j];
	    }
   }   

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}