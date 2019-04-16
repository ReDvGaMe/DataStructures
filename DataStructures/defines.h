#pragma once
#include <iostream>
using namespace std;
using Data = int;
#define ARRAY_SIZE 100

struct _node {
public:
	Data data;
	_node* next = NULL;
	_node* prev = NULL;
};
using Node = _node;

struct BTreeNode {
public:
	Data data;
	struct BTreeNode* left;
	struct BTreeNode* right;
};