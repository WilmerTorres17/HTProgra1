#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>

using namespace std;

void menu();

int main() {
	menu();
	system("pause");
}

void menu() {
	int opcion, n;
	int peso[1000], alt[1000], edad[1000];
	int sumpeso = 0, sumalt = 0, sumedad = 0;
	int prompeso = 0, promalt = 0, promedad = 0;
	string genero[1000];
	int auxpeso, auxalt, auxedad;

	cout << "Ingrese La Cantidad De Datos: "; cin >> n;

	do {
		cout << "1 - Insertar Datos" << endl;
		cout << "2 - Reporte Datos" << endl;
		cout << "3 - Salir" << endl;
		cout << "Ingrese Opcion: "; cin >> opcion;
		cout << endl;

		switch (opcion)
		{
		case 1:
			if (opcion == 1) {
				system("cls");
				for (int i = 0; i < n; i++) {
					cout << "Persona[" << i + 1 << "] - Ingrese Peso: "; cin >> peso[i];
					sumpeso += peso[i];
					cout << "Persona[" << i + 1 << "] - Ingrese Altura: "; cin >> alt[i];
					sumalt += alt[i];
					cout << "Persona[" << i + 1 << "] - Ingrese Edad: "; cin >> edad[i];
					sumedad += edad[i];
					cin.ignore();
					cout << "Persona[" << i + 1 << "] - Ingrese Genero(M/F): "; getline(cin, genero[i]);
					cout << endl;
				}
				prompeso = sumpeso / n;
				promalt = sumalt / n;
				promedad = sumedad / n;

				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (peso[j] > peso[j + 1]) {
							auxpeso = peso[j];
							peso[j] = peso[j + 1];
							peso[j + 1] = auxpeso;
						}
					}
				}
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (alt[j] > alt[j + 1]) {
							auxalt = alt[j];
							alt[j] = alt[j + 1];
							alt[j + 1] = auxalt;
						}
					}
				}
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (edad[j] > edad[j + 1]) {
							auxedad = edad[j];
							edad[j] = edad[j + 1];
							edad[j + 1] = auxedad;
						}
					}
				}
				for (int i = 0; i < n; i++) {

					ofstream archivo;
					archivo.open("Personas.txt", ios::app);
					if (archivo.fail()) {
						cout << "EL ARCHIVO FALLO" << endl;
						exit(1);
					}
					archivo << "Edad" << setw(14) << "Peso" << setw(14) << "Altura" << endl;
					archivo << edad[i] << setw(14) << peso[i] << setw(14) << alt[i] << endl;
					archivo.close();
				}
			}
		case 2:
			if (opcion == 2) {
				system("cls");
				cout << "La Media de Pesos es: " << prompeso << endl;
				cout << "La Media de Alturas es: " << promalt << endl;
				cout << "La Media de Edad es: " << promedad << endl;
			}
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "SALIENDO DEL PROGRAMA" << endl;
				break;
			}
		}
		} while (opcion != 3);
}
