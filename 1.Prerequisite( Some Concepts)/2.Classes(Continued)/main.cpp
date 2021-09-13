#include<iostream>
using namespace std;
/*
In the previous code snippet,
we learned about what is class and how can we define our own class in C++ using public access modifier.

In this code snippet, we will look how and why to use private access modifier so that we can start our
data structure series with all the tools needed to win that war.
*/
class Student{
    /*
    One of the main features of object-oriented programming languages such as C++ is data hiding.
    Data hiding refers to restricting access to data members of a class.
    This is to prevent other functions and classes from tampering with the class data.
    However, it is also important to make some member functions and member data accessible
    so that the hidden data can be manipulated indirectly.
    The access modifiers of C++ allows us to determine which class members are
    accessible to other classes and functions, and which are not.
    Private members can be only accessible within the class.
    Let's declare two private members and see the magic
    Now we cannot Use these via Objects as seen in the previous code snippet
    i.e.
       Student obj1;
       obj1.marks = some_value;
       It will throw an error: 'float Student::marks' is private within this context
    */
    private:
        int marks;
        float gpa;
    /*
        So proper way of using private data members is to declare some public methods to achieve Data hiding concept of OOP.
    */
    public:
        // Lets define the Setter(Method used to set Values of Marks and GPA)
        void setValues(int m, float gpa){
            marks = m;
            /*
                Now there is a problem in this case i.e. one argument name(gpa) is same as private data member name(gpa)
                To resolve this confusion we can use `this` keyword as
            */
            this->gpa = gpa;
        }

        // Now Lets Define a method to print the values
        void getValues(){
            cout << "Marks= " << marks << " and GPA= " << gpa <<endl ;;
        }
};
int main(){
    //Let us define two objects named usman and omar
    Student usman,omar;
    //To set marks and GPA of usman, we can do the following
    usman.setValues(150,3.2);
    // To set marks of omar, we can do the same as above
    omar.setValues(300,4.3);

    //Now lets print values using getValues method
    cout << "USMAN DATA:" << endl ;
    usman.getValues();
    cout << endl << "Omar DATA:" <<endl;
    omar.getValues();

    return 0;
}
