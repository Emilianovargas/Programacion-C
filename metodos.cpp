//autor:Emiliano Vargas
#include <iostream>
using namespace std;
void entrada();
void burbuja();
void seleccion();
void shell();

int main(){
	    cout<<"    metodos de ordenamiento  "<<endl;
		cout<<"selecciona 1 para metodo burbuja"<<endl;
		cout<<"selecciona 2 para metodo de seleccion"<<endl;
		cout<<"selecciona 3 para metodo shell"<<endl;
		cout<<"selecciona 4 para salir del programa"<<endl;
		int opc;
	do{
		cin>>opc;
		switch(opc){
		case 1:
			burbuja();
		case 2:
			seleccion();
		       break;
		case 3:
			shell(); 
		       break;
		case 4:
		       break;	   	   	   
		}
	} while(opc!=4);
	
	return 0;
}
//metodo burbuja
void burbuja(){
int array[100],i,j,aux,n,z;
cout<<"ingrese la longitud del arreglo:";
cin>>n;
for(z=0;z<n;z++){
	cout<<"dijite los numeros del arreglo:";
	cin>>array[z];
    }
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	  if(array[j]>array[j+1]){
		  aux=array[j];
	 	  array[j]=array[j+1];
		  array[j+1]=aux;
	    }
	}
}
cout<<"orden ascendente"<<endl;
for(i=1;i<=n;i++){
	cout<<array[i]<<" ";
}
}
//metodo seleccion
void seleccion(){
int array[100],i,j,aux,n,z,eli;
cout<<"ingrese la longitud del arreglo:";
cin>>n;
for(z=0;z<n;z++){
	cout<<"dijite los numeros del arreglo:";
	cin>>array[z];
    }
    
for(i=0;i<n;i++){
	eli = i;
	for(j=i+1;j<n;j++){
		if(array[j] < array[eli]){
			eli=j;
		}
	}
	aux= array[i];
	array[i]= array[eli];
	array[eli]= aux;
}    
    cout<<"orden ascendente"<<endl;
for(i=0;i<n;i++){
	cout<<array[i]<<" ";
}    
}
//metodo shell
void shell(){
int array[100],i,j,aux,n,z,incremento;
cout<<"ingrese la longitud del arreglo:";
cin>>n;
for(z=1;z<=n;z++){
	cout<<"dijite los numeros del arreglo:";
	cin>>array[z];
    }
 incremento=n/2;
 while(incremento>0){
        for(i=incremento+1;i<=n;i++){
            j=i-incremento;
            while(j>0){
                if(array[j]>=array[j+incremento]){
                    aux = array[j];
                    array[j] = array[j+incremento];
                    array[j+incremento] = aux;
                }
                else{
                        j=0;
                    }
                j=j-incremento;
            }
        }
        incremento=incremento/2;
    }
    cout<<"orden ascendente"<<endl;
	for(i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
}