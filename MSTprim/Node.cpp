#include "Node.h"
#include<limits>
using namespace std;
Node::Node() {
	int key = numeric_limits<int>::max();
	Key = key;

}
//Node::Node(int key, Node* papa1,Node* nex){
//	Key=key;
//	this->papa = papa1;
//	this->next = nex;
//
//}
int Node::getKey(){
	return this->Key;
}
void Node::setKey(int weigt){
	this->Key=weigt;
}
Node Node::getpap() {
	return *this->papa;
}
Node Node::getnex() {
	return*this->next;
}
void Node::setpap( Node *pap) {
	this->papa = pap;
}

