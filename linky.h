#pragma once

struct Node {
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the list
    Node(int value) : data(value), next(nullptr) {}
};

class linky {
private:

    Node* head;
    Node* tail;
public:
    ~linky() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    linky() : head(nullptr), tail(nullptr) {}
    void push_front(int); // puts new node in front of list
    void push_back(int); // puts new node in back of list
    void pop_front(); // removes node in front of list
    void pop_back(); // removes node in back of list
    Node* front(); // returns front object
    Node* back(); // returns back object
    bool empty(); // returns true if list is empty
    void insert(int index, int num);
    bool remove(int index);
    int find(int item);
    void print();
};



/*push_front,
• push_back,
• pop_front,
• pop_back,
• front, back,
• empty,
• void insert(size_t index, const Item_Type& item): Insert item at position index
(starting at 0). Insert at the end if index is beyond the end of the list

• bool remove(size_t index): Remove the item at position index. Return true if
successful; return false if index is beyond the end of the list.

• size_t find(const Item_Type& item): Return the position of the first occurrence of
item if it is found. Return the size of the list if it is not found.


Q2 (10 points) Write a C++ program to implement a stack of integers using a vector with
push and pop operations.
Perform the following operations:
1) Create a stack object.
2) Check the stack is empty or not.
3) Insert some integer values onto the stack.
4) Remove an element from the stack.
4) Find the Top of the stack.
6) Find average value of the stack elements.
Submission guidelines:
1. You should have a header file and .cpp file. The header file should provide the function
declaration and .cpp file should have implementation details.
2. All the functionality of the program should be implemented as functions and methods.
3. The code should be well commented
4. Create a report (readme file) that contains instruction on how to run the code and
screen shots of the outputs
5. Upload your report and code files to GitHub.
6. Submit the GitHub link on Canvas by due date.
*/

