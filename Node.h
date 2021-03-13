#pragma once
#include <iostream>
#include "NodeInterface.h"

class Node: public NodeInterface {
private:
    int data;
    Node* leftChild;
    Node* rightChild;
public:
	Node();
    Node(int startData);
	~Node();

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	int getData() const;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
    void setData(int newItem);

	NodeInterface * getLeftChild() const;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	NodeInterface * getRightChild() const;

    Node*& getLeftChildRaw();
    Node*& getRightChildRaw();
    void setLeftChild(Node *& newLeft);
    void setRightChild(Node *& newRight);
};