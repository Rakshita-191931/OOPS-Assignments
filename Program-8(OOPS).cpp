#include<iostream>
#include<stdio.h>
using namespace std;
class shape
{
	virtual int Noofsides()=0;
};
class TRAPEZOID: shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in trapezoid is: 4 "<<endl;
	}
};
class TRIANGLE : shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in triangle is: 3"<<endl;
	}
};
class HEXAGON : shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in hexagon is: 6"<<endl;
	}
};
int main()
{
	TRAPEZOID trapezoid;
	TRIANGLE triangle;
	HEXAGON hexagon;
	trapezoid.Noofsides();
	triangle.Noofsides();
	hexagon.Noofsides();
}
