#ifndef _DFS_H_
#define _DFS_H_

#include<list>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	void DFS(int s);
	void DFSUtil(int s, bool visited[]);
};

#endif // !_DFS_H_
