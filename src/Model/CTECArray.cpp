/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jbur0473
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type> :: CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if(size <= 0)
	{
		cerr<< "Impossibru!!"<< endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//We have more than one ArrayNode.
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
		}
		else
		{	//This is the first node in the array.
			ArrayNode<Type> first;
			head = &first;
		}
	}

}

template <class Type>
CTECArray<Type> :: ~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type* CTECArray<Type>:: get(int position)
{
	//Bounds check for size and negative.
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		//Inclusive cause I am garunteed to be in the bounds :)
		for(int spot = 0; spot <= position; spot++)
		{

			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	//Bounds check for size and negative
	if(position >= size || position <0)
	{
		cerr<< "Don't do this! out of bounds! no touchdown for you!" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{

			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}
