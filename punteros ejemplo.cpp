#include <iostream>

 using namespace std;

int main() {
	int a = 5, b = 10;
	int *p1, *p2; // Dos punteros de tipo int

	p1 = &a; // Apunta a la direccion (&) de la variable a
	p2 = &b;
	*p1 = 10; // Modifica el cont.(*) en la direccion (&) del punt
	p1 = p2;
	*p1 = 20;
	
	cout << "a = "<< a << endl;
	cout << "b = "<< b << endl;

	return 0;
}

