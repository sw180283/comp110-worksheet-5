#pragma once
#include "Point.h"
#include "Node.h"
#include "Pathfinder.h"

class EuclideanDistance
{
public:
	EuclideanDistance(const Node& currentNode, const Node& nextNode);

	Node currentPoint;
	Node nextPoint;

	double distance;

	//current position of node
	int currentXPos;
	int currentYPos;

	//next position of node
	int nextXPos;
	int nextYPos;

	~EuclideanDistance();
};

