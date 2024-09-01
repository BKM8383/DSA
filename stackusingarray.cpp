#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

int stack[MAX_SIZE]; 
int top = -1; 

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == MAX_SIZE - 1);
}

void push(int element) {
    if (isFull()) {
        cout << "Stack Overflow" << element << endl;
        return;
    }
    stack[++top] = element;
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return;
    }
    --top;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; --i) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    cout << "Top element: " << peek() << endl; 

    return 0;
}