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
    


    return 0;
}