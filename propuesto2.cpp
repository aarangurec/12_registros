#include<iostream>
#include<string>
using namespace std;
struct Persona {
    string DNI;
    string  Nombre;
    float edad;
};
int main (){
    int n;
    Persona p[100];
    cout<<"El nro de Personas: "<<endl;
    cin>>n;
    if(n<0){
    	cout<<"====NO HAY PERSONAS PARA REGISTRAR===="<<endl;
	}
    cin.ignore();
    for(int i=0; i<n; i++){
        cout<<"Persona"<<"["<<i+1<<"]"<<endl;
        cout<<"Ingrese su Nombre: "<<endl;
        getline(cin, p[i].Nombre);
        cout<<"Ingrese su DNI: "<<endl;
        getline(cin, p[i].DNI);
        cout<<"Ingrese su Edad: "<<endl;
        cin>>p[i].edad;
        cin.ignore();
    }
    system("pause");
    cout<<"=====LISTA DE PERSONAS====="<<endl;
    for (int i=0; i<n; i++){
        cout<<"PERSONA: "<<"["<<i+1<<"]"<<endl;
        cout<<p[i].DNI<<endl;
        cout<<p[i].Nombre<<endl;
        cout<<p[i].edad<<endl;
    }
    cout<<"====PERSONAS MAYORES A 50===="<<endl;
    for(int i=0;i<n;i++){
    	if(p[i].edad>50){
    		cout<<"PERSONA: "<<"["<<i+1<<"]"<<endl;
        	cout<<p[i].DNI<<endl;
        	cout<<p[i].Nombre<<endl;
        	cout<<p[i].edad<<endl;
	    }
	}
    cout<<"===EL PROMEDIO DE EDADES ES: ==="<<endl;
	float cont=0, prom=0;
	for(int i=0; i<n; i++){
		cont=cont+p[i].edad;	
	}
	prom=cont/n;
	cout<<prom;
	return 0;
}