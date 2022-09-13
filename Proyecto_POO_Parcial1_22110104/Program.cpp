#include <iostream>
#include "Program.h"
#include "Shapes.h"

using namespace std;

void Program::run() {
	//Square
	Square* s = new Square('*', 10, 10, 10, 0);
	s->draw();
	delete s;

	//Triangle
	Triangle* t = new Triangle('*', 10, 10, 10);
	t->draw();
	delete t;

	//Circle
	Circle* c = new Circle('*', 10, 10, 10);
	c->draw();
	delete c;
} //Quiero actualizar ahora