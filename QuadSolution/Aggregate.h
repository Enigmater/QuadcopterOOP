#pragma once
#include "Element.h"
#include "Iterator.h"

template<class T>
class Aggregate
{
public:
	typedef Element<T> Node;
	typedef SuperIterator<Node, T> MyIter;
private:
	Node* root;
public:
	Aggregate() { root = 0; }
	~Aggregate() { if (root) delete root; }
	MyIter Begin() { return MyIter(root); }
	MyIter End() { return MyIter(0); }
	void Push(T const& t) {
		if (root) root->Push(t);
		else root = new Node(t);
	}
};