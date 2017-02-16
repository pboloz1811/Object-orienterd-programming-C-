/*
 * Point.cpp
 *
 *  Created on: 16.02.2017
 *      Author: patryk
 */

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) {
	this->_x = x;
	this->_y = y;
}

Point::~Point() {
	cout << "Destructor";
}

int Point::getX(){
	return this -> _x;
}

int Point::getY(){
	return this -> _y;
}
