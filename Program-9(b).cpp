#include<iostream>
using namespace std;
class copy_constructor
{
    private:
    int x, y;   //data members
    
    public:
    copy_constructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    
    /* Copy constructor */
    copy_constructor (const copy_constructor &sam)
    {
        x = sam.x;
        y = sam.y;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
/* main function */
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    copy_constructor obj1(a,b);     // Normal constructor
    copy_constructor obj2 = obj1;      // Copy constructor
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}
