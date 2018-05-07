#ifndef _CYCLIC_H_
#define _CYCLIC_H_

#include<list>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	bool isCyclic();
	bool isCyclicUtil(int s, bool visited[], bool recstack[]);
};

#endif // !_CYCLIC_H_
