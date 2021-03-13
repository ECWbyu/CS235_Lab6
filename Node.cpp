#include "Node.h"
using namespace std;

Node::Node() {

}

Node::Node(int startData) {
    data = startData;
}

Node::~Node() {
    delete leftChild;
    delete rightChild;
}

int Node::getData() const {
    return data;
}

void Node::setData(int newData) {
    data = newData;
}

NodeInterface* Node::getLeftChild() const {
    return leftChild;
}

NodeInterface* Node::getRightChild() const {
    return rightChild;
}

Node*& Node::getLeftChildRaw() {
    return leftChild;
}

Node*& Node::getRightChildRaw() {
    return rightChild;
}

void Node::setLeftChild(Node *&newLeft) {
    leftChild = newLeft;
}

void Node::setRightChild(Node *&newRight) {
    rightChild = newRight;
}