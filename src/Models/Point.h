/*
 * Point.h
 *
 *  Created on: 16.02.2017
 *      Author: patryk
 */

#ifndef MODELS_POINT_H_
#define MODELS_POINT_H_

class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y);
	virtual ~Point();
	int getY();
	int getX();
};

#endif /* MODELS_POINT_H_ */
