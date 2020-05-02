/*
El director de un colegio desea realizar un programa que procese un archivo de registros correspondiente
a los diferentes alumnos del centro a fin de obtener los siguientes datos:

    Nota más alta y número de identificación del alumno correspondiente.
    Nota media del colegio.

Datos de Estudiantes:

    Identificación
    Nombre
    Nota
	*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main() {
	int n = 0;
	int alumnoid[100] , idmayor = 0;
	string nombre[100], nombremayor;
	float nota[100], sum = 0, media, notamayor = 0; 

	system("color B9");
	cout << "Ingrese cantidad de alumnos: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Ingrese Codigo del Alumno: " << endl;
		cin >> alumnoid[i];
		cout << "Ingrese Nombre del Alumno: " << endl;
		cin >> nombre[i];
		cout << "Ingrese Nota del Alumno: " << endl;
		cin >> nota[i];
		sum = sum + nota[i];
		cout << endl;
	}
	media = sum / n; 

	for (int i = 0; i < n; i++) {
		if (nota[i] > notamayor) {
			notamayor = nota[i];
		}
		if (notamayor == nota[i]) {
			idmayor = alumnoid[i];
		}
		if (notamayor == nota[i]) {
			nombremayor = nombre[i];

		}
	} 
	ofstream archivo;
	archivo.open("registro_alumnos.txt", ios::out); // abre el archivo, no existe lo crea

	if (archivo.fail()) {
		cout << "NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	archivo << "Nota mas alta: " << notamayor << endl;
	archivo << "Nombre del alumno con nota mas alta: " << nombremayor << endl;
	archivo << "ID del alumno con nota mas alta: " << idmayor << endl;
	archivo << "La media del colegio es: " << media << endl;

	archivo.close();

	system("pause");
	return 0;
}
