#include "Edge.h"

Edge::Edge(Node* noa, Node* nob, int wei) :Node_A(noa), Node_B(nob), weight(wei) {

}
Node* Edge::getA() {
	return this->Node_A;
}
Node* Edge::getB() {
	return this->Node_B;
}
int Edge::getwei() {
	return this->weight;
}
int Edge::getWei2(Node* n1, Node* n2) {
	if ((n1 == this->getA()) && (n2 == this->getB()))
		return this->weight;
	else
		return -1;
}


