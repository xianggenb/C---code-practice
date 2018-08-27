#include "stdafx.h"
#include "Bst.h"
BST::BST()
{
	this->root = NULL;
	this->count = 0;
	this->height = 0;
}

BST::~BST()
{
}

TreeNode * BST::getRoot()
{
	return root;
}

int BST::getNodeNum()
{
	return count;
}

int BST::getHeight()
{
	return height;
}

TreeNode * BST::search(int target)
{
	if (!this->root) {
		return NULL;
	}
	return searchHelper(target, this->root);

	//or iterative way
	//TreeNode * cur = this->root;
	//while (cur) {
	//	if (cur->value == target) {
	//		continue;
	//	}
	//	else if (target < cur->value) {
	//		cur=cur->left;
	//	}
	//	else {
	//		cur = cur->right;
	//	}
	//}
	//return cur;

}

TreeNode * BST::searchHelper(int target, TreeNode* root)
{
	if (!root || root->value == target) {
		return root;
	}
	else if (target>root->value) {
		return searchHelper(target, root->left);
	}
	else {
		return searchHelper(target, root->right);
	}
	
}

void BST::insert(int val)
{
	if (!this->root) {
		this->root = new TreeNode(val);
		return;
	}
	TreeNode* cur = this->root;
	TreeNode* prev = NULL;
	while (cur) {
		prev = cur;
		if (cur->value == val) {
			return;
		}
		else if (val < cur->value) {
			cur = cur->left;
		}
		else {
			cur = cur->right;
		}
	}
	if (val < prev->value) {
		prev->left = new TreeNode(val);
	}
	else {
		prev->right = new TreeNode(val);
	}
	this->count++;
	return;
}

void BST::del(int)
{
}

void BST::print()
{
	if (!this->root) {
		std::cout << "BST empty" << std::endl;
		return;
	}

}


