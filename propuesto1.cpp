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
        if (n<=0){
                cout<<"USTED NO TIENE EMPLEADOS"<<endl;
                return 0;
        }
        for (int i=0; i<n; i++){
                cout<<"Empleado: "<<i+1<<endl;
                cout<<"Su nombre es: ";
                getline(cin, e[i].Nombre);
                cout<<"Su sexo es: ";
                getline(cin, e[i].sexo);
                cout<<"Su sueldo es: ";
                cin>>e[i].sueldo;
                cin.ignore();
        }
        float Mayor=e[0].sueldo, Menor=e[0].sueldo;
        for (int i=1; i<n; i++){
                if (e[i].sueldo>Mayor){
                        Mayor=e[i].sueldo;
                }      
        }
        cout<<"LOS EMPLEADOS CON MAYOR SUELDO "<<Mayor<<"  SON: "<<endl;
        for (int i=0; i<n ; i++){
        if (e[i].sueldo==Mayor){
        cout<<"Nombre: "<<e[i].Nombre<<endl;
        cout<<"Sexo: "<<e[i].sexo<<endl; 
        cout<<"Sueldo: "<<e[i].sueldo<<endl;
        cout<<"--------------------"<<endl;
        }
        
        }

        for (int i=1; i<n; i++){
                if (e[i].sueldo<Menor){
                        Menor= e[i].sueldo;
                }
        }
        cout<<"LOS EMPLEADOS CON MENOR SUELDO "<<Menor<<"  SON: "<<endl;
        for (int i=0; i<n; i++ ){
        if(e[i].sueldo==Menor) {
        cout<<e[i].Nombre<<endl;
        cout<<e[i].sexo<<endl;
        cout<<e[i].sueldo<<endl;
        cout<<"----------------------"<<endl;
}
        }

    return 0;
    }
