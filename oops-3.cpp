#include<iostream>
const double pi=3.14;
using namespace std;
int area(int);
int area(int,int);
float area(float);

void display(int k)
{
	cout<<"\n\n\n The area is"<<k;
}
int main()
{
	int a=6,c=4,d=2;
	float r=5.2,s=2.4,t=4.4;
	
	area(a);//calling area (int p)
	area(c,d);//calling area(int q,int r)
	area(r);//calling area (float m)
	}
	int area(int p)
	{
		int x;
		x=p*p;
		display(x);
	}
	int area(int q,int r)
	{
		int x;
		x=q*r;
		display(x);
	}
	float area(float m)
	{
		int x;
		x=pi*m*m;
		display(x);
	}
