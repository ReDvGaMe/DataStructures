#pragma once
#include <iostream>
using namespace std;
using Data = int;
#define ARRAY_SIZE 100

struct _node {
public:
	int data;
	_node* next = NULL;
	_node* prev = NULL;
};
using Node = _node;