#include <iostream>
#include <conio.h>

using namespace std;

void LineaRecta(float vo, float vi);
void BalanceDoble(float vo, float vi);
void SumaDigitos(float vo, float vi);
void Impresion(float vo, float vi);




main (){
	float vo=0.0; // pc,y;
	int vi=0, t;
	cout<<"---------------PROGRAMA QUE CALCULA LA DEPRESIACI�N DE BIENES-----------------"<<endl;
	cout<<" "<<endl;
	cout<<"Dame el valor original del bien: ";
	cin>>vo;
	cout<<" "<<endl;
	cout<<"�Cuantos a�os de vida tiene el bien? ";
	cin>>vi;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"_____________TIPOS DE METODOS PARA CALCULAR LA DEPRESIACION__________CLAVE_____"<<endl;
	cout<<"______Metodo de la Linea Recta________________________________________'1'______"<<endl;
	cout<<"______M�todo del Balance Doble________________________________________'2'______"<<endl;
	cout<<"______M�todo de la Suma de los D�gitos de los A�os ___________________'3'______"<<endl;
	cout<<" "<<endl;
	cout<<"Ingrese Clave de Tipo: ";
	cin>>t;
	cout<<" "<<endl;
	switch (t){
		case 1:
			LineaRecta(vo,vi);
		break;
		case 2:
			BalanceDoble(vo,vi);
			Impresion(vo,vi);
		break;
		case 3:
			SumaDigitos(vo,vi);
			Impresion(vo,vi);
		break;	
		
		default:
			cout<<"CALVE INVALIDA"<<endl;
		break; 
		getch();
	}
}

void LineaRecta(float vo, float vi){
	float d, nv=0.0;
	d=vo/vi;
	for(int x=0;x<vi; x++){
		cout<<"Depresiacion Anio "<<x+1<<": "<<d;	
		nv=nv+(vo-d);
		cout<<"    Nuevo Valor "<<nv<<endl;	
		
	}
	cout<<" "<<endl;
		
}

void BalanceDoble(float vo, float vi){
	float n=vo, d=0.0, nv=0.0;
	int x;
	for (x=0; x<vi; x++){
		d=(2/vi)*n;
	
		cout<<"Depresiaci�n Anio "<<x+1<<": "<<d;		
		nv=nv+(vo-d);
		cout<<"    Nuevo Valor "<<nv<<endl;	
		n=d;
		
	}
	d=vo/vi;
	cout<<" "<<endl;

	
}

void SumaDigitos(float vo, float vi){
	int x;
	float f=0.0,d=0.0, su=0.0;
	for(x=0; x<vi; x++){
		su=su+(x+1);
	}

	for(x=0; x<vi; x++){
			//cout<<su<<endl;	
		f=((x+1)-x)/su;
	//	cout<<f<<endl;
		//cout<<vo<<endl;
		d=f*vo;
		cout<<"Depresiaci�n por anio "<<x+1<<": "<<d<<endl;	

	}
		
}

void Impresion(float vo, float vi){
		cout<<" "<<endl;
	cout<<"Valor Original: "<<vo<<endl;
	cout<<"A�os de depresiacion: "<<vi<<endl;
		
}




