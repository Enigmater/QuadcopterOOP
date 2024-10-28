#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point() { x = 0; y = 0; }
	Point(int x, int y) { this->x = x; this->y = y; }
	void SetX(int x) { this->x = x; }
	void SetY(int y) { this->y = y; }
	int GetX() { return x; }
	int GetY() { return y; }
};