#pragma once
template<class T>
class Element
{
private:
	T object;
	Element* nextNode;
public:
	Element(T const& t) {
		object = t;
		nextNode = 0;
	}
	~Element() { if (nextNode) delete nextNode; }
	Element* Next() { return nextNode; }
	T* Get() { return &object; }
	void Push(T const& t) {
		if (nextNode) nextNode->Push(t);
		else nextNode = new Element(t);
	}
};