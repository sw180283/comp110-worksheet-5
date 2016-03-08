#pragma once
#include "stdafx.h"
#include "Pathfinder.h"
#include "Node.h"

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	// TODO: implement the A* algorithm to find a path from start to goal
	//if dir==4
	const int dir = 4;
	static int dx[dir] = { 1, 0, -1, 0 };
	static int dy[dir] = { 0, 1, 0, -1 };
	/*
	//if dir==8
	const int dir = 8;
	static int dx[dir] = { 1, 1, 0, -1, -1, -1, 0, 1};
	static int dy[dir] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	*/
	
	//closedSet is empty queue
	std::queue <int> closedQ;
	//closedQ.push(1);
	std::cout << "q contains " << closedQ.size() << " elements.\n" << std::endl;

	//Put start point into node class call it startNode
	Node startNode(start);

	//OpenSet
	std::priority_queue<Node*, std::vector<Node*>, ComparePriority> openQ;
	//std::priority_queue <Node, std::vector<Node>, ComparePriority> openQ;
	openQ.push(start);
	Node node2 = openQ.top();
	openQ.pop();
	std::cout << "openQ contains " << openQ.size() << " elements.\n" << std::endl;

	//startNode.g is 0
	startNode.g = 0;

	//startNode.h is Euclidean Distance
	startNode.h = 

	std::vector<Point> result;
	return result;
}
