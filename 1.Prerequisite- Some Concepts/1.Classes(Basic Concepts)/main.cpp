#include<iostream>
using namespace std;
/*
Class: A class in C++ is the building block, that leads to Object-Oriented programming.
It is a user-defined data type, which holds its own data members and member functions,
which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.
For Example: Consider the Class of Cars. There may be many cars with different names and
brand but all of them will share some common properties like all of them will have 4 wheels,
Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

=> A Class is a user defined data-type which has data members and member functions.
=> Data members are the data variables and member functions are the functions used
   to manipulate these variables and together these data members and member functions
   defines the properties and behavior of the objects in a Class.
=> In the above example of class Car, the data member will be speed limit, mileage etc
   and member functions can be apply brakes, increase speed etc.
*/

class Student{
    /*
    Access specifier: Can be public,private or protected
    Public can be used from anywhere in the file while private memebers can be accessed within class only
    We will check Protected members some other day
    */
    public:
        int marks;
        float gpa;
};

int main(){
    /*
        Declaring Objects: When a class is defined, only the specification for the object is defined;
        no memory or storage is allocated. To use the data and access functions defined in the class,
        you need to create objects.
    */
    Student usman;
    /*
     Dot(.) is used to access the public members of the class outside class,
     Let's assign value to the `num` data memeber of class -> 20
    */
    usman.marks = 200;
    usman.gpa = 3.0;
    /*
        Let's Print the values now
    */
    cout << "Marks= " << usman.marks << " GPA=" << usman.gpa <<endl;
    // We can repeat the above system for every object
    Student omar;

    omar.marks = 100;
    omar.gpa = 2.5;
    cout << "Marks= " << omar.marks << " GPA=" << omar.gpa <<endl;
    return 0;
}
