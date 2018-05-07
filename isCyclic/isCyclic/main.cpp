#include<iostream>
#include<conio.h>
#include"cyclic.h"
using namespace std;

int main() {

	// 1-->2-->3
	Graph g(3);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	if (g.isCyclic())
		cout << "Cycle exists.";
	else
		cout << "No Cycle.";
	_getch();
	return 0;
}