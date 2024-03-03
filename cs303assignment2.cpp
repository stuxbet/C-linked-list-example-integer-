#include "linky.h";
#include "stack.h";
#include <iostream>
using namespace std;

int main() {
    linky myList = linky();

    if (myList.empty() == true) { cout << "empty" << endl; }

    myList.push_front(7);
    myList.push_front(6);
    myList.push_front(5);

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    myList.pop_front();
    myList.pop_back();
    myList.insert(2, 55);
    bool wrked = myList.remove(2);
    cout << myList.find(1) << " index" << endl;
    if (myList.empty() == false) { cout << "full" << endl; }
    myList.print();


    // showing off stack now
    stacky myStack = stacky();

    if (myStack.empty() == true) { cout << "empty" << endl; }

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.pop();
    cout<<"top is :" << myStack.top() <<endl ;

    if (myStack.empty() == false) { cout << "false" << endl; }

    cout << "average is :" << myStack.average() << endl;



    return 0;
}
