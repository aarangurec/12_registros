#include<iostream>
#include<string>
using namespace std;
struct Empleado{
        string Nombre;
        string sexo;
        float sueldo;};
int main(){
        int n;
        Empleado e[100];
        cout<<"Cantidad de empleados: "<<endl;
        cin>>n;
        cin.ignore();
        for (int i; i<n; i++){
                cout<<"Empleado: "<<i+1<<endl;
                cout<<"Su nombre es: ";
                getline(cin, e[i].Nombre);
                cout<<"Su sexo es: ";
                getline(cin, e[i].sexo);
                cout<<"Su sueldo es: ";
                cin>>e[i].sueldo;
                cin.ignore();
        }
        int Mayor=0, Menor=0;
        for (int i=1; i<n; i++){
                if (e[i].sueldo>e[Mayor].sueldo){
                        Mayor=i;
                }      
        }
        cout<<"EL EMPLEADO CON MAYOR SUELDO ES: "<<endl;
        cout<<e[Mayor].sueldo<<endl;
        cout<<e[Mayor].Nombre<<endl;
        cout<<e[Mayor].sexo<<endl;
        for (int i=1; i<n; i++){
                if (e[i].sueldo<e[Menor].sueldo){
                        Menor = i;
                }
        }
        cout<<"EL EMPLEADO CON MENOR SUELDO ES: "<<endl;
        cout<<e[Menor].sueldo<<endl;
        cout<<e[Menor].Nombre<<endl;
        cout<<e[Menor].sexo<<endl;



    return 0;
    }
