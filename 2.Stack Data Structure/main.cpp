#include "Stack.hpp"

int main(){
    // Create instance of the Class Stack
	Stack s;
	// Push 10,20,30,40,50,60,70.80,90,100
    for(int i=10; i <= 100; i += 10){
        s.push(i);
    }
    // THIS INSERTION SHOULD PRINT `STACK OVERFLOW` ERROR AS Stack is already filled by the above 10 values
    s.push(44);
    // Lets Peek the TOP VALUE
    s.peek();
    // Now let's pop the top value and Peek Again
    s.pop();
    s.peek();

    return 0;

}
