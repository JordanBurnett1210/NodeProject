/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jbur0473
 */

#include "CTECList.h"
#include <assert.h>

using namespace std;

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
Type CTECList<Type> :: removeFromFront()
{
	Type returnValue; //In case we need to use the value we are removing.

	assert(size > 0);
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();

	//Get what was in the head node!
	returnValue = head->getValue();
	//Delete what head is pointing to.
	delete this->head;
	//Set head to the new head.
	this->head = newHead;

	returnValue;
}

template <class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	Type returnValue;

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);
}

template <class Type>
void CTECList<Type> :: addToFront(Type)
{

}

template <class Type>
Type CTECList<Type> :: getFront()
{

}
