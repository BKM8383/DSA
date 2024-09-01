#include <iostream>
using namespace std;

class TwoStacks {
private:
    int* arr;
    int size;
    int top1, top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    ~TwoStacks() {
        delete[] arr;
    }

    bool isEmpty1() {
        return top1 == -1;
    }

    bool isEmpty2() {
        return top2 == size;
    }

    bool isFull() {
        return top1 == top2 - 1;
    }

    void push1(int x) {
        if (!isFull()) {
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }

    void push2(int x) {
        if (!isFull()) {
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }

    int pop1() {
        if (!isEmpty1()) {
            return arr[top1--];
        } else {
            cout << "Stack 1 is Empty!" << endl;
            return -1;
        }
    }

    int pop2() {
        if (!isEmpty2()) {
            return arr[top2++];
        } else {
            cout << "Stack 2 is Empty!" << endl;
            return -1;
        }
    }

    int topStack1() {
        if (!isEmpty1()) {
            return arr[top1];
        } else {
            cout << "Stack 1 is Empty!" << endl;
            return -1;
        }
    }

    int topStack2() {
        if (!isEmpty2()) {
            return arr[top2];
        } else {
            cout << "Stack 2 is Empty!" << endl;
            return -1;
        }
    }

    int getSize() {
        return size;
    }
};

int main() {
    TwoStacks ts(5);
    cout << ts.pop2() << endl;
    ts.push1(10);
    ts.push1(20);
    cout << ts.pop1() << endl;
    ts.push2(30);
    ts.push2(40);
    ts.push2(50);
    ts.push2(60);
    cout << ts.pop1() << endl;
    ts.push1(70);
    cout << ts.isEmpty1() << endl;
    cout << ts.isFull() << endl;
    cout << ts.topStack1() << endl;
    cout << ts.topStack2() << endl;
    cout << ts.getSize() << endl;

    return 0;
}
