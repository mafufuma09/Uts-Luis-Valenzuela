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
		cout << "Calculadora de �reas" << endl;
		cout << "1. C�rculo" << endl;
		cout << "2. Tri�ngulo" << endl;
		cout << "3. Cuadrado" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese la opci�n deseada: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			double radio;
			cout << "Ingrese el radio del c�rculo: ";
			cin >> radio;
			if (validarEntrada(radio)) {
				resultado = calcularAreaCirculo(radio);
				cout << "El �rea del c�rculo es: " << resultado << endl;
			} else {
				cout << "El radio debe ser un n�mero positivo." << endl;
			}
			break;
		case 2:
			double base, altura;
			cout << "Ingrese la base del tri�ngulo: ";
			cin >> base;
			cout << "Ingrese la altura del tri�ngulo: ";
			cin >> altura;
			if (validarEntrada(base) && validarEntrada(altura)) {
				resultado = calcularAreaTriangulo(base, altura);
				cout << "El �rea del tri�ngulo es: " << resultado << endl;
			} else {
				cout << "La base y la altura deben ser n�meros positivos." << endl;
			}
			break;
		case 3:
			double lado;
			cout << "Ingrese el lado del cuadrado: ";
			cin >> lado;
			if (validarEntrada(lado)) {
				resultado = calcularAreaCuadrado(lado);
				cout << "El �rea del cuadrado es: " << resultado << endl;
			} else {
				cout << "El lado debe ser un n�mero positivo." << endl;
			}
			break;
		case 0:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opci�n inv�lida." << endl;
		}
	} while (opcion != 0);
	
	return 0;
}
