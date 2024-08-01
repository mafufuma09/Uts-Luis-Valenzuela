
#include <iostream>
#include <cstdlib>
#include <ctime>
	
	using namespace std;

bool esPrimo(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	const int TAMANO
		= 20;
	int numeros[TAMANO];
	int primos[TAMANO];
	int contadorPrimos = 0;
	
	srand(time(NULL));
	
	for (int i = 0; i < TAMANO; ++i) {
		numeros[i] = rand() % 100;
	}
	
	for (int i = 0; i < TAMANO; ++i) {
		if (esPrimo(numeros[i])) {
			primos[contadorPrimos] = numeros[i];
			contadorPrimos++;
		}
	}
	
	cout << "Números aleatorios:" << endl;
	for (int i = 0; i < TAMANO; ++i) {
		cout << numeros[i] << " ";
	}
	cout << endl;
	
	cout << "Números primos:" << endl;
	for (int i = 0; i < contadorPrimos; ++i) {
		cout << primos[i] << " ";
	}
	cout << endl;
	
	return 0;
}

