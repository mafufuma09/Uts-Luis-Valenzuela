#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Producto {
	string nombre;
	double precio;
	int cantidad;
	double subtotal;
};

int main() {
	string nombreCliente;
	vector<Producto> carrito;
	double totalCompra = 0, totalDescuento = 0;
	
	cout << "Ingrese el nombre del cliente: ";
	getline(cin, nombreCliente);
	
	char seguirComprando = 's';
	while (seguirComprando == 's' || seguirComprando == 'S') {
		Producto producto;
		cout << "Ingrese el nombre del producto: ";
		getline(cin, producto.nombre);
		cout << "Ingrese el precio del producto: ";
		cin >> producto.precio;
		cout << "Ingrese la cantidad: ";
		cin >> producto.cantidad;
		producto.subtotal = producto.precio * producto.cantidad;
		totalCompra += producto.subtotal;
		carrito.push_back(producto);
		
		cout << "¿Desea agregar otro producto? (s/n): ";
		cin >> seguirComprando;
		cin.ignore(); 
	}
	
	
	if (totalCompra > 1000) {
		double descuento = totalCompra * 0.2;
		totalCompra -= descuento;
		totalDescuento = descuento;
	}
	
	
	cout << "\nResumen de la compra de " << nombreCliente << endl;
	cout << "----------------------------------------" << endl;
	cout << "Producto\tPrecio\tCantidad\tSubtotal" << endl;
	for (const Producto& producto : carrito) {
		cout << producto.nombre << "\t" << producto.precio << "\t" << producto.cantidad << "\t" << producto.subtotal << endl;
	}
	cout << "----------------------------------------" << endl;
	cout << "Total compra: $" << totalCompra << endl;
	cout << "Descuento: $" << totalDescuento << endl;
	
	return 0;
}

