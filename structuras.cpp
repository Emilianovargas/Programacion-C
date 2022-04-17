#include <iostream>
using namespace std;
 typedef struct empleados{
	int num_empleado;
	char nombre[100];
	char apellido[100];
	int nomina;
	char curp[100];
	float salario;
}datos;

void entrada_empleados();
void muestra_empleados();
void modificacion_nombre();
void modificacion_apellido();
void modificacion_nomina();
void modificacion_curp();
void modificacion_salario();
int main(){

FILE *ap;
ap=fopen("datos.dat","wb");
if(ap==NULL){
   exit(1);
}
fclose(ap);
	
int opcion;
do{
	cout<<"#######     Menu      #######"<<endl;
	cout<<"1-ingreso de empleados"<<endl;
	cout<<"2-muestra de empleados"<<endl;
	cout<<"3-modificar el nombre"<<endl;
	cout<<"4-modificar el apellido"<<endl;
	cout<<"5-modificar el nomina"<<endl;
	cout<<"6-modificar el curp"<<endl;
	cout<<"7-modificar el salario"<<endl;
	cout<<"8-salir del programa"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:entrada_empleados();
		     break;
		case 2:muestra_empleados();
            break;
		case 3:modificacion_nombre();
		     break;			     
		case 4:modificacion_apellido();
			break;
		case 5:modificacion_nomina();
			break;
		case 6:modificacion_curp();
			break;
		case 7:modificacion_salario();   
		    break;  
	}
}while(opcion!=8); 

	return 0;
}

void entrada_empleados(){
	FILE *ap;
	ap=fopen("datos.dat","ab");
	if(ap==NULL){
		exit(1);
	}
	datos dato;
	cout<<"ingrese el numero de empleado:";
	cin>>dato.num_empleado;
	fflush(stdin);
	cout<<"ingrese el nombre del empleado:";
	cin>>dato.nombre;
	fflush(stdin);
	cout<<"ingrese el apellido del empleado:";
	cin>>dato.apellido;
	fflush(stdin);
	cout<<"ingrese la nomina del empleado:";
	cin>>dato.nomina;
	fflush(stdin);
	cout<<"ingrese la curp de empleado:";
	cin>>dato.curp;
	fflush(stdin);
	cout<<"ingrese el salario del empleado:";
	cin>>dato.salario;
	fflush(stdin);
	fwrite(&dato,sizeof(datos),1,ap);
	fclose(ap);
}

void muestra_empleados(){
FILE *ap;
ap=fopen("datos.dat","rb");
if(ap==NULL){
	exit(1);
}	
datos dato;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	cout<<"Nombre:"<<dato.nombre<<" "<<"Apellido:"<<" "<<dato.apellido<<" "<<"Nomina:"<<" "<<dato.nomina<<" "<<"Curp:"<<" "<<dato.curp<<" "<<"Salario:"<<" "<<dato.salario<<endl;
    fread(&dato,sizeof(datos),1,ap);
}
fclose(ap);
}

void modificacion_nombre(){
FILE *ap;
ap=fopen("datos.dat","r+b");
if(ap==NULL){
	exit(1);
}	
cout<<"ingrese el numero de empleado a modificar:";
int num_emp;
cin>>num_emp;
datos dato;
int real=0;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	if(num_emp==dato.num_empleado){
	   cout<<dato.nombre<<" "<<dato.apellido<<" "<<dato.nomina<<" "<<dato.curp<<" "<<dato.salario<<endl;
	   cout<<"un nuevo nombre:";
	   cin>>dato.nombre;
	   int pos=ftell(ap)-sizeof(datos);
	   fseek(ap,pos,SEEK_SET);
	   fwrite(&dato,sizeof(datos),1,ap);
	   cout<<"se modifico el nombre"<<endl;
	   real=1;
	   break;
	}
	fread(&dato,sizeof(datos),1,ap);
}
if(real==0){
	cout<<"no hay ningun numero de empleado con ese numero";
}
fclose(ap);
}

void modificacion_apellido(){
FILE *ap;
ap=fopen("datos.dat","r+b");
if(ap==NULL){
	exit(1);
}	
cout<<"ingrese el numero de empleado a modificar:";
int num_emp;
cin>>num_emp;
datos dato;
int real=0;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	if(num_emp==dato.num_empleado){
	   cout<<dato.nombre<<" "<<dato.apellido<<" "<<dato.nomina<<" "<<dato.curp<<" "<<dato.salario<<endl;
	   cout<<"un nuevo apellido:";
	   cin>>dato.apellido;
	   int pos=ftell(ap)-sizeof(datos);
	   fseek(ap,pos,SEEK_SET);
	   fwrite(&dato,sizeof(datos),1,ap);
	   cout<<"se modifico el apellido"<<endl;
	   real=1;
	   break;
	}
	fread(&dato,sizeof(datos),1,ap);
}
if(real==0){
	cout<<"no hay ningun numero de empleado con ese numero";
}
fclose(ap);
}

void modificacion_nomina(){
FILE *ap;
ap=fopen("datos.dat","r+b");
if(ap==NULL){
	exit(1);
}	
cout<<"ingrese el numero de empleado a modificar:";
int num_emp;
cin>>num_emp;
datos dato;
int real=0;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	if(num_emp==dato.num_empleado){
	   cout<<dato.nombre<<" "<<dato.apellido<<" "<<dato.nomina<<" "<<dato.curp<<" "<<dato.salario<<endl;
	   cout<<"una nueva nomina:";
	   cin>>dato.nomina;
	   int pos=ftell(ap)-sizeof(datos);
	   fseek(ap,pos,SEEK_SET);
	   fwrite(&dato,sizeof(datos),1,ap);
	   cout<<"se modifico la nomina"<<endl;
	   real=1;
	   break;
	}
	fread(&dato,sizeof(datos),1,ap);
}
if(real==0){
	cout<<"no hay ningun numero de empleado con ese numero";
}
fclose(ap);
}

void modificacion_curp(){
FILE *ap;
ap=fopen("datos.dat","r+b");
if(ap==NULL){
	exit(1);
}	
cout<<"ingrese el numero de empleado a modificar:";
int num_emp;
cin>>num_emp;
datos dato;
int real=0;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	if(num_emp==dato.num_empleado){
	   cout<<dato.nombre<<" "<<dato.apellido<<" "<<dato.nomina<<" "<<dato.curp<<" "<<dato.salario<<endl;
	   cout<<"una nueva curp:";
	   cin>>dato.curp;
	   int pos=ftell(ap)-sizeof(datos);
	   fseek(ap,pos,SEEK_SET);
	   fwrite(&dato,sizeof(datos),1,ap);
	   cout<<"se modifico el curp"<<endl;
	   real=1;
	   break;
	}
	fread(&dato,sizeof(datos),1,ap);
}
if(real==0){
	cout<<"no hay ningun numero de empleado con ese numero";
}
fclose(ap);
}

void modificacion_salario(){
FILE *ap;
ap=fopen("datos.dat","r+b");
if(ap==NULL){
	exit(1);
}	
cout<<"ingrese el numero de empleado a modificar:";
int num_emp;
cin>>num_emp;
datos dato;
int real=0;
fread(&dato,sizeof(datos),1,ap);
while(!feof(ap)){
	if(num_emp==dato.num_empleado){
	   cout<<dato.nombre<<" "<<dato.apellido<<" "<<dato.nomina<<" "<<dato.curp<<" "<<dato.salario<<endl;
	   cout<<"un nuevo salario:";
	   cin>>dato.salario;
	   int pos=ftell(ap)-sizeof(datos);
	   fseek(ap,pos,SEEK_SET);
	   fwrite(&dato,sizeof(datos),1,ap);
	   cout<<"se modifico el salario"<<endl;
	   real=1;
	   break;
	}
	fread(&dato,sizeof(datos),1,ap);
}
if(real==0){
	cout<<"no hay ningun numero de empleado con ese numero";
}
fclose(ap);
}


