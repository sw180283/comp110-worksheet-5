#include "stdafx.h"
#include "Node.h"
#include "Map.h"
#include "PathfindingApp.h"

Node::Node(const Point& point)
	//: startPoint (point) 
	: xPosition(point.getX()), yPosition(point.getY())
{
}


Node::~Node()
{
}
