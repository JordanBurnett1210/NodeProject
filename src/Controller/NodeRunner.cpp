/*
 * NodeRunner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jbur0473
 */

#include "../Controller/NodeController.cpp"
#include "../Controller/Nodecontroller.h"

int main()
{
	NodeController * baseController = new NodeController;
	baseController->start();
	return 0;
}
