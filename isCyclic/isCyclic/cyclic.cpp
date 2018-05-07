#include"cyclic.h"
using namespace std;

Graph::Graph(int V) {
       	 this->V = V;
	adj = new list<int>[V+1];
}
void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

bool Graph::isCyclicUtil(int s, bool visited[], bool recstack[]) {
	if (visited[s] == false) {
		//mark nodes as visited
		visited[s] = true;
		recstack[s] = true;
		for (list<int>::iterator i = adj[s].begin(); i != adj[s].end(); i++) {
			if (!visited[*i] && isCyclicUtil(*i, visited, recstack))
				return true;
			else if (recstack[*i])
				return true;
		}
	}
	recstack[s] = false;
	return false;
}
bool Graph::isCyclic() {
	bool *visited = new bool[V + 1];
	bool *recstack = new bool[V + 1];
	int i;
	for (i = 0; i <= V + 1; i++) {
		visited[i] = false;
		recstack[i] = false;
	}
	for (i = 1; i <= V; i++) {
		if (isCyclicUtil(i, visited, recstack))	
			return true;
	}
	return false;
}
