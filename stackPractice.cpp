// LIFO- Last in first out. 
//Think of an undo button or the front/back buttons in browser
// functions to use with stacks empty, size, top, push, pop
#include <iostream>
#include <stack>
using namespace std;

//asks for top element, displays it and then pops it on repeat while not empty
void print(stack<int>number) {
    while (!number.empty()) {
        cout << number.top() << endl;
        number.pop();
    }
}

int main()
{
    stack<int>numbersStack;

    numbersStack.push(12);
    numbersStack.push(2);
    numbersStack.push(42);

    //numbersStack.pop();

    if (numbersStack.empty()) {
        cout << "Stack is empty\n";
    }
    else {
        cout << "Stack is not empty\n";
        }
    cout << "Stack size is " << numbersStack.size() << endl;

    print(numbersStack);
}
