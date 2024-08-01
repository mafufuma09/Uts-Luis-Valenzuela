#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Estudiante {
	string nombre;
	double nota1, nota2, nota3, notaFinal;
};

int main() {
	const int NUM_ESTUDIANTES = 10;
	Estudiante estudiantes[NUM_ESTUDIANTES];
	
	
	for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
		cout << "Estudiante " << i + 1 << endl;
		cout << "Nombre: ";
		cin >> estudiantes[i].nombre;
		cout << "Nota 1er corte: ";
		cin >> estudiantes[i].nota1;
		cout << "Nota 2do corte: ";
		cin >> estudiantes[i].nota2;
		cout << "Nota 3er corte: ";
		cin >> estudiantes[i].nota3;
		
	
		estudiantes[i].notaFinal = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3) / 3.0;
	}
	
	
	cout << "\nResultados:\n";
	cout << "Estudiante\tNota 1\tNota 2\tNota 3\tNota Final\n";
	for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
		cout << estudiantes[i].nombre << "\t"
			<< estudiantes[i].nota1 << "\t"
			<< estudiantes[i].nota2 << "\t"
			<< estudiantes[i].nota3 << "\t"
			<< fixed << setprecision(2) << estudiantes[i].notaFinal << endl;
	}
	
	return 0;
}
