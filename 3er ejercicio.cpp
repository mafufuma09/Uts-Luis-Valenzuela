#include <iostream>

using namespace std;

void abrirPuertas() {
	cout << "Se han abierto las puertas del ascensor." << endl;
}

void cerrarPuertas() {
	cout << "Se han cerrado las puertas del ascensor." << endl;
}

void subirPiso() {
	static int pisoActual = 1;
	pisoActual++;
	cout << "El ascensor se encuentra ahora en el piso " << pisoActual << endl;
}

void bajarPiso() {
	static int pisoActual = 1;
	if (pisoActual > 1) {
		pisoActual--;
		cout << "El ascensor se encuentra ahora en el piso " << pisoActual << endl;
	} else {
		cout << "Ya se encuentra en el piso más bajo." << endl;
	}
}

int main() {
	int pisoDestino;
	char opcion;
	const int pisoMaximo =5; 
	int pisoActual = 1;
	
	do {
		cout << "Ingrese el piso al que desea ir (o 'S' para salir): ";
		cin >> opcion;
		
		if (opcion >= '1' && opcion <= '9') {
			pisoDestino = opcion - '0';
			if (pisoDestino > pisoMaximo) {
				cout << "El piso ingresado es mayor al máximo permitido." << endl;
			} else {
				while (pisoActual < pisoDestino && pisoActual >= pisoMaximo) {
					subirPiso();
				}
				while (pisoActual > pisoDestino && pisoActual >= 1) {
					bajarPiso();
				}
				abrirPuertas();
				cout << "Ha llegado a su destino." << endl;
				cerrarPuertas();
			}
		} else if (opcion == 'S' || opcion == 's') {
			cout << "Saliendo del ascensor." << endl;
		} else {
			cout << "Opción inválida. Intente nuevamente." << endl;
		}
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}
