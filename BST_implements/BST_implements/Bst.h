#pragma once

#include <iostream>
#include <vector>

class TreeNode{
public:
	int value;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int val) : value(val), left(NULL), right(NULL) {}
};

class BST {
private:
	TreeNode * root;
	int count;
	int height;

public:
	BST();
	~BST();
	TreeNode * getRoot();
	int getNodeNum();
	int getHeight();
	TreeNode* search(int);
	TreeNode* searchHelper(int, TreeNode*);
	void insert(int);
	void del(int);
	void print();
	
	
};