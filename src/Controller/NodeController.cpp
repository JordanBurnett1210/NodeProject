/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jbur0473
 */

#include "NodeController.h"

NodeController::NodeController()
{
	myStringArray = new CTECArray<string>(5);
//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
//	this->otherArrayNode.setValue("linked node");
//	stringArrayNode.setNext(&otherArrayNode);
}

NodeController::~NodeController()
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
}

void NodeController :: start()
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
	string first = "poop";
	string second = "ninja";
	string third = "baby";
	string fourth = "dew of the mountains";
	string fifth = "qin";

	myStringArray->set(0, first);
	myStringArray->set(1, second);
	myStringArray->set(2, third);
	myStringArray->set(3, fourth);
	myStringArray->set(4, fifth);

	for(int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "The contents at " << index << " are: " << myStringArray->get(index) << endl;
	}
}

