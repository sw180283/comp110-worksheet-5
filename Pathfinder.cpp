#pragma once
#include "stdafx.h"
#include "Pathfinder.h"
#include "Node.h"
#include "EuclideanDistance.h"

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	// TODO: implement the A* algorithm to find a path from start to goal
	
	//Start node from Node
	Node startNode(start);

	//Goal node from Node
	Node goalNode(goal);
	
	//if dir==4
	const int dir = 4;
	static int dx[dir] = { 1, 0, -1, 0 };
	static int dy[dir] = { 0, 1, 0, -1 };
	
	//closedSet is empty
	std::vector<Node> closedSet;

	//openSet has startNode in
	std::priority_queue<Node, std::vector<Node>, ComparePriority> openSet;
	openSet.push(startNode);

	//startNode.g is set 0
	startNode.g = 0;

	//Euclidean Distance startNode goalNode

	startNode.h = EuclideanDistance(startNode, goalNode);


	std::vector<Point> result;
	return result;
}
