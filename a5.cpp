#include  <iostream>

using namespace std;

class Shape
{
	public:
		virtual void Area(float h, float w)
		{
			cout << "\n Area in Parent class is : " << ( h * w );
		}
};

class Triangle : public Shape
{
	public:
		void Area( float h , float w )
		{

			cout << "\n Area in Child class is : " << ( h * w );
		}
};

int main()
{
	Triangle t;
	t.Area(4,6);
}

