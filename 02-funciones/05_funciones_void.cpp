#include <iostream>

using std::cout;
using std::cin;

int numeroPositivo(int num) {
	while (num <= 0) {
		cout << "Porfavor introduzca un numero postivo: ";
		cin >> num;
	}
	return num;
}

int sumaNumero(int num) {
	int suma = 0;

	for (int i = 1; i <= num; i++) {
		suma += i;
	}

	return suma;
}

int paresFuncion(int num) {
	int esparImpar = 0;

	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			esparImpar += 1;
		}
	}
	return esparImpar;
}

void imprimeNumeros(int num) {
	for (int i = 1; i <= num; i++) {
		cout << "Numero: " << i << "\n";
	}
}

void imprimirResumen(int num, int suma, int pares) {
	cout << "Suma total: " << suma << "\n";
	cout << "Cantidad de pares: " << pares << "\n";
	cout << "Cantidad de impares: " << num - pares << "\n";
}

int main() {
	int num = 0;
	int suma, pares;

	num = numeroPositivo(num);
	suma = sumaNumero(num);
	pares = paresFuncion(num);

	imprimeNumeros(num);
	imprimirResumen(num, suma, pares);

	return 0;
}
