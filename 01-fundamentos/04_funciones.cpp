#include <iostream>

using std::cout;
using std::cin;

int pedirNumeroPositivo(int num) {
    while (num <= 0)
    {
        cout <<"Numero invalido. Intentalo de nuevo: ";
        cin >> num;
    }
    
    return num;
}

int calcularSuma(int num) {
    
    int suma = 0;

    for (int i = 0; i <= num; i++)
    {
        suma += i;
    }
    
    return suma;
}

int contarPares(int num) {
    int pares =0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            pares++;
        }
    }
    
    return pares;
}

int main() {

    int num;
    int impares;
    int pares;
    int suma;


    cout << "Introduce un numero entero positivo: ";
    cin >> num;
    num = pedirNumeroPositivo(num);
    suma = calcularSuma(num);
    pares = contarPares(num);
    impares = num - pares;

    for (int i = 1; i <= num; i++)
    {
        cout << "Numero: " << i << ".\n";
    }
    

    cout << "suma total: " << suma << ".\n";
    cout << "Cantidad de pares: " << pares << ".\n";
    cout << "Cantidad de impares: " << impares << ".\n";

    return 0;
}