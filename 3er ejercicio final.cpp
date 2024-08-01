#include <iostream>

using namespace std;

int main() {
	const int TAMANO_ARRAY = 10;
	int numeros[TAMANO_ARRAY];
	
	
	cout << "Ingrese 10 números enteros:" << endl;
	for (int i = 0; i < TAMANO_ARRAY; ++i) {
		cin >> numeros[i];
	}
	
	
	int suma_positivos = 0, suma_negativos = 0;
	int contador_positivos = 0, contador_negativos = 0;
	
	
	for (int i = 0; i < TAMANO_ARRAY; ++i) {
		if (numeros[i] > 0) {
			suma_positivos += numeros[i];
			contador_positivos++;
		} else if (numeros[i] < 0) {
			suma_negativos += numeros[i];
			contador_negativos++;
		}
	}
	
	
	double promedio_positivos = (contador_positivos > 0) ? (double)suma_positivos / contador_positivos : 0.0;
	double promedio_negativos = (contador_negativos > 0) ? (double)suma_negativos / contador_negativos : 0.0;
	

	cout << "Promedio de los números positivos: " << promedio_positivos << endl;
	cout << "Promedio de los números negativos: " << promedio_negativos << endl;
	
	return 0;
}

