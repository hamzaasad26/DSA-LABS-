using namespace std;
#include <iostream>
#include <cmath>


class point
{
private :
	int x, y;

public:

	//para cnstructor 
	point(int x, int y) : x(x), y(y)
	{}


	//copy constructors
	point(point& other)
	{
		x = other.x;
		y = other.y;
	}


	int getx()
	{
		return x;

	}

	int gety()

	{
		return y;
	}

	void setx(int new_x)
	{
		x = new_x;
	}

	void sety(int new_y)
	{
		y = new_y;
	}



	int distance(point other)
	{
		//dis = sqrt((x2-x1)^2 + (y2 - y1)^2)
		return sqrt(pow((x - other.x), 2) + pow((y - other.y), 2));
	}


};


int main()
{
	point p1(1, 2);
	point p2(4, 6);

	int dist = p1.distance(p2);
	cout << "Distance between points: " << dist << endl;

	return 0;
}
