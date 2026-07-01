#include<iostream>
#include<string>
using namespace std; 
struct empleado{
	string numero;
	string nombre;
	float salario;
	int ventas[11];
	float suma;
	
};
int main(){
	empleado e[100];
	int n;
	float max;
	cout<<"NRO DE EMPLEADOS "<<endl;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++){
		cout<<"EMPLEADO "<<"["<<i+1<<"]"<<endl;
		cout<<"SU NUMERO ES: "<<endl;
		getline(cin, e[i].numero);
		cout<<"SU NOMBRE ES: "<<endl;
		getline(cin, e[i].nombre);
		cout<<"SU SALARIO ES: "<<endl;
		cin>>e[i].salario;
		cin.ignore();
		cout<<"EL NUMERO DE VENTAS QUE OBTUVO EN EL ANO: "<<endl;
		for (int j=0; j<12; j++){
			cout<<"Ventas en el mes: "<<"["<<j+1<<"]"<<endl;
			cin>>e[i].ventas[j];
			cin.ignore();
		}
	}
	for(int i=0; i<n; i++){
		e[i].suma=0;
		for (int j; j<12; j++){
			e[i].suma=e[i].suma+e[i].ventas[j];
		}
	}
	e[1].suma=max;
	int nume=1;
	for (int i=2; i<n; i++){
		if(e[i].suma>max){
			e[i].suma=max;
			nume=i;
		}
	}
	cout<<"====EMPLEADOS CON MAYORES VENTAS DURANTE EL ANO===="<<endl;
	for (int i=0; i<n; i++){
		e[nume].numero=e[i].numero;
	    cout<<"EMPLEADO NRO ["<<i+1<<"]"<<endl;
	}
	cout<<"===NOMBRES DE LOS EMPLEADOS CON MAYORES VENTAS EN EL AnO==="<<endl;
	for (int i=0; i<n; i++){
		e[nume].nombre=e[i].nombre;
	    cout<<e[i].nombre<<endl;
	}
	cout<<"===SALARIO INCREMENTADO PARA: ===="<<endl;
	for(int i=0; i<n; i++){
		if(e[i].suma>100){
			cout<<"Salario del empleado "<<"["<<i+1<<"]"<<endl;
			e[i].salario=1*1*e[i].salario;
			cout<<1*1*e[i].salario;
		}
	}
	cout<<"===VENTAS INFERIORES A 30===="<<endl;
	for (int i=0; i<n ; i++ ){
		if (e[i].ventas[11]<30){
			cout<<e[i].numero<<endl;
			cout<<e[i].nombre<<endl;
		}
	}
	return 0;
}