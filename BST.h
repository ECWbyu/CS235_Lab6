#include "BSTInterface.h"
#include "Node.h"

class BST: public BSTInterface {
public:
    BST() {}
	~BST() {}
	Node * getRootNode() const = 0;

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
    bool add(int data) = 0;

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	bool remove(int data) = 0;

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void clear() = 0;
};