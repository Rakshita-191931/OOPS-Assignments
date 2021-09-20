#include <iostream>
using namespace std;
class ParamA {
private:
int b, c;
public:
ParamA (int b1, int c1)
{
b = b1;
c = c1;
}
int getX ()
{
return b;
}
int getY ()
{
return c;
}
};
int main ()
{
	int b,c;
	cout<<"enter b and c";
	cin>>b>>c;;
ParamA p1(b,c);
cout << "p1.b = " << p1. getX() << ", p1.c = " << p1.getY();
return 0;
}
