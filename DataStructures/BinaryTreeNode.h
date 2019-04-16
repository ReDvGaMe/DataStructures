#pragma once
#include "defines.h"
class BinaryTreeNode {
public:
	BinaryTreeNode();
	virtual ~BinaryTreeNode();

private:
	BinaryTreeNode* left = NULL;
	BinaryTreeNode* right = NULL;
	Data data;

public:
	Data GetData();
	void SetData(Data data);
	BinaryTreeNode* GetLeftSubTree();
	BinaryTreeNode* GetRightSubTree();
	void SetLeftSubTree(BinaryTreeNode* left);
	void SetRightSubTree(BinaryTreeNode* right);

	void InorderTraverse(BinaryTreeNode* bt);
	void InorderTraverse();
};

