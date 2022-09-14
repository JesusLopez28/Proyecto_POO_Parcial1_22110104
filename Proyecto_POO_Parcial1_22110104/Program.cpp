/*López Rosales Jesús Alejandro
22110104	2°0		POO*/
#include <iostream>
#include<conio.h>
#include<Windows.h>
#include "Program.h"
#include "Shapes.h"

using namespace std;

void Program::run() { 
	menu();
}

void Program::menu() {
	int opc = 1, * pointer_shape;
	int x, y, side, height, radius, fill;
	char q;

	cout << "----------Proyecto Parcial 1 POO----------" << endl;
	cout << "Jesus Alejandro Lopez Rosales-22110104-2|O\n\n" << endl;
	system("pause");
	system("cls");

	while (opc == 1) {
		pointer_shape = new int;
		system("cls");
		cout << "-----MENU-----" << endl;
		cout << "Que figura desea dibujar?" << endl;
		cout << "1.- Cuadrado" << endl;
		cout << "2.- Triangulo" << endl;
		cout << "3.- Circulo" << endl;
		cout << "Elije una opcion: ";
		cin >> *pointer_shape;
		system("cls");


		cout << "Igrese el caracter con el que desea dibujar la figura: ";
		cin >> q;
		system("cls");

		if (*pointer_shape == 1) {
			do {
				cout << "Desea que su figura este relleno? " << endl;
				cout << "0.-No" << endl;
				cout << "1.-Si" << endl;
				cout << "Elija una opcion: ";
				cin >> fill;
				system("cls");
				cout << "Ingrese la coordenada en x: ";
				cin >> x;
				cout << "Ingrese la coordenada en y: ";
				cin >> y;
				cout << "Ingrese la longitud del lado del cuadrado: ";
				cin >> side;
				system("cls");
			} while (side <= 0);
			//Square
			Square* s = new Square(q, x, y, side, fill);
			s->draw();
			delete s;
		}
		
		if (*pointer_shape == 2) {
			do {
				cout << "Ingrese la coordenada en x: ";
				cin >> x;
				cout << "Ingrese la coordenada en y: ";
				cin >> y;
				cout << "Ingrese la longitud del lado del cuadrado: ";
				cin >> height;
				system("cls");
			} while (height <= 0);
			//Triangle
			Triangle* t = new Triangle(q, x, y, height);
			t->draw();
			delete t;
		}
		
		if (*pointer_shape == 3) {
			do {
				cout << "Ingrese la coordenada en x: ";
				cin >> x;
				cout << "Ingrese la coordenada en y: ";
				cin >> y;
				cout << "Ingrese la longitud del lado del cuadrado: ";
				cin >> radius;
				system("cls");
			} while (radius <= 0);
			//Circle
			Circle* c = new Circle(q, x, y, radius);
			c->draw();
			delete c;
		}

			cout << "\n\nDesea dibujar otra figura? " << endl;
			cout << "0.-No" << endl;
			cout << "1.-Si" << endl;
			cout << "Elija una opcion: ";
			cin >> opc;
			system("cls");
			delete pointer_shape;
	}

	cout << "\n-----------------\nFin del programa.\nGRACIAS\n-----------------\n\n" << endl;
}