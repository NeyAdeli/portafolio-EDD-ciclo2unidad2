#include <iostream>

using namespace std;

int main() {
	int paul = 25;
	cout << paul << endl;
	
	// Obtener la direccion de memoria en la que se guardo una variable
	cout << &paul << endl;
	
	// Direccion de Paul
	int* direccionPaul = &paul;
	cout << direccionPaul << endl;
	
	// Obtener el valor en una posicion de memoria
	cout << *direccionPaul << endl; // Imprime el valor que esta en la direccion de Paul
	
	// Modificar el valor de Paul indirectamente con el puntero
	*direccionPaul = 31;
	cout << paul << endl; // 31
	
	// Segundo puntero a Paul
	int *direccionPaul2;
	direccionPaul2 = direccionPaul;
	
	cout << "\nMultiples punteros" << endl;
	cout << "direccionPaul = " << direccionPaul << endl;
	cout << "direccionPaul2 = " << direccionPaul2 << endl;
	 *direccionPaul2 = 19;
	cout << "Paul despues de modificarlo con direccionPaul2: " << paul << endl;
	
	return 0;
 }
