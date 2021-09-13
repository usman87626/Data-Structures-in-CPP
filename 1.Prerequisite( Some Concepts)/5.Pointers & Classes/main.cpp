#include<iostream>
using namespace std;

/*
Just like pointers to normal variables and functions, we can have pointers to class member functions and member variables.
Let's see how this works.
*/

class Simple
{
    public:
        int a;
};

/*
Lets see some more examples
*/
class Entity {
    private:
        int x, y;
    public:
        // Constructor
        Entity(int x, int y) : x(x), y(y) { }

        int getX() { return x; }
        int getY() { return y; }
};
int main()
{
    Simple obj;
    Simple* ptr = &obj;   // Pointer of class type

    ptr->a = 5000;
    cout << "Data of Simple Class object" << endl;
    cout << obj.a << endl;
    cout << ptr->a << endl;  // Accessing member with pointer
    /*
        Learn more about new keyword here:
        https://docs.microsoft.com/en-us/cpp/cpp/new-operator-cpp?view=msvc-160
    */

    Entity *myEntity = new Entity(22,44);
    cout << "\nData of Entity Class Object:" << endl;
    // We can set values using arrow operator instead of dot operator in case of pointers
    cout << "X value of Entity= " << myEntity->getX() << endl;
    /*
    We can also use dot operator but we have to use * for it as shown in the below line of code.
    If you are not comfortable with it,
    you should revise your C++ concepts about Pointers,Constructors and new Keyword
    */
    cout << "Y value of Entity= " << (*myEntity).getX() << endl;
}
