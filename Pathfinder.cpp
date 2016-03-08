#pragma once
#include "stdafx.h"
#include "Pathfinder.h"
#include "Node.h"

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	// TODO: implement the A* algorithm to find a path from start to goal

	Node startNode(start);

	//OpenSet
	std::priority_queue<Node*, std::vector<Node*>, ComparePriority> openQ;
	//std::priority_queue <Node, std::vector<Node>, ComparePriority> openQ;

	//constructs empty priority queue
	//std::priority_queue<Node> empty;
	//std::priority_queue<Node> openQ;
	//std::priority_queue<Node, std::vector<Node>, std::less<Node>> distanceNode;
	openQ.push(start);
	//Node node2 = openQ.top();
	openQ.pop();

	//std::cout << "openQ contains " << openQ.size() << " elements.\n" << std::endl;
	//startNode.g;

	//closedSet is empty queue
	//std::queue <int> closedQ;
	//closedQ.push(1);
	//std::cout << "q contains " << closedQ.size() << " elements.\n" << std::endl;

	//list for priority queue
	//std::priority_queue <Node> openQ;
	//openQ.push(startPoint);

	//std::priority_queue <Point> openQ;


	std::vector<Point> result;
	return result;
}
