#include <iostream> 

using namespace std; 

  
//base class
class parent
{ 

    private: 

        int a, b; 

  

    public: 

      


        void set_values(int X, int Y) 

        { 

            a = X; 

            b = Y;

        } 

          

        void display() 

        { 

            cout<<"a = " <<a << endl; 

            cout<<"b = " << b << endl; 

        } 
};
class children: public parent //inheritence
{
	private:
	int x,y;

};
  

  

int main()  
{ 
int a,b,x,y;
    // object creation

    parent obj1;
    children obj2;
    
    
    
    
    cout<<endl<<"enter values :";
    cin>>a>>b;
    //data abstraction

    obj1.set_values(a,b); 

    obj1.display(); 
  
    cout<<endl;
    
    cout<<endl<<"enter values :";
    cin>>x>>y;
    
    obj2.set_values(x,y);
    obj2.display();

    return 0; 
}
