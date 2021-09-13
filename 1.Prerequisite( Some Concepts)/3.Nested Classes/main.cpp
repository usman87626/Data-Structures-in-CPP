#include<iostream>
using namespace std;

/*
    In the previous code snippets, we saw some basic stuff with classes.
    NOTE: "We will only cover the topics that are needed to do the data structure stuff.
    You can learn the complete OOP or C++ in some other tutorial, this one is specially designed for Data Structures."

    So, we saw earlier how can we declare builtin datatypes within classes i.e. int,float,char,String,etc
    But you would ask, can we declare a Struct or our own data type as a data memeber
    or in simple words, someone can ask you that: 'Can you nest a class within classes as you did with for loops,if else and while loop?
    I would say : Why not ! Absolutely, we can do it in C++ and it has its own pros and cons. We call it Nested Classes.
    So, A nested class is a class which is declared in another enclosing class. A nested class is a member
    and as such has the same access rights as any other member. The members of an enclosing class have
    no special access to members of a nested class; the usual access rules shall be obeyed.
*/

 /* start of Enclosing class declaration */
class A {
   public:
       // It will act same as we did with int x, or float y.. But here we have some functions as well in our nested datatype
       // We will see it in more detail in upcoming code snippets but let's take the basic concept now
       class B {
          private:
            int num;
          public:
            void getdata(int n) {
                 num = n;
            }

            void putdata() {
                 cout<<"The number is "<<num;
            }
       };
};


int main(){
    cout<<"Nested classes in C++"<< endl;
    /* Create Object of Class B which is inside class A as obj */
    A :: B obj;
    obj.getdata(9);
    obj.putdata();
    return 0;
}
