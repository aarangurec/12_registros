#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

void mostrarAtleta(Atleta a) {
    cout << "Nombre: " << a.nombre << endl;
    cout << "Pais: " << a.pais << endl;
    cout << "Disciplina: " << a.disciplina << endl;
    cout << "Medallas: " << a.medallas << endl;
    cout << "------------------------" << endl;
}

int main() {
    int n;
    Atleta a[100];
    
    cout << "Ingrese el numero de atletas a registrar (maximo " << 100 << "): " << endl;
    cin >> n;
    
    while (n <= 0 || n > 100) {
        if (n <= 0) {
            cout << "El numero debe ser positivo. Ingrese nuevamente: " << endl;
        } else {
            cout << "El numero excede el maximo permitido (" << 100 << "). Ingrese nuevamente: " << endl;
        }
        cin >> n;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Atleta " << i + 1 << " ---" << endl;
        
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, a[i].nombre);
        
        cout << "Pais: ";
        getline(cin, a[i].pais);
        
        cout << "Disciplina: ";
        getline(cin, a[i].disciplina);
        
        cout << "Numero de medallas: ";
        cin >> a[i].medallas;
        while (a[i].medallas < 0) {
            cout << "El numero de medallas no puede ser negativo. Ingrese nuevamente: ";
            cin >> a[i].medallas;
        }
    }
    
    cout << "\n=== TODOS LOS ATLETAS REGISTRADOS ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << ":" << endl;
        cout << "Nombre: " << a[i].nombre << endl;
        cout << "Pais: " << a[i].pais << endl;
        cout << "Disciplina: " << a[i].disciplina << endl;
        cout << "Medallas: " << a[i].medallas << endl;
        cout << "------------------------" << endl;
    }
    
    // Búsqueda por país
    string paisBuscado;
    cout << "\n=== BUSQUEDA POR PAIS ===" << endl;
    cout << "Ingrese el nombre de un pais para ver sus atletas: ";
    cin.ignore();
    getline(cin, paisBuscado);
    
    int encontrados = 0;
    int indiceMayorMedallas = -1;
    int mayorMedallas = -1;
    
    cout << "\n--- Atletas de " << paisBuscado << " ---" << endl;
    
    for (int i = 0; i < n; i++) {
        if (a[i].pais == paisBuscado) {
            mostrarAtleta(a[i]);  
            encontrados++;
            
            if (a[i].medallas > mayorMedallas) {
                mayorMedallas = a[i].medallas;
                indiceMayorMedallas = i;
            }
        }
    }
    
    if (encontrados == 0) {
        cout << "No se encontraron atletas del pais " << paisBuscado << endl;
    } else {
        cout << "\n=== ATLETA CON MAS MEDALLAS DE " << paisBuscado << " ===" << endl;
        cout << "El atleta con mayor numero de medallas es:" << endl;
        mostrarAtleta(a[indiceMayorMedallas]);
        cout << "Total de atletas encontrados: " << encontrados << endl;
    }
    
    cout << "\nPrograma finalizado." << endl;
    
    return 0;
}