/*
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.
*/

#include <iostream>
#include <string>
#include <stdlib.h>
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
	int oppizza = 0, cant;
	float totalglobal = 0, precio = 0, total1 = 0, total2 = 0, total3 = 0;
	float porc1, porc2, porc3;
	while (opcion != 3) {
		system("cls");
		cout << "-----MENU-----" << endl;
		cout << "1 - Pedir Pizza"<< endl;
		cout << "2 - Reporte" << endl;
		cout << "3 - Salir" << endl;
		cout << "INGRESE SU OPCION:"; cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			if (opcion == 1) {
				ofstream archivo;
				archivo.open("Pizzeria.txt", ios::app);
				if (archivo.fail()) {
					cout << "EL ARCHIVO FALLO" << endl;
					exit(1);
				}
				system("cls");
				cout << "-----Pizzeria Gran Sabor-----" << endl;
				cout << "1 - Pizza Grande (Q.80.00)" << endl;
				cout << "2 - Pizza Familiar (Q.115.00)" << endl;
				cout << "3 - Pizza Fiesta (Q.100.00)" << endl;
				cout << "Ingrese La Opcion De Pizza Que Desee:"; cin >> oppizza;
				cout << "Ingrese La Cantidad De Pizzas Que Desee:"; cin >> cant;
				cout << endl;
				if (oppizza == 1) {
					precio = ((80) - (80 * 0.10))*cant;
					total1+=precio;
					archivo << "-Pizza Grande-" << endl;
					archivo << "Cantidad: " << cant << endl;
					archivo << "Monto: " << precio << endl << endl;
				}
				if (oppizza == 2) {
					precio = ((115) - (115 * 0.15))*cant;
					total2+=precio;
					archivo << "-Pizza Familiar-" << endl;
					archivo << "Cantidad: " << cant << endl;
					archivo << "Monto: " << precio << endl << endl;
				}
				if (oppizza == 3) {
					precio = ((100) - (100 * 0.20))*cant;
					total3+=precio;
					archivo << "-Pizza Fiesta-" << endl;
					archivo << "Cantidad: " << cant << endl;
					archivo << "Monto: " << precio << endl << endl;
				}
				cout << "El Precio a Pagar Es: Q." << precio << endl;
				archivo.close();
				system("pause");
			}
		case 2:
			if (opcion == 2) {
				system("cls");
				totalglobal = total1 + total2 + total3;
				porc1 = (100 * total1) / totalglobal;
				porc2 = (100 * total2) / totalglobal;
				porc3 = (100 * total3) / totalglobal;
				cout << "EL Total de Pizzas Grandes es: Q." << total1 << " --- " << porc1 << "%" << endl;
				cout << "EL Total de Pizzas Familiar es: Q." << total2 << " --- " << porc2 << "%" << endl;
				cout << "EL Total de Pizzas Fiesta es: Q." << total3 << " --- " << porc3 << "%" << endl << endl;
				cout << "EL Total Global es: Q." << totalglobal << endl;
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