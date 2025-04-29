#include <iostream>
using namespace std;

int a, b, suma, resta, multi, divi;

void pedirDatos() {
	cout << "Ingresa un numero: ";
	cin >> a;
	cout << "Ingresa un segundo numero: ";
	cin >> b;
}

void sumar() {
	suma = a + b;
}

void restar() {
	resta = a - b;
}

void multiplicar() {
	multi = a * b;
}

void dividir() {
	divi = a / b;
}

void mostrarResultado() {
	cout << "La suma de los digitos es: " << suma << endl;
	cout << "La resta de los digitos es: " << resta << endl;
	cout << "La multiplicacion de los digitos es: " << multi << endl;
	cout << "La division de los digitos es: " << divi << endl;

}

int main() {
	pedirDatos();
	sumar();
	restar();
	multiplicar();
	dividir();
	mostrarResultado();
	system("pause");
	return 0;
}
