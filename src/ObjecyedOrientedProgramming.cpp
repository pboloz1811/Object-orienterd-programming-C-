//============================================================================
// Name        : ObjecyedOrientedProgramming.cpp
// Author      : Patryk Bołoz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


using namespace std;


class Shape {
public:
	virtual void rysuj()=0;
};

class Triangle: public Shape{
public:
	void rysuj(){
		cout << "  *  " << "\n" << " *** " << "\n" << "*****";
	}
};

class Square: public Shape {
public:
	void rysuj(){
		cout << "*****" << "\n" << "*****" << "\n" << "*****";
	}
};

enum type {
	Tri, Squ
};

class ShapeFactory {
public:
	Shape *createShape(type typ){
		switch (typ) {
		case Tri:
			return new Triangle();
			break;
		case Squ:
			return new Square();
			break;
		}
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ShapeFactory *shapeFactory = new ShapeFactory();
	Shape *triangle = shapeFactory ->createShape(Squ);
	triangle -> rysuj();
}
