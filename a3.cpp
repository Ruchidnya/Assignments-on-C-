#include <iostream>
#include <string>
using namespace std;

class Animal
{
	public:
		string name;
		int age;
		void SetValue( string n , int a );
		void GetInfo();
};

class Zebra : public Animal
{
	public:
		string place = "jungle";
		void GetInfo();
		void SetValue( string n , int a )
		{
			name=n;
			age=a;
		}

};

class Dolphine : public Animal
{
	public:
		string place = "sea";
		void GetInfo();
		void SetValue( string n , int a )
		{
			name=n;
			age=a;
		}


};

void Zebra :: GetInfo()
{
	cout << "\n Name : " << name << " Age : " << age << " Place : " << place;
}

void Dolphine :: GetInfo()
{
	cout << "\n Name : " << name << " Age : " << age << " Place : " << place;
}

int main()
{
	Zebra z;
	z.SetValue( "Zebra" , 10 );
	z.GetInfo();

	Dolphine d;
	d.SetValue( "Dolphine" , 5 );
	d.GetInfo();

	return 0;
}


