#include "BST.h"
using namespace std;

BST::BST() {
    root = new Node();
    size = 0;
}

BST::~BST() {
    delete root;
}

NodeInterface* BST::getRootNode() const {
    return root;
}

bool BST::add(int new_data) {
    if (size == 0) {
        root->setData(new_data);
        return true;
    }
    return addAt(new_data, root);
}
bool BST::addAt(int new_data, Node* node) {
    if (node->getData() == new_data) {
        return false;
    }
    if (node->getData() < new_data) {
        if (node->getLeftChild() == NULL) {
            Node* newChild = new Node(new_data);
            node->setLeftChild(newChild);
            return true;
        }
        else {
            return addAt(new_data, node->getLeftChildRaw());
        }
    }
    else {
        if (node->getRightChild() == NULL) {
            Node* newChild = new Node(new_data);
            node->setRightChild(newChild);
            return true;
        }
        else {
            return addAt(new_data, node->getRightChildRaw());
        }
    }
}

bool BST::remove(int value) {
    
}

void BST::clear() {
    delete root;
    root = new Node();
    size = 0;
}