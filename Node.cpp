#pragma once
#include "stdafx.h"
#include "Node.h"
#include "Map.h"
#include "PathfindingApp.h"

Node::Node(const Point& point)
	: startPoint(point)
	//xPosition(point.getX()), yPosition(point.getY())
{
	struct ComparePriority
	{	
		friend bool operator<(const Node& node1, const Node& node2)
		{
			return node1.getHValue() > node2.getHValue();
		}
	};

	//what does Dest do?
	void calculateFValue(const Point& pointDest)
	{
		//Is the * 10 to stop it from being a decimal?
		FValue = GValue + getHValue(pointDest) * 10;
	}

	/*
	void updateGValue(const int& direction)
	{
	GValue += (dir == 4 ? (i % 2 == 0 ? 10 : 14) : 10);
	}
	*/

	//Estimate the remaining distance
	const int & getH(const Point& pointDest) const
	{
		static int xd, yd, d;
		xd = pointDest.getX() - xPos;
		yd = pointDest.getY() - yPos;

		//Euclidian distance
		d = static_cast<int>(sqrt((double)(xd*xd + yd*yd)));

		return(d);
	}

}


Node::~Node()
{
}
