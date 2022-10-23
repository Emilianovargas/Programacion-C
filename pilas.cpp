#include<iostream>
using namespace std;
struct Pila{
	int numero;
	Pila *siguiente;
};
void insertar();
void visualizar();
void eliminar();
Pila *puntero,*aux;
int main(){
	
 int opc;
    do{
        cout<<"1. Insertar elemento "<<endl;
        cout<<"2. Visualizar Pila "<<endl;
        cout<<"3. Eliminar elemento "<<endl;
        cout<<"4. Salir "<<endl;
        cin>>opc;
        switch(opc){
            case 1:insertar();
            break;
            case 2:visualizar();
            break;
            case 3:eliminar();
            break;
            case 4:
            break;
        }
    }while(opc!=4);
	
	return 0;
}

void insertar(){
	if(puntero==NULL){
	puntero=new Pila();
	cout<<"introduzca un numero:";
	cin>>puntero->numero;
	puntero->siguiente=NULL;
	return;
	}
	else{
		aux=new Pila();
		cout<<"introduzca un numero:";
		cin>>aux->numero;
		aux->siguiente=puntero;
		puntero=aux;
	}
}

void visualizar(){
	if(puntero==NULL){
		cout<<"la pila esta vacia"<<endl;
	}
	else{
		cout<<"mostrando pila"<<endl;
		aux=puntero;
		while(aux!=NULL){
			cout<<aux->numero<<endl;
			aux=aux->siguiente;
		}
	}
	cout<<endl;
	cout<<endl;
}


void eliminar(){
	if(puntero==NULL){cout<<"la pila esta vacia";}
	else{
		aux=new Pila();
		aux=puntero;
		cout<<"el dato "<<aux->numero<<" "<<"ha sido eliminado";
		puntero=aux->siguiente;
		delete(aux);
	}
	cout<<endl;
}
