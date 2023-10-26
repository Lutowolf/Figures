#include <string>
#include <iostream>

using namespace std;



class Figure {
protected:
	string name = "Figure: ";
	int sides_count = 0;
public:
	Figure(){}
	int getter_sides_count() {
		return sides_count;
	}
	string get_Figure() {
		return name;
	}
	void get_ALL() {
		cout << get_Figure() << getter_sides_count() << endl;
	}
};

class Triangle:public Figure {
public:

	void triangle() {
		sides_count = 3;
		name = "Triangle: ";
		get_ALL();
	}
};

class Quadrangle :public Figure {
public:
	void quadrangle() {
		sides_count = 4;
		name = "Quadrangle: ";
		get_ALL();
	}
};


int main()
{
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
	figure.get_ALL();
	triangle.triangle();
	quadrangle.quadrangle();
}