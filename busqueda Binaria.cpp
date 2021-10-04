#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int,7 > numeros = {D,E,J,N,T,U,U,V};
	int inferior = 0;
	int superior = (int)numeros.size() - 1;
	int medio;
	int valorBuscado = 8;
	int indice = - 1;
	while (inferior <= superior) {
		medio = inferior + (superior - inferior) / 2;
		cout  << "Inferior : " << inferior << " -> " << numeros[inferior];
		cout  << "Medio : " << medio << " -> " << numeros[medio];
		cout  << "Superior : " << superior << " -> " << numeros[superior] << endl;
		if (valorBuscado == numeros[medio]) {
			indice = medio;
			break;
		}
		else if (valorBuscado > numeros[medio]) {
			inferior = medio + 1;
			break;
		}
		else if (valorBuscado > numeros[medio]) {
			superior = medio - 1;
			break;
		}
		else {
			cout << "Error";
		}	
	}
	
	cout  << "Indice del valor " << valorBuscado << " : " << indice << endl;

	return 0;

}
