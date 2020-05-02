/*
Un empresa que se dedica a la venta de seguros de vehiculos, calcula el importe
según el modelo y color del automovil, asi como la edad del conductor.

Modelo       Color             Precio
A              Blanco           240.50
Metalizado    330.00
Otros             270.50
B               Blanco          300.00
Metalizado     360.50
Otros             330.00

Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65    0%
>65                   30%

Determine el importe a pagar mostrandolo en pantalla según los datos del vehículo (modelo y color)
y la edad del conductor.

Grabe los datos a un archivo.
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int opcion = 0, mod , color, edad;
	float importe = 0;
	ofstream archivo;
	archivo.open("Importe.txt", ios::app);
	if (archivo.fail()) {
		cout << "El Archivo Fallo" << endl;
		exit(1);
	}
		
	do {
		cout << "1 - Ingresar Datos Del Vehiculo" << endl;
		cout << "2 - Ver Calculo Del Importe" << endl;
		cout << "3 - Salir" << endl;
		cout << "Ingrese Opcion: "; cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			if (opcion == 1) {
				cout << "Ingrese Datos Del Vehiculo" << endl << endl;
				cout << "---Modelo A - Presione 1, Modelo B - Presione 2" << endl;
				cout << "Ingrese El Modelo Del Vehiculo: "; cin >> mod;
				cout << endl;
				cout << "---Color Blanco - Presione 1, Color Metalizado - Presione 2, Otro Color - Presione 3" << endl;
				cout << "Ingrese Color: "; cin >> color;
				cout << endl;
				cout << "Ingrese Edad Del Conductor: "; cin >> edad;
				cout << endl;
				system("pause");
			}
		case 2:
			system("cls");
			if (opcion == 2) {
				if (edad < 31) {
					if (mod == 1 && color == 1) {
						importe = (240.50) + (240.50*0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 2) {
						importe = (330) + (330*0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 3) {
						importe = (270.50) + (270.50*0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 1) {
						importe = (300) + (300*0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 2) {
						importe = (360.50) + (360.50 * 0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 3) {
						importe = (330) + (330*0.25);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
				}
				if (edad >= 31 && edad <= 65) {
					if (mod == 1 && color == 1) {
						importe = (240.50);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 2) {
						importe = (330);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 3) {
						importe = (270.50);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 1) {
						importe = (300);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 2) {
						importe = (360.50);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 3) {
						importe = (330);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
				}
				if (edad > 65) {
					if (mod == 1 && color == 1) {
						importe = (240.50) + (240.50*0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 2) {
						importe = (330) + (330 * 0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 1 && color == 3) {
						importe = (270.50) + (270.50*0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 1) {
						importe = (300) + (300 * 0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 2) {
						importe = (360.50) + (360.50 * 0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
					if (mod == 2 && color == 3) {
						importe = (330) + (330 * 0.30);
						cout << "El Costo Del Importe Es: " << importe << endl;
					}
				}
				archivo << "1 - Modelo A" << "\t" << "2 - Modelo B" << endl;
				archivo << "1 - Color Blanco" << "\t" << "2 - Color Metalizado" << "\t" << "3 - Otro Color" << endl << endl;
				archivo << "Modelo: " << mod << endl;
				archivo << "Color: " << color << endl;
				archivo << "Edad Del Conductor: " << edad << endl;
				archivo << "Costo De Importe: " << importe << endl << endl;

				archivo.close();
				system("pause");
			}
			cout << endl;
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "Saliendo Del Programa" << endl;
				system("pause");
				break;
			}
		}
	} while (opcion != 3);
}