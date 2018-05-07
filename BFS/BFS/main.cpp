#include<iostream>
#include<conio.h>

#include "bfs.h"

using namespace std;

int main() {
	Graph g(6);
			
/*	https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/ BFS traversal
			1
		   / \
		  2   3
		 /  \  \
		4 ----- 5
		 \	   /	
		  \   /
			6
*/

	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(2, 5);
	g.addEdge(3, 1);
	g.addEdge(3, 5);
	g.addEdge(4, 2);
	g.addEdge(4, 5);
	g.addEdge(4, 6);
	g.addEdge(5, 2);
	g.addEdge(5, 3);
	g.addEdge(5, 4);
	g.addEdge(5, 6);
	g.addEdge(6, 4);
	g.addEdge(6, 5);
	cout << "BFS starting from vertex 3: ";
	g.BFS(3);
	_getch();
	return 0;
}