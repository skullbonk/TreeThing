//
//  BinarySearchTree.hpp
//  TreeThing
//
//  Created by Fairbanks, Reagan on 4/22/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
protected:
//MARK: Protected Methods
int calculateSize(BinaryTreeNode<Type> * startNode);
int calculateHeight(BinaryTreeNode<Type> * startNode);
bool isBalanced(BinaryTreeNode<Type> * startNode);
bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);

void inOrderTraversal(BinaryTreeNode<Type> * inStart);
void preOrderTraversal(BinaryTreeNode<Type> * preStart);
void postOrderTraversal(BinaryTreeNode<Type> * postStart);

void destroyTree(BinaryTreeNode<Type> * node);

BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);

coid removeNode(BinaryTreeNode<Type> * removeMe);

#endif /* BinarySearchTree_hpp */
