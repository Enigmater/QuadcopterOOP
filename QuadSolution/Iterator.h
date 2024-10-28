#pragma once
template<class Node, class T>
class SuperIterator
{
private:
	Node* nodePtr;
public:
	SuperIterator(Node* nodePtr) { this->nodePtr = nodePtr; }
	T* Next() { return nodePtr->Get(); }
	void operator++ () { nodePtr = nodePtr->Next(); }
	SuperIterator operator++ (int) {
		SuperIterator iter(*this);
		++(*this);
		return iter;
	}
	bool operator == (SuperIterator const& i) { return nodePtr == i.nodePtr; }
	bool operator != (SuperIterator const& i) { return !(*this == i); }
};
