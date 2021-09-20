#include <iostream>
using namespace std;

class Person {
   private:
    int age;

   public:
    // 1. Constructor with no arguments
    Person() {
        age = 24;
    }

    // 2. Constructor with an argument
    Person(int a) {
        age = a;
    }
    int getAge()
    {
    	return age;
    }
    int constructor(int a, int b)
    {
    	
        return age;
    }
};

int main() {
    Person person1, person2(36);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;

    return 0;
}
