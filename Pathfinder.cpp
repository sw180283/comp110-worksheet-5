#include "stdafx.h"
#include "Pathfinder.h"
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

	//closedSet is empty queue
	std::queue <int> closedQ;
	//closedQ.push(1);
	std::cout << "q contains " << closedQ.size() << " elements.\n" << std::endl;

	//openSet had start in
	//ERROR why doesn't it take the start from const Point?
	//What can I change the type to?
	//const unsigned int start = start;
	//dynamic_cast<void*>(start);
	std::queue <const unsigned int> openQ;
	openQ.push(start);

	//startNode.g = 0
	/*void EuclideanDistance()
	{

	}
	*/
	//startNode.h = EuclideanDistance()

	std::vector<Point> result;
	return result;
}
