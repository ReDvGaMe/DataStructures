#include "BinaryTreeNode.h"



BinaryTreeNode::BinaryTreeNode() {
}


BinaryTreeNode::~BinaryTreeNode() {

}

Data BinaryTreeNode::GetData() {
	return data;
}

void BinaryTreeNode::SetData(Data data) {
	this->data = data;
}

BinaryTreeNode* BinaryTreeNode::GetLeftSubTree() {
	return left;
}

BinaryTreeNode* BinaryTreeNode::GetRightSubTree() {
	return right;
}

void BinaryTreeNode::SetLeftSubTree(BinaryTreeNode* left) {
	this->left = left;
}

void BinaryTreeNode::SetRightSubTree(BinaryTreeNode* right) {
	this->right = right;
}

void BinaryTreeNode::InorderTraverse(BinaryTreeNode* bt) {
	if (bt == NULL)
		return;
	
	InorderTraverse(bt->left);
	cout << bt->data << endl;
	InorderTraverse(bt->right);
}

void BinaryTreeNode::InorderTraverse() {
	InorderTraverse(left);
	cout << data << endl;
	InorderTraverse(right);
}
