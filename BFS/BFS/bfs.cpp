#include<iostream>
#include "bfs.h"
using namespace std;

Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V+1];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::BFS(int s) {
	bool *visited = new bool[V];	//bool array to keep track of visited nodes
	for (int i = 1; i <= V; i++)
		visited[i] = false;
	list<int> queue;				//queue to store and print the BFS output
	visited[s] = true;				//mark the first node as visited
	queue.push_back(s);				//add first node to queue	

									//Printing the first node,
									//then traverse the onnectivity of poped node with the for() loop
	while (!queue.empty()) {
		s = queue.front();
		cout << s<<"->";
		queue.pop_front();

		for (list<int>::iterator i = adj[s].begin(); i != adj[s].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}