#include<iostream>
#include "dfs.h"
#include<stdio.h>
using namespace std;

Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V+1];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::DFSUtil(int s, bool visited[]) {
	//s node visited
	visited[s] = true;
	cout << s << "->";
	//Depth first search recursive calls and printing it in that order
	for (list<int>::iterator i = adj[s].begin(); i != adj[s].end(); i++)
		if (!visited[*i])
			DFSUtil(*i, visited);
}
void Graph::DFS(int s) {
	bool *visited = new bool[V];
	for (int i = 1; i <= V; i++)	//mark all nodes as not visited
		visited[i] = false;
	DFSUtil(s, visited);	//Helper function
}
