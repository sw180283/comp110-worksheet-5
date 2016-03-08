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
		
		bool operator()(const Node* node1, const Node* node2)
		{
			return node1->startPoint < node2->startPoint;
		}

		/*
		bool operator<(const Node& node1, const Node& node2)
		{
			return node1.startPoint < node2.startPoint;
		}
		*/
		

		/*
		bool reverse;
		ComparePriority(const bool& revparam = false) { reverse = revparam; }
		bool operator()(const Node& node1, const Node& node2) const
		{
			if (reverse) return (node1 > node2);
			else return(node1 < node2);
		}
		*/

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

	/*
	struct CompareNode : public std::binary_function<Node*, Node*, bool>
	{
	bool operator()(const Node* lhs, const Node* rhs) const
	{
	return lhs->getVal() < rhs->getVal();
	}
	};
	*/

	//g = 0;
	//Pathfinder pathfinder;
	//Point startPoint = start;
	//h = sqr (((x0)-pow(x1, 2)) + ((y0)-pow(y1, 2)))
}


Node::~Node()
{
}
