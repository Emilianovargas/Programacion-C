#include <stdio.h>
#include <stdlib.h>
//*estructura de la pila*//
struct Nodo{
	int dia;
    Nodo *siguiente;
};
//*prototipo para rellenar la pila*//
void agregar_pila(Nodo *&,int);
//*prototipo para sacar datos de la pila*//
void sacar_pila(Nodo *&,int &);
//prototipo para mostrar los datos de la pila//
void mostrarPila(Nodo *&pila);
int main (){
	//*creamos un nodo el cual indica que la pila esta vacia*//
 Nodo *pila = NULL;	
 //ingreso de datos a la pila//
	int n1,numeros,sacar_dia,sacar_elemento,buscar;
	char respuesta;
	printf("cuantos dias vas a ingresar a la pila?");
	scanf("%d",&numeros);
	printf("\n");
	for(int i=0;i<numeros;i++){
	printf("ingresa un numero para agregar a la pila:");//ingreso de datos a la pila//
	scanf("%d",&n1);//lectura de datos para ingreso a la pila//
	//funcion para agregar datos a la pila//
	 agregar_pila(pila,n1);//llamada a la funcion pasando los parametros leidos//
    }

	//funcion para quitar datos de la pila//   
    printf("quieres eliminar un dato de la pila? s/n:");
    scanf(" %c",&respuesta);//respuesta para saber si se quiere eliminar un dato//
    if(respuesta =='s'||respuesta =='S'){
    	sacar_pila(pila,sacar_dia);//llamada a la funcion para aliminar el primer dato de la pila//
	}
	
	//funcion para mostrar datos de la pila//
	 mostrarPila(pila);
	 	 
	return 0;
}
//funcion para rellenar la pila*//
void agregar_pila(Nodo *&pila,int n){
  Nodo *nuevo_nodo= new Nodo();
   nuevo_nodo->dia = n;
   nuevo_nodo->siguiente = pila;
    pila= nuevo_nodo;
    //imprime que el elemento ha sido guardado//
  printf("el elemento ha sido agregado de correctamente a la pila");
   printf("\n");
  printf("\n");
}
//funcion para eliminar datos de la pila;
void sacar_pila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n= aux->dia;
	pila= aux->siguiente;
	delete aux;
    printf("el elemento %d ha sido removido exitosamente",n);
    printf("\n");
}
//funcion para mostrar la pila//
void mostrarPila(Nodo *&pila){
while(pila!=NULL){
	printf("%d\n",pila->dia);
	pila=pila->siguiente;
}	
}