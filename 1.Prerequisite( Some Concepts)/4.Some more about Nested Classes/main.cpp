#include<iostream>
using namespace std;

/*
    So, we saw what are nested classes and we coded a simple nested class in public access modifier.
    Let's give our final thoughts on it now.
*/

/**/
class A {
    private:
        class B{
            private:
                // Lets declare an integer x as private data member of nested class
                int x;
            public:
                // Method to set Value of 'int x' in Class B
                void setData(int val){
                    x = val;
                }
                // Method to get Value of 'int x' in Class B
                int getData(){
                    return x;
                }
        };
        // Let's Declare datatypes now
        int y;
        /*
        We have to create an object of the class to declare it. Why are we doing it?
        As we saw earlier, classes are just blueprints, The syntax class A {}; is used to declare it and declaration will not create a class
        neither it will use any memory. For example, in most of our programs, we use int x or int y or float z, so these are stored in
        the memory, but the declaration of int,float or char was already there in some header file of C++ created by Developers of C++ language
        But program allocates memory when we declare int,float or char. In the same way, we have to declare objects to create an object.
        So we are declaring an object called `obj` from our Nested Class B.
        */
        B obj;
    public:
        /*
            Now the Nested Class i.e. B is a private member, so are methods declared in it i.e. setData() and getData()
            But you would say that Class B has two methods which are public,so we can access it in main() function.
            But you are wrong, those methods are public for Class A. In simple words, public members can be used outside
            class declarations, so Class A is outside the class B and the access modifier i.e. `private` of class A will
            lock the members of Class B although they were public, so we can use public members in Class A but not the
            private members of Class B in Class A. Read it again and again & try it, I guarantee you would understand it.
            So, lets use public memebers of Class B to set private members and use Class A in our main function
        */
        void setValues(int val_for_B,int val_for_A){
            /*
                To set value in `x` of Class B, we have to use public method which is setData, but as you know that we cannot use anything from
                class without defining the objects, so that is the reason, we created object of Class B above i.e. `B obj`
                We will use that object to set values in Class B.
            */
            obj.setData(val_for_B);
            // We can set Values in data memebers of Class A simply as we were doing it previously
            y = val_for_A;
        }

        void getValues(){
                /*
                We used object of Class B to set Value, we will use that again to get the value and show on the console.
                */
                cout << "Class B Value = " << obj.getData() <<  endl;
                /*
                Similarly, we will get Value of y from our Class A(outer class)
                */
                cout << "Class A Value = " << y << endl;
        }


};


int main(){
    // Lets declare object of class A
    A obj1;
    // Sending values to Class A method
    obj1.setValues(10,20);
    // Getting values
    obj1.getValues();
    return 0;
}
