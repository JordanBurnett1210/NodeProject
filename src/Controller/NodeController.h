/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jbur0473
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../Model/ArrayNode.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/Node.h"
#include "../Model/Node.cpp"

class NodeController
{
private:
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
	ArrayNode<string> otherArrayNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */