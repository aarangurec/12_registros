#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anio;
};

void mostrarPersona(Persona p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Fecha de nacimiento: " << p.dia << "/" << p.mes << "/" << p.anio << endl;
    cout << "------------------------" << endl;
}

int main() {
    int n;
    Persona personas[100];
    
    cout << "Ingrese el numero de personas a registrar:  "<<endl;
    cin >> n;
    
    while (n <= 0 || n > 100) {
        if (n <= 0) {
            cout << "El numero debe ser positivo. Ingrese nuevamente: "<<endl;
        } else {
            cout << "El numero excede el maximo permitido (" << 100 << "). Ingrese nuevamente: "<<endl;
        }
        cin >> n;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Persona " << i + 1 << " ---" << endl;
        
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, personas[i].nombre);
        
        cout << "Dia de nacimiento (1-31): ";
        cin >> personas[i].dia;
        while (personas[i].dia < 1 || personas[i].dia > 31) {
            cout << "Dia invalido. Ingrese nuevamente (1-31): ";
            cin >> personas[i].dia;
        }
        
        cout << "Mes de nacimiento (1-12): ";
        cin >> personas[i].mes;
        while (personas[i].mes < 1 || personas[i].mes > 12) {
            cout << "Mes invalido. Ingrese nuevamente (1-12): ";
            cin >> personas[i].mes;
        }
        
        cout << "Anio de nacimiento: ";
        cin >> personas[i].anio;
    }
    
    cout << "\n=== DATOS REGISTRADOS ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << ":" << endl;
        mostrarPersona(personas[i]); 
    }
    
    int mesBuscado;
    cout << "\n=== BUSQUEDA POR MES ===" << endl;
    cout << "Ingrese un numero de mes (1-12) para ver los cumpleaneros, o 0 para salir: ";
    cin >> mesBuscado;
    
    while (mesBuscado != 0) {
        while (mesBuscado < 0 || mesBuscado > 12) {
            if (mesBuscado == 0) break;
            cout << "Mes invalido. Ingrese un numero entre 1 y 12, o 0 para salir: ";
            cin >> mesBuscado;
        }
        
        if (mesBuscado == 0) break;
        
        int encontrado = 0;
        cout << "\n--- Personas que cumplen anos en el mes " << mesBuscado << " ---" << endl;
        
        for (int i = 0; i < n; i++) {
            if (personas[i].mes == mesBuscado) {
                mostrarPersona(personas[i]);  
                encontrado = 1;
            }
        }
        
        if (encontrado == 0) {
            cout << "No se encontraron personas que cumplan anos en el mes " << mesBuscado << endl;
        }
        
        cout << "\nIngrese otro numero de mes (1-12), o 0 para salir: ";
        cin >> mesBuscado;
    }
    
    cout << "\nPrograma finalizado." << endl;
    
    return 0;
}