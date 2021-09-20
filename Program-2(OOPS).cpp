#include<iostream>
using namespace std;
class xyz
{
	public:
		inline long power(int p, int s)
		{
			long i, res=1;
			for(i=1; i<=s; i++)
			res=res*p;
			return res;
		}
};
int main()
{
	xyz ob;
	int base,exponent;
	cout<<"Enter base value: ";
	cin>>base;
	cout<<"Enter exponential value:";
	cin>>exponent;
	cout<<"Result is:"<<ob.power(base,exponent);
}
