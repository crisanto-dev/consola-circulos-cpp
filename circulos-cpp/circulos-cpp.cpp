// circulos-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Cristian Antonio Escalante Hernandez
// Problema
/* Escriba un programa que reciba como entrada el radio de un círculo y entregue como salida su perímetro y su área */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#define PI 3.1416;

extern float area(float radio);
extern float perimetro(float radio);

int main()
{
	// Declaracion y/o inicializacion de variables
	float radio;
	bool bandera = true;
	
	// Primeras salidas del programa
	cout << "Author: Crisanto\n";
	cout << "Calculo de area y perimetro de un circulo a partir de un radio\n";
	cout << "\n";
	cout << "Por favor ingrese un radio: ";


	do
	{
		cin >> radio;

		
		if (radio > 0) 
		{
			bandera = false;
			cout << "Gracias por introducir un radio, en unos momentos procesamos los resultados\n";
			system("PAUSE");
		}
		else
		{
			cout << "Por favor ingrese un radio valido (numero entero real): ";
			cin.clear(); // Limpia la entrada
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada
		}


	} while (bandera);

	cout << "A partir del radio: " << radio << "\n";
	cout << "Area = " << area(radio) << "\n";
	cout << "Perimetro = " << perimetro(radio) << "\n";
	cout << "Fin del programa!";
	system("PAUSE");
	return 0;

}

float area(float radio)
{
	radio *= radio; // Forma simple de representar r al cuadrado (a = PI r^2)
	return radio * PI;
}

float perimetro(float radio)
{
	return 2 * radio * PI;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
