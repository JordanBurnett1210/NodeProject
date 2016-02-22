/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: jbur0473
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	void addToFront(Type value);
	void addToEnd(Type value);
	void addAtIndex(int position, Type value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int position);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex();
	void set(int position, const Type& value);
};

#endif /* MODEL_CTECARRAY_H_ */
