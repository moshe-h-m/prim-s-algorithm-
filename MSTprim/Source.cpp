#include<iostream>
#include<queue>
#include<vector>
#include"Edge.h"
#include"Node.h"

using namespace std;

template<typename T> bool find_in_queue(T& q,Node* n) {
	Node* n1;
	while (!q.empty()) {
		n1 = q.top();
		if (n->getName() == n1->getName())
			return true;		
		q.pop();
	}
	return false;
}
int getWeight(Edge* tree, Node* n1, Node* n2, int size) {
	for (int i = 0; i < size; i++) {
		if (tree[i].getA()->getName() == n1->getName() && tree[i].getB()->getName() == n2->getName())
			return tree[i].getwei();
	}
	return 0;
}


vector<Node*> mst_Prim(Edge* Graph,Node** nodArr,int n,int m) {

	priority_queue<Node*,vector<Node*>, greater<Node*> >q;

	for (int i = 0; i < n; i++) {
		q.push(nodArr[i]);
	}
	//while (!q.empty()) {
	//	cout << q.top()->getKey() << " " << endl;;
	//		q.pop();
	//}
	//std::cout << '\n';

	vector<Node*>MST;
	while (!q.empty()) {
		Node* u = q.top();
		for (int i = 0; i < q.top()->adj.size(); i++) {
			int w = getWeight(Graph, u, u->adj[i], m);
			if ((find_in_queue(q, q.top()->adj[i])) && ( w<u->adj[i]->getKey()&&w!=0)) {
				u->adj[i]->setpap(u);
				u->adj[i]->setKey(w);
			}
		}
		MST.push_back(u);
		q.pop();
		cout << "Output of MST and end: ";
		for (auto j = MST.begin(); j != MST.end(); ++j) {
			Node* no = *j;
			cout << no->getName() << endl;;
		}
	}
	return MST;
}


int main() {

	Node n1;
	Node n2;
	Node n3;
	Node n4;
	Node n5;
	Node n6;
	Node n7;
	Node n8;
	Node n9;
	Node n10;
	Node n11;
	Node n12;
	Node n13;
	Node n14;
	Node n15;
	Node n16;
	Node n17;
	Node n18;
	Node n19;
	Node n20; 
	n1.setKey(0);
	n1.setpap(NULL);
	vector <Node>vecNod;
	Node* nodArry[20] = { &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11 };
	cout << "before intilize " << endl;
	for (int i = 0; i < 11; i++) {
		//nodArry[i].adj.;
		nodArry[i]->setName(i + 1);
		cout<<"the name of the node is: "<<nodArry[i]->getName()<<endl;

		cout << "\t"; (nodArry[i])->printnode();
	}
	

	Edge e12(&n1, &n2, 10);
	Edge e13(&n1,&n3,14);
	Edge e14(&n1,&n4,43);
	Edge e25(&n2,&n5,32);
	Edge e29(&n2,&n9,21);
	Edge e311(&n3,&n11,54);
	Edge e46(&n4,&n6,34);
	Edge e56(&n5,&n6,1);
	Edge e57(&n5,&n7,4);
	Edge e59(&n5,&n9,9);
	Edge e67(&n6,&n7,84);
	Edge e78(&n7,&n8,15);
	Edge e89(&n8,&n9,42);
	Edge e810(&n8,&n10,5);
	Edge e910(&n9,&n10,76);
	Edge e911(&n9,&n11,26);
	Edge e1011(&n10,&n11,18);
	cout << "~~~~~~~~~~~~~~~~ " << endl;

	//for (int i = 0; i < 11; i++) {
	//	cout << "\t" << endl;
	//	(nodArry[i]).printnode();
	//}
	Edge Tree[17] = { e12,e13,e14,e25,e29,e311,e46,e56,e57,e59,e67,e78,e89,e810,e910,e911,e1011 };
	
	for (int i = 0; i < 17; i++) {
		
		Tree[i].getA()->adj.push_back(Tree[i].getB());
		Tree[i].getB()->adj.push_back(Tree[i].getA());

	}
	for (int i = 0; i < 11; i++) {
		cout << "the node ~" << nodArry[i]->getName() << "~ Neighbors is: " << endl;
		cout << "\t~~~~~~~"<<nodArry[i]->adj.size() << "~~~~~~~~\t" << endl;
		for (int j = 0; j < nodArry[i]->adj.size(); j++) {
			//std::cout << "the adj:";
			cout<<"node no "<<j+1<<"is: "<<nodArry[i]->adj[j]->getName();
			cout << endl;
		}	
		cout <<"------------"<< endl;

	}
	vector<Node*>mstree;
	mstree=mst_Prim(Tree, nodArry, 11, 17);
	cout << "the minimal spaning tree is: " << endl;
	for (int i = 0; i < mstree.size(); i++) {
		cout << mstree[i]->getName()<<"conect to node: " <<mstree[i]->getpap().getName()<< endl;
	}





	return 0;
}
