#include <iostream>

using namespace std;

class Shapes
{
	public:
		float Area( float x )
		{
			return ( x * x );
		}
		float Area( float h , float w )
		{
			return ( 0.5 * h * w );
		}
};

int main()
{
	cout << " For a square, side length  =  ";
	int x;
	cin>>x;
	
	Shapes s;
	cout << "\n It's area will be : " << s.Area( x );

	cout << "\n For a triangle height and weight = ";
	float h,w;
	cin>>h>>w;

	cout << "\n It's area will be : " << s.Area( h , w );	
	
	return 0;

}
