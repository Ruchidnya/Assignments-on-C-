#include <iostream>

using namespace std;

class Shape
{
	public:
		float h;
		float w;
		float Area();
		Shape();
		Shape(float w,float h);
};

Shape::Shape(float wth,float hth)
{
	h = hth;
	w = wth;
	cout << "\n In Shape w=" << w << "h=" <<h;
}

class Triangle:public Shape
{
	public:
		Triangle(float a,float b):Shape(a,b)
		{	cout << "\n In Triangle w=" << w << "h=" <<h; }	   
		float Area()
		{
			float a = 0.5 * w * h;
			return a;
		}
};

class Rectangle:public Shape
{
	public:
		Rectangle( float a, float b ):Shape(a,b)
		{	cout << "\n In Rectangle w=" << w << "h=" <<h; }
		float Area()
		{
			float a =  w * h;
			return a;
		}
};

int main()
{
	float h,w;
	cout << "Enter the width and height = ";
	cin >> w >> h;
	
	//Shape s( w , h );
	Triangle t( w , h) ;
	Rectangle r( w , h );

	cout << "\nThe area of the Triangle is : " <<t.Area();
	cout << "\nThe area of the Rectangle is : " <<r.Area();


	return 0;
}


