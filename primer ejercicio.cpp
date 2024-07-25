#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaCirculo(double radio) {
	return 'M_PI' * pow(radio, 2);
}

double calcularAreaTriangulo(double base, double altura) {
	return (base * altura) / 2;
}

double calcularAreaCuadrado(double lado) {
	return lado * lado;
}

bool validarEntrada(double valor) {
	return valor > 0;
}

int main() {
	int opcion;
	double resultado;
	
	do {
		cout << "Calculadora de áreas" << endl;
		cout << "1. Círculo" << endl;
		cout << "2. Triángulo" << endl;
		cout << "3. Cuadrado" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese la opción deseada: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			double radio;
			cout << "Ingrese el radio del círculo: ";
			cin >> radio;
			if (validarEntrada(radio)) {
				resultado = calcularAreaCirculo(radio);
				cout << "El área del círculo es: " << resultado << endl;
			} else {
				cout << "El radio debe ser un número positivo." << endl;
			}
			break;
		case 2:
			double base, altura;
			cout << "Ingrese la base del triángulo: ";
			cin >> base;
			cout << "Ingrese la altura del triángulo: ";
			cin >> altura;
			if (validarEntrada(base) && validarEntrada(altura)) {
				resultado = calcularAreaTriangulo(base, altura);
				cout << "El área del triángulo es: " << resultado << endl;
			} else {
				cout << "La base y la altura deben ser números positivos." << endl;
			}
			break;
		case 3:
			double lado;
			cout << "Ingrese el lado del cuadrado: ";
			cin >> lado;
			if (validarEntrada(lado)) {
				resultado = calcularAreaCuadrado(lado);
				cout << "El área del cuadrado es: " << resultado << endl;
			} else {
				cout << "El lado debe ser un número positivo." << endl;
			}
			break;
		case 0:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opción inválida." << endl;
		}
	} while (opcion != 0);
	
	return 0;
}
