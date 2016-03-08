#pragma once
#include "stdafx.h"
#include "Node.h"
#include "Map.h"
#include "PathfindingApp.h"

Node::Node(const Point& point)
	: startPoint (point)
	//xPosition(point.getX()), yPosition(point.getY())
{
	struct ComparePriority
	{
		
		bool Node::operator<(const Node& node1, const Node& node2)
		{
			return node1.startPoint < node2.startPoint;
		}
		
		/*
		bool Node::operator < (const Node&) const
		{
			if (getHeuristic() < compareNode.getHeuristic())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		*/
	};



	//g = 0;
	//Pathfinder pathfinder;
	//Point startPoint = start;
	//h = sqr (((x0)-pow(x1, 2)) + ((y0)-pow(y1, 2)))
}


Node::~Node()
{
}
