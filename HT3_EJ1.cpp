/* El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado. 
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string nacionalidad[1000];
	int n, edad[1000], nac[1000], mayor = 0, opcion;
	int sum15y20 = 0, sum21y25 = 0, sum26y30 = 0, sum_mayor30 = 0;
	int total = 0, bonoextran = 500, sueldo = 2500, sueldojug = 0;

	cout << "Ingrese la cantidad de jugadores: "; cin >> n;
	cout << endl;
	do {
		cout << "1 - Ingresar Datos De Los Jugadores" << endl;
		cout << "2 - Reporte" << endl;
		cout << "3 - Salir" << endl;
		cout << "Ingrese Opcion: "; cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			if (opcion == 1) {
				for (int i = 0; i < n; i++) {
					cout << "Ingrese Edad del Jugador[" << i + 1 << "]:"; cin >> edad[i];
					cout << "Si el Jugador es Extranjero Precione 1, De Lo Contrario Presione 0: "; cin >> nac[i];
					if (nac[i] == 1) {
						cout << "Ingrese La Nacionalidad del Jugador[" << i + 1 << "]:"; cin >> nacionalidad[i];
					}
					cout << endl;
				}
			}
			system("pause");
		case 2:
			system("cls");
			if (opcion == 2) {
				for (int i = 0; i < n; i++) {
					if (nac[i] == 1) {
						if (edad[i] >= 15 && edad[i] <= 20) {
							sueldojug = sueldo + bonoextran + 1400;
							sum15y20 += sueldojug;
						}
						if (edad[i] >= 21 && edad[i] <= 25) {
							sueldojug = sueldo + bonoextran + 1500;
							sum21y25 += sueldojug;
						}
						if (edad[i] >= 26 && edad[i] <= 30) {
							sueldojug = sueldo + bonoextran + 1200;
							sum26y30 += sueldojug;
						}
						if (edad[i] > 30) {
							sueldojug = sueldo + bonoextran + 800;
							sum_mayor30 += sueldojug;
						}
						cout << "El Sueldo Del Jugador[" << i + 1 << "]: Q." << sueldojug << endl;
					}
				}
				for (int i = 0; i < n; i++) {
					if (nac[i] == 0) {
						if (edad[i] >= 15 && edad[i] <= 20) {
							sueldojug = sueldo + 1400;
							sum15y20 += sueldojug;
						}
						if (edad[i] >= 21 && edad[i] <= 25) {
							sueldojug = sueldo + 1500;
							sum21y25 += sueldojug;
						}
						if (edad[i] >= 26 && edad[i] <= 30) {
							sueldojug = sueldo + 1200;
							sum26y30 += sueldojug;
						}
						if (edad[i] > 30) {
							sueldojug = sueldo + 800;
							sum_mayor30 += sueldojug;
						}
						cout << "El Sueldo Del Jugador[" << i + 1 << "]: Q." << sueldojug << endl;
					}
				}
				cout << endl;
				total = sum15y20 + sum21y25 + sum26y30 + sum_mayor30;
				cout << "El Total Por Juadores Con Edad Entre 15 Y 20 Es: Q." << sum15y20 << endl;
				cout << "El Total Por Juadores Con Edad Entre 21 Y 25 Es: Q." << sum21y25 << endl;
				cout << "El Total Por Juadores Con Edad Entre 26 Y 30 Es: Q." << sum26y30 << endl;
				cout << "El Total Por Juadores Con Edad Mayor A 30 Es: Q." << sum_mayor30 << endl;
				cout << "El Total A Pagar Por Planilla Es: Q." << total << endl;
				if (sum15y20 > sum21y25 && sum15y20 > sum26y30 && sum15y20 > sum_mayor30) {
					cout << "---El Rango De Edad Con Mayor Remuneracion Es Edad Entre 15 Y 20---" << endl << endl;
				}
				if (sum21y25 > sum15y20 && sum21y25 > sum26y30 && sum21y25 > sum_mayor30) {
					cout << "---El Rango De Edad Con Mayor Remuneracion Es Edad Entre 21 Y 25---" << endl << endl;
				}
				if (sum26y30 > sum15y20 && sum26y30 > sum21y25 && sum26y30 > sum_mayor30) {
					cout << "---El Rango De Edad Con Mayor Remuneracion Es Edad Entre 26 Y 30---" << endl << endl;
				}
				if (sum_mayor30 > sum15y20 && sum_mayor30 > sum21y25 && sum_mayor30 > sum26y30) {
					cout << "---El Rango De Edad Con Mayor Remuneracion Es Edad Mayor A 30---" << endl << endl;
				}
				system("pause");
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "Saliendo Del Programa" << endl;
				system("pause");
				break;
			}
			}
		} 
	} while (opcion != 3);
}