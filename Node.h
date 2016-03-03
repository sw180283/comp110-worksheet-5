#pragma once
#include "Map.h"
#include "Pathfinder.h"

class Node
{
public:
	Node();
	~Node();

	Point startPoint(map->getStartX(), map->getStartY());

};