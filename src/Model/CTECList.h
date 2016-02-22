/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: jbur0473
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> head;
	ArrayNode<Type> end;
public:
	CTECList();
	virtual ~CTECList();
	void addToFront(Type value);
	void addToEnd(Type value);
	void addAtIndex(int position, Type value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int position);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex();
	int getSize();
	void setSize();
};

#endif /* MODEL_CTECLIST_H_ */