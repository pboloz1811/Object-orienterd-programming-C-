/*
 * Container.h
 *
 *  Created on: 16.02.2017
 *      Author: patryk
 */

#ifndef MODELS_CONTAINER_H_
#define MODELS_CONTAINER_H_
template<typename T>
class Container {
	T _value;
public:
	T getValue();
	void setValue(T value);
};

#endif /* MODELS_CONTAINER_H_ */
