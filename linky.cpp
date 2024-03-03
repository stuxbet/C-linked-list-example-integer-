#include "linky.h";
#include <iostream>
using namespace std;



void linky::print() {
    Node* current = head;
    while (current) {
        cout << current->data << " " << "printed" << endl;
        current = current->next;
    }
    cout << endl;
}

void linky::push_front(int num) {
    Node* newNode = new Node(num);
    if (!head) {
        head = tail = newNode;
        return;
    }
    Node* tempp = head;
    head = newNode;
    head->next = tempp;
} 
void linky::push_back(int num) {
    Node* newNode = new Node(num);
    if (!head) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
} 

void linky::pop_front() {
    Node* tempp = head->next;
    delete head;
    head = tempp;
} 


void linky::pop_back() {
    if (!head) {
        return;
    }
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    Node* current = head;
    while (current->next != tail) {
        current = current->next;
    }
    delete tail;
    tail = current; // Update tail to point to the new last node
    tail->next = nullptr;

}

Node* linky::front() { return head; }
Node* linky::back() { return tail; }

bool linky::empty() {
    if (!head) { return true; }
    if (head == nullptr) { return true; }
    else { return false; }

 }

void linky::insert(int index, int num) {
    if (index < 0) {
        cout<<"cant do that mane >:)"<<endl ;
        return;
    }
    Node* newNode = new Node(num);
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    for (int i = 0; i < index - 1 && current; ++i) {
        current = current->next;
    }
    if (!current) {
        delete newNode;
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

bool linky::remove(int index) {
        if (index < 0) {
            cout << "cant do that mane >:)" << endl;
            return false;
        }
        if (index == 0) {
            pop_front();
            return true;
        }
        Node* current = head;
        for (int i = 0; i < index - 1 && current; ++i) {
            current = current->next;
        }
        if (!current) {
            return false;
        }
        if (current == tail) {
            pop_back();
            return true;
        }
        
        Node* tempp = current->next;
        current->next = current->next->next;
        delete tempp;
}

int linky::find(int item) { 
    Node* current = head;
    int index = 0;
    while (current) {
        if (current->data == item) {
            return index; // Value found
        }
        current = current->next;
        index++;
    }
    return -1; // Value not found
}
