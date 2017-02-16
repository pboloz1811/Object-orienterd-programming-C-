/*
 * Container.cpp
 *
 *  Created on: 16.02.2017
 *      Author: patryk
 */

#include "Container.h"

template<typename T>
T Container<T>::getValue(){
	return this -> value;
}
