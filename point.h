#ifndef POINT_H
#define POINT_H
class Point {
public:
	Point() = default;
	Point(const int &x, const int &y) : x(x),y(y){}
	void Print();
	void PrintCircular();
	void Clear();
	void ChangePosition(const int& x, const int &y);
	bool operator== (const Point& point) { return (point.x == x) && (point.y == y); }
	int GetX() { return x; }
	int GetY() { return y; }
private:
	int x, y;
};
#endif
