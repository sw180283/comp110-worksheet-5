#pragma once
#include "Point.h"
#include "Pathfinder.h"

class Node
{
public:
	Node(const Point& point);
	~Node();

	//start point of mouse
	Point startPoint;

	//current position of node
	int xPosition;
	int yPosition;

	//total distance to current
	int g;

	//Euclidean Distance (x0,y0) (x1,y1) sqr/((x0) - pow(x1, 2)) + ((y0)-pow(y1, 2))
	int h;
};