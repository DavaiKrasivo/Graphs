#include "Graph.h"
#include <chrono>
#include <iostream>

using namespace std;

int main()
{
	Graph graph = Graph();
	graph.readGraph("TriangleAdjList.txt");
	vector<char> marks = vector<char>();
	vector<int> result = graph.getEuleranTourEffective();

	return 0;
}