/*López Rosales Jesús Alejandro
22110104	2°0		POO*/
#include "Shapes.h"
#include <iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>

using namespace std;

//Constructores para Shape
char Shape::getCharacter() {
	return character;
}

int Shape::getX() {
	return x;
}

int Shape::getY() {
	return y;
}

void Shape::move() {
	char opcion = _getch();

	while (opcion != 'q') {
		system("cls");
		cout << "Opciones para mover la figura:" << endl;
		cout << "w.- Arriba\t";
		cout << "s.- Abajo\t";
		cout << "a.- Izquierda\t";
		cout << "d.- Derecha\t";
		cout << "q.- Salir\t";		
		draw();
		opcion = _getch();
		switch (opcion) {
		case 'w': y--; break;
		case 's': y++; break;
		case 'a': x--; break;
		case 'd': x++; break;
		}
	}
}

//Constructores para Square
int Square::getSide() {
	return side;
}

int Square::getFill() {
	return fill;
}

void Square::draw() {
	char cha;
	int x, y, s, f;
	int i = 0, j = 0;
	cha = getCharacter();
	s = getSide();
	f = getFill();
	x = getX();
	y = getY();

	for (i = 1; i < y; i++) cout << " " << endl;
	for (i = 0; i < s; i++) {
		cout << setw(x);
		for (j = 0; j < s; j++) {
			if (f == 0) {
				if (i == 0 || j == 0 || i == s - 1 || j == s - 1) {
					cout << cha;
				}else cout << ' ';
			}else cout << cha;
		}
		cout << endl;
	}
}

//Constructores para Triangle
int Triangle::getHeight() {
	return height;
}

void Triangle::draw() {
	char cha;
	int x, y, h;
	int i = 0, j = 0;
	cha = getCharacter();
	h = getHeight();
	x = getX();
	y = getY();

		for (i = 1; i < y; i++) cout << " " << endl;
		for (i = 1; i <= h; i++) {
			cout << setw(x);
			for (j = 1; j <= h - i; j++) cout << " ";
			for (j = 1; j <= 2 * i - 1; j++) cout << cha;
			cout << endl;
		}
}


//Constructores para Circle
int Circle::getRadius() {
	return radius;
}

void Circle::draw() {
	char cha;
	int x, y, r;
	int i = 0, j = 0;
	cha = getCharacter();
	r = getRadius();
	x = getX();
	y = getY();

	for (i = 1; i < y; i++) cout << " " << endl;
	for (j = 0; j <= r * 2; j++) {
		cout << setw(x);
		for (i = 0; i <= r * 2; i++) {
			if (pow(i - r, 2) + pow(j - r, 2) <= pow(r, 2)) cout << cha;
			else cout << " ";
		}
		cout << endl;
	}
}
