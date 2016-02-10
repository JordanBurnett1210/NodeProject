/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jbur0473
 */

#include "NodeController.h"

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(3);

}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (42 * index));
	}

	for (int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts->get(index) << endl;
	}
}

