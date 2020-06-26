#include <iostream>

using namespace std;

class Mother
{
	public:
		void display()
		{
			cout << "\n This is Mother ";
		}
};

class Daughter
{
	public:
		void display()
		{
			cout << "\n This is Daughter ";
		}
};

int main()
{
	Daughter d;
	d.display();
	return 0;
}
