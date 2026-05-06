#include <iostream>
#include <string>
#include <vector>
#include <limits>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::numeric_limits;
using std::streamsize;

int main() {
    string nombre;
    int edad;
    double altura;

    cout << "Introduce tu edad: ";
    cin >> edad;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    cout << "Introduce tu altura en metros: ";
    cin >> altura;

    cout << "\n--- Perfil ---\n";
    cout << "Nombre: " << nombre << '\n';
    cout << "Edad: " << edad << '\n';
    cout << "Altura: " << altura << " m\n";
    
    if (edad >= 18)
    {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }

    return 0;
}