#include<iostream>
using namespace std;


/* STACK IN C++ */
/*
    A stack is similar to real-life stack or a pile of things that we stack one above the other.
    Stack is a linear data structure which follows a particular order in which the operations are performed.
    The order may be LIFO(Last In First Out) or FILO(First In Last Out).
    Mainly the following three basic operations are performed in the stack:
     - Push:        Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.

     - Pop:         Removes an item from the stack. The items are popped in the reversed order in which they are pushed.
                    If the stack is empty, then it is said to be an Underflow condition.

     - Peek or Top: Returns top element of stack.

     Let's learn it by doing
*/


//Let's Define the maximum size of Stack as `10` using C++ Macros
#define MAX 10

/*
Creating Class named Stack to implement our first data structure(Abstract Data Type)
We will not use any pointer to keep it basic.
We will implement it using pointers and dynamic memory allocation in upcoming lectures.
If you don't know what does it mean to be static,
Let me tell it to you: In simple words,It doesn’t grow and shrink depending on needs at
runtime(once MAX is defined using macros as 10,you cannot change it when program is
        executed and user need 20 values to store)
On the other hand, dynamic can grow or shrink at runtime, which we will see in `Dynamic-Stack.hpp` using pointers.
*/
class Stack
{
    private:
        /*
         data:    An array of size `MAX` that we defined using MACRO above.
                  You  can also declare it as `data[10] without using #define MACRO.
                  So, it indicates that when user push() 10 values, the stack should be full.
        */
        int data[MAX]; // Maximum size of Stack
        /*
         TOP:   A variable that will store the current location of Stack
                Let's say you stacked 5 books on one another, in this scenario TOP variable will store
                the last book that you kept on the top i.e. TOP = 5
        */
        int TOP;
    public:
        /*
            CONSTRUCTOR:    The first method that will be executed when an object of Stack class is created.
                            We can do our important initialization in constructor.
                            That's what it's created for
        */
        Stack(){
            /*
                WE WILL SET TOP to -1 which will indicate that the stack is empty
                We can also initialize it by 0, it doesn't matter, Just understand what you are doing.
            */
            TOP = -1;
        }
        /*
            LETS DEFINE OUR PUSH FUNCTION NOW. AS WE SAW EARLIER, DATA INSERTION IN STACK IS CALLED PUSH.
            It's Just a fancy term which does Insertion of data behind the scenes.
            RETURN VALUES:  It will return True if the value is inserted successfully & return false if it's not inserted.
            ARGUMENTS:      This method takes one value as an argument which will be stacked into the last
        */
        bool push(int x){
            /*
                If VALUE OF TOP is greater or equal to MAX,it means that we cannot insert more values into Stack.
                (MAX-1) refers to the fact that the indexing of arrays start from 0.

            */
            if (TOP >= (MAX - 1)) {
                // Print that the Stack is full and return boolean value => FALSE
                cout << "Stack Overflow" << endl;
                return false;
            }
            // IF ABOVE CONDITION IS NOT TRUE, IT MeANS THAT THERE IS A SPACE TO ADD THE VALUE SENT BY The USER from main()
            else {
                /*
                    So the First step should be => To increment value of TOP as it was initialized by -1.
                    If we initialize it by 0 in constructor, then its not necessary to increment it first before inserting
                    value at that position, now you got the point of Constructor initialization.

                    You can do it in two lines as:
                        TOP = TOP + 1;
                        data[TOP] = x
                    OR SIMPLY in one line as:
                        data[++TOP] = x;
                */
                data[++TOP] = x;
                // PRINTING THE SUCCESS MESSAGE
                cout << x << " Pushed Successfully into the Stack" << endl;
                // RETURN TRUE => SUCCESS
                return true;
            }

        }
        /*
            Let's create pop() now which simply removes the top value from the Stack.
        */
        void pop(){
            /*
                Maybe Stack is already empty, so we should check it before popping a value. But which variable will
                tell us the status of the Stack as full or empty??
                Definitely => TOP will indicate the current status of Stack
                IF TOP = -1, it means that there is nothing to remove from stack
                So let's use this condition in IF statement as if TOP is less than 0.
                You can also use it as if TOP == -1, that's upto you. Just understand what you're doing & how it should be.
            */
            if (TOP < 0) {
                // PRINT MESSAGE THAT STACK IS ALREADY EMPTY(IT HAS NOTHING TO REMOVE)
                cout << "Stack Underflow" << endl;

            }
            /*
                If it's not empty, decrease value of TOP by one, which simply means deletion but its not the recommended way.
                We will see the recommended way using pointers in upcoming code snippets but for the sake of understanding
                do it as it is.
                To make it more understandable, let's remind the Book examples. You stacked 5 books on one another
                TOP is incremented on every book placement and finally TOP = 4 after the 5th book is placed(as indexing starts from 0)
                Now, if you put a new book on top, TOP will be incremented to 5 similarly if you want to pickup one book,
                what should happen to the value to TOP?? Don't you think it should be decreased by 1 so that the next placement
                of book should be on right position. That is the theory behind decrement by 1
            */
            else {
                //Let's print the value first before removing it
                cout << data[TOP] << " Popped out Successfully" << endl;
                // Remove it now
                TOP = TOP - 1;
            }
        }

        /*
         Let's define our Last method which is Peek().
         Peek or Top:   Returns top element of stack.

        */
        void peek(){
            // IF TOP == -1 or less than 0, it means Stack is already empty, Nothing to peek
            if (TOP < 0) {
                // PRINTING THE MESSAGE
                cout << "Stack is Empty";
            }
            /*
                If Stack is not empty, we have to print the value on Top of the stack.
                Only TOP variable can tell us the about the value inserted previously,
                so let's ask TOP.
            */
            else {
                int value = data[TOP];
                cout << value << " is the Peek value" << endl;
            }
        }

};
