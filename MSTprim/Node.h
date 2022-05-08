#pragma once
#include<iostream>
#include<limits>
#include<vector>

using namespace std;

class Node
{
private:

	int Key;//the Key contains the minimum oe the weight what founded yet
	Node* papa;
	Node* next;
	int nodeName;
	
public:
	Node();
	Node(int k, Node* papa1,Node* nex) : Key(k), papa(papa1), next(nex) {}
	int getKey();
	void setKey(int weigt);
	Node getpap();
	void setpap(Node* no);
	Node getnex();
	void printnode() { std::cout << "the weight is: "<<this->Key<<std::endl; }
	void setName(int n) { this->nodeName = n; }
	int getName() { return this->nodeName; }
	std::vector <Node* >adj;
	friend bool operator<(const Node& n1, const Node& n2) {
		return n1.Key < n2.Key;
	}
	//bool operator<(const Node& n1, const Node& n2)
	//{
	//	return n1;
	//}

};

