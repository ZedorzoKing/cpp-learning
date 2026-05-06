#include <iostream>

using std::cout;
using std::cin;

int main() {

    int num;
    int result = 0;
    int ispar = 0;
    int isimpar = 0;

    cout << "Introduce un numero entero positivo: ";
    cin >> num;

    while(num <= 0) {
        cout <<"Numero invalido. Intentalo de nuevo: ";
        cin >> num;
    }

    cout << "Numeros del 1 a " << num << ".\n";

    for (int i = 1; i <= num; i++)
    {
        cout << "Numero: " << i << ".\n";
        if (i % 2 == 0)
        {
            ispar++;
        } else {
            isimpar++;
        }
        
        result += i;
    }

    cout << "suma total: " << result << ".\n";
    cout << "Cantidad de pares: " << ispar << ".\n";
    cout << "Cantidad de impares: " << isimpar << ".\n";

    return 0;
}