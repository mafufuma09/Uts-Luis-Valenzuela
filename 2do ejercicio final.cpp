#include <iostream>
#include <cstdlib>
#include <ctime>
	
	using namespace std;

int main() {
	const int FILAS = 4;
	const int COLUMNAS = 5;
	int matriz[FILAS][COLUMNAS];
	
	srand(time(NULL));
	
	
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			matriz[i][j] = rand()
				% 10;
		}
	}
	
	int sumaFilas[FILAS] = {0};
	int sumaColumnas[COLUMNAS] = {0};
	int sumaTotal = 0;
	
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			sumaFilas[i] += matriz[i][j];
			sumaColumnas[j] += matriz[i][j];
			sumaTotal += matriz[i][j];
		}
	}
	
	cout << "   ";
	for (int j = 0; j < COLUMNAS; j++) {
		cout << j + 1 << "  ";
	}
	cout << "  Suma" << endl;
	
	for (int i = 0; i < FILAS; i++) {
		cout << i + 1 << "  ";
		for (int j = 0; j < COLUMNAS; j++) {
			cout << matriz[i][j] << "  ";
		}
		cout << sumaFilas[i] << endl;
	}
	
	cout << "Suma";
	for (int j = 0; j < COLUMNAS; j++) {
		cout << "  " << sumaColumnas[j];
	}
	cout << "  " << sumaTotal << endl;
	
	return 0;
}

