#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> temas = {
		"C++ avanzado",
		"Algoritmos",
		"Estructuras de datos",
		"Algebra lineal",
		"Probabilidad",
		"Optimizacion"
	};

	for (const auto& tema : temas) {
		std::cout << "- " << tema << '\n';
	}

	return 0;
}
