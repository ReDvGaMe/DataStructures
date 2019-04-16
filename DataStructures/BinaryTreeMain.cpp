#include "BinaryTreeNode.h"

int main() {
	BinaryTreeNode bt1;
	BinaryTreeNode bt2;
	BinaryTreeNode bt3;
	BinaryTreeNode bt4;
	BinaryTreeNode bt5;
	BinaryTreeNode bt6;

	bt1.SetData(1);
	bt2.SetData(2);
	bt3.SetData(3);
	bt4.SetData(4);
	bt5.SetData(5);
	bt6.SetData(6);

	bt1.SetLeftSubTree(&bt2);
	bt1.SetRightSubTree(&bt3);
	bt2.SetLeftSubTree(&bt4);
	bt2.SetRightSubTree(&bt5);
	bt3.SetRightSubTree(&bt6);

	bt1.InorderTraverse();

	return 0;
}