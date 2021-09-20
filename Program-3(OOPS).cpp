#include<iostream>
using namespace std;
void power(double base,int exponent =2)
{
	long double power=1;
	int i;
	
	/* multiply base exeponent times*/
	for(i=0;i<=exponent;i++)
	{
		power=power*base;
	}
	cout<<"\n"<<base<<"\t"<<exponent<<"\t"<<power;
}
int main()
{
	int e;
	double b;
	/* inout base and exponent from user */
	cout<<"enter base:";
	cin>>b;
	
	cout<<"enter exponent:";
	cin>>e;
	power(b,e);
	power(b);
	
	return 0;
}
