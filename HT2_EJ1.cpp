/* Se dispone de un archivo STOCK correspondiente a la existencia de art�culos de un almac�n
y se desea se�alar aquellos art�culos cuyo nivel est� por debajo del m�nimo y que visualicen 
un mensaje �hacer pedido�. Cada art�culo contiene un registro con los siguientes campos: 
n�mero del c�digo del art�culo, nivel m�nimo, nivel actual, proveedor, precio.

El programa debe tener un menu que se especifiquen las siguientes opciones:
1) Agregar productos (Grabar datos a un archivo)
2) Leer archivo y mostrar en pantalla que productos tiene nivel minimo. 

*if (nivel actual==nivel m�nimo)
    cout<<"Nivel Minimo";
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void menu();

int main() {
	menu();
	system("pause");
}

void menu() {
	int opcion = 0;
	while (opcion != 3) {
		system("cls");
		cout << "-----MENU-----" << endl;
		cout << "1 - Agregar Productos" << endl;
		cout << "2 - Leer Archivo y Mostrar en Pantalla los Productos de Nivel Minimo" << endl;
		cout << "3 - Salir" << endl;
		cout << "INGRESE SU OPCION:"; cin >> opcion;
		cout << endl;

		switch (opcion) {
		case 1:
			if (opcion == 1) {
				int n = 0, cod, nmin, nact;
				string proveedor;
				float precio;
				ofstream archivo;
				archivo.open("Stock.txt", ios::app);
				if (archivo.fail()) {
					cout << "EL ARCHIVO FALLO" << endl;
					exit(1);
				}
				system("cls");
				cout << "-----HACER PEDIDO-----" << endl;
				cout << "Ingrese Codigo del Producto:"; cin >> cod;
				cout << "Ingrese Nivel Minimo:"; cin >> nmin;
				cout << "Ingrese Nivel Actual:"; cin >> nact;
				cout << "Ingrese Nombre de Proveedor:"; cin >> proveedor;
				cout << "Ingrese Precio del Producto: Q."; cin >> precio;
				cout << endl;
				archivo <<"Codigo"<<setw(15)<<"Nivel Min"<<setw(15)<<"Nivel Act"<<setw(15)<<"Proveedor"<<setw(15)<<"Precio Q."<<endl;
				archivo <<cod<<setw(15)<<nmin<<setw(15)<<nact<<setw(15)<<proveedor<<setw(15)<<precio<<endl;
				archivo.close();
				system("pause");
			}
		case 2:
			if (opcion == 2) {
				system("cls");
				ifstream archivo;
				string aux;
				archivo.open("Stock.txt", ios::in);
				if (archivo.fail()) {
					cout << "EL ARCHIVO FALLO" << endl;
					exit(1);
				}
				while (!archivo.eof()) {
					getline(archivo, aux);
					cout << aux << endl;
				} 
				archivo.close();
				system("pause");
			}
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "Saliendo Del Programa" << endl;
				break;
			}
		}
	}
}

