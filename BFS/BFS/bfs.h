#ifndef __BFS_H_INCLUDED__
#define __BFS_H_INCLUDED__
#include <list>
using namespace std;

class Graph {	
	int V;
	list<int> *adj;
public:
	Graph(int V);	//Constructor
	void addEdge(int v, int w);		//Constructing graph
	void BFS(int s);				//BFS traversal starting with vertex s
};

#endif
