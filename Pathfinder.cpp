#include "stdafx.h"
#include "Pathfinder.h"
#include "Node.h"
/*
void closedSet()
{
	//closedSet is empty queue
	std::queue <int> closedQ;
	//closedQ.push(1);
	std::cout << "q contains " << q.size() << " elements.\n" <<std::endl;
}

void openSet()
{
	std::queue <int> openQ;
	openQ.push(start);
}
*/

std::vector<Point> Pathfinder::findPath(const Map& map, const Point& start, const Point& goal)
{
	// TODO: implement the A* algorithm to find a path from start to goal

	Node startNode(start);

	//closedSet is empty queue
	std::queue <int> closedQ;
	//closedQ.push(1);
	std::cout << "q contains " << closedQ.size() << " elements.\n" << std::endl;

	//list for priority queue
	std::priority_queue <Node> openQ;
	openQ.push(startPoint);

	//openSet had start in
	//const unsigned int start = start;
	//std::queue <Node> openQ;
	//openQ.push(startPoint);

	//startNode.g = 0
	/*void EuclideanDistance()
	{

	}
	*/
	//startNode.h = EuclideanDistance()

	std::vector<Point> result;
	return result;
}
