#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void menu();
 
int main() {
	menu();
	system("pause");
}

void menu(){
	int opcion;
	int mod[4], cant[1000];
	int summod1 = 0, summod2 = 0, summod3 = 0, summod4 = 0;
	int mayor = 0;

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
				for (int i = 0; i < 30; i++) {
					cout << "DIA[" << i + 1 << "] - Ingrese Modelo(1-4): "; cin >> mod[i];
					cout << "DIA[" << i + 1 << "] - Ingrese Cantidad: "; cin >> cant[i];
					cout << endl;

					ofstream archivo;
					archivo.open("Libreria.txt", ios::app);
					if (archivo.fail()) {
						cout << "EL ARCHIVO FALLO" << endl;
						exit(1);
					} 
					archivo << "DIA" << setw(12) << "MODELO" << setw(12) << "CANTIDAD" << endl;
					archivo << i + 1 << setw(12) << mod[i] << setw(12) << cant[i] << endl;
					archivo.close();
				}
			}
		case 2:
			if (opcion == 2) {
				system("cls");
				for (int i = 0; i < 30; i++){
					if (mod[i] == 1) {
						summod1++;
					}
					if (mod[i] == 2) {
						summod2++;
					}
					if (mod[i] == 3) {
						summod3++;
					}
					if (mod[i] == 4) {
						summod4++;
					}
					if (mod[i] > mayor) {
						mod[i] = mayor;
					}
				}
			}
			cout << "El total del modelo 1 es: " << summod1 << endl;
			cout << "El total del modelo 2 es: " << summod2 << endl;
			cout << "El total del modelo 3 es: " << summod3 << endl;
			cout << "El total del modelo 4 es: " << summod4 << endl;

			cout << "El modelo que mas vendio es: " << mayor << endl;
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "SALIENDO DEL PROGRAMA" << endl;
				break;
			}
		}
	} while (opcion != 3);
}
