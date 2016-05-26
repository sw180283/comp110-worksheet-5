#pragma once
#include "stdafx.h"
#include "Pathfinder.h"
#include "Node.h"
#include "EuclideanDistance.h"

double euclideanDistance(const Point& a, const Point& b)
{
	double dx = a.getX() - b.getX();
	double dy = a.getY() - b.getY();
	return sqrt(dx*dx + dy*dy);
}
/*
void Pathfinder::addToClosedSet();

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	// TODO: implement the A* algorithm to find a path from start to goal
	
	//Start node from Node
	//Node startNode(start);
	auto startNode = std::make_shared<Node>(start.getX(), start.getY());

	//Goal node from Node
	//Node goalNode(goal);
	auto goalNode = std::make_shared<Node>(goal.getX(), goal.getY());

	
	//if dir==4
	const int dir = 4;
	static int x[dir] = { 1, 0, -1, 0 };
	static int y[dir] = { 0, 1, 0, -1 };
	
	//closedSet is empty
	std::vector<Node> closedSet;

	//openSet has startNode in
	std::priority_queue<Node, std::vector<Node>, ComparePriority> openSet;
	openSet.push(startNode);

	//startNode.g is set 0
	startNode.g = 0;

	//Euclidean Distance startNode goalNode
	startNode.h = EuclideanDistance(startNode, goalNode);

	//cameFrom
	startNode.cameFrom = nullptr;

	//while
	while (!openSet.empty())
	{
		//getFValue
		Node currentNode(openSet.top());

		if currentNode == goalNode
		{
			return ReconstructPath(goalNode);
		}
		//remove currentNode from openSet
		openSet.pop();
		closedSet.push_back(currentNode);

		static int i;
		for (i = 0; i < dir; i++)
		{
			nextXPos = currentXPos + x[i];
			nextYPos = currentYPos + y[i];
			const Point& neighbourNode = (nextXPos, nextYPos);
			Map* map;
			if(!neighbourNode = map.isWall)
		}
	}
	//end



	std::vector<Point> result;
	return result;
}*/

std::shared_ptr<Node> Pathfinder::getOrCreateNode(int x, int y)
{
	auto result = nodes[x][y];
	if (!result)
	{
		result = std::make_shared<Node>(x, y);
		nodes[x][y] = result;
	}
	return result;
}

std::vector<std::shared_ptr<Node>> Pathfinder::getNeighbours(std::shared_ptr<Node> node)
{
	std::vector<std::shared_ptr<Node>> result;

	result.push_back(getOrCreateNode(node->point.getX() - 1, node->point.getY()));
	result.push_back(getOrCreateNode(node->point.getX() + 1, node->point.getY()));
	result.push_back(getOrCreateNode(node->point.getX(), node->point.getY() - 1));
	result.push_back(getOrCreateNode(node->point.getX(), node->point.getY() + 1));

	return result;
}

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	//closeSet{}
	std::vector<Node> closedSet;

	//openSet{startNode}
	auto startNode = std::make_shared<Node>(start.getX(), start.getY());
	auto goalNode = std::make_shared<Node>(goal.getX(), goal.getY());

	std::priority_queue<Node, std::vector<Node>, ComparePriority> openSet;
	openSet.push(startNode);

	//startNode.g<-0
	startNode->g = 0;

	//startNode.h<- EUCLIDEANDISTANCE(startNode, goalNode)
	startNode->h = euclideanDistance(start, goal);

	//startNode.cameFrom<-null
	startNode->cameFrom = nullptr;

	//while openSet is not empty do
	while (!openSet.empty())


		//currentNode<- node in openSet with lowest g+h score
		for (Node node : openSet)
		{
			nodeScore = node.g + node.h;

		}
		//if currentNode = goalNode then
			//return RECONSTRUCTPATH(goalNode)
		//end if

		//remove currentNode from openSet
		//add currentNode to closeSet

		//for each neighbourNode adjacent to currentNode do
			//if neighbourNode is not a wall and neighbourNode not in closedSet then
				//gtentative<-currentNode.g+EUCLIDEANDISTANCE(currentNode, neighbourNode)
				//if neighbourNode not in openSet or gtentative < neighbourNode.g then
					//neighbourNode.g = gtentative
					//neighbourNode.h <- EUCLIDEANDISTANCE(neighbourNode, goalNode)
					//add neighbourNode to openSet (if it is not already in)
				//end if
			//end if
		//end for
	//end while

	//return "Failed to find a path"
//end procedure
}

//RECONSTRUCTPATH(goalNode)

	//path<-{}

	//currentNode <-goalNode

	//while currentNode!=null do

		//add currentNode to the beginning of path

		//currentNode<-currentNode.cameFrom

	//end while

	//return path

//end procedure