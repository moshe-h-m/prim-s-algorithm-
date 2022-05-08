#pragma once
#include<iostream>
#include"Node.h"

using namespace std;


class Edge
{
private:
	Node* Node_A;
	Node* Node_B;
	int weight;
	Edge* tree;
//protected:

public:
	Edge();
	Edge(Node* noa, Node* nob, int wei);

	Node* getA();
	Node* getB();
	int getwei();
	int getWei2(Node* n1, Node* n2);
	void printedge() { std::cout << "the weight :" << this->weight<<std::endl; }
	void printNB() { this->Node_B->printnode(); }
};

 