#include <iostream>
#include <random>

using namespace std;

int main() {
	int cantidadNumeros, minimo, maximo;
	
	cout << "Ingrese la cantidad de números aleatorios a generar: ";
	cin >> cantidadNumeros;
	
	cout << "Ingrese el valor mínimo: ";
	cin >> minimo;
	
	cout << "Ingrese el valor máximo: ";
	cin >> maximo;
	
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(minimo, maximo);
	
	cout << "Números aleatorios generados:" << endl;
	for (int i = 0; i < cantidadNumeros; ++i) {
		cout << dist(gen) << " ";
	}
	
	cout << endl;
	
	return 0;
}
