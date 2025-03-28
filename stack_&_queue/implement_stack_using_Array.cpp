#include <bits/stdc++.h>
using namespace std;

class Stack_class {
private:
    int *arr;
    int cap;
    int topidx;

public:
    // Constructor
    Stack_class(int size) {
        arr = new int[size];
        cap = size;
        topidx = -1;
    }

    // Destructor
    ~Stack_class() {
        delete[] arr;
    }

    // Function declarations
    void push_fun(int val);
    void pop_fun();
    int top_fun();
    bool isEmpty_fun();
    int size_fun();
};

// Push an element onto the stack
void Stack_class::push_fun(int val) {
    if (topidx == cap - 1) {
        cout << "Stack is full" << endl;
        return;
    }
    arr[++topidx] = val;
}

// Pop an element from the stack
void Stack_class::pop_fun() {
    if (topidx == -1) {
        cout << "Stack is empty  \n";
        return;
    }
    --topidx;
}

// Get the top element of the stack
int Stack_class::top_fun() {
    if (topidx == -1) {
        cout << "Stack is empty  " ;
        return -1;
    }
    return arr[topidx];
}

// Check if the stack is empty
bool Stack_class::isEmpty_fun() {
    return topidx == -1;
}

// Get the size of the stack
int Stack_class::size_fun() {
    return topidx + 1;
}

// Usage example
int main() {
    int n = 5;
    Stack_class st(n);

    // Manually pushing elements onto the stack
    st.push_fun(10);
    st.push_fun(20);
    st.push_fun(30);
    st.push_fun(40);
    st.push_fun(50);
    cout << "Elements in the stack from top to bottom:" << endl;
    while (!st.isEmpty_fun()) {
        cout << st.top_fun() << " ";
        st.pop_fun();
    }
    cout << endl;
    
    cout<<"Before poping element"<<st.top_fun()<<endl;//stack is empty ,-1
    st.pop_fun();//stack is empty
    cout<<"after poping ele "<<st.top_fun()<<endl;//stack is empty ,-1

    cout << "Elements in the stack from top to bottom:" << endl;
    while (!st.isEmpty_fun()) {
        cout << st.top_fun() << " ";
        st.pop_fun();
    }
    cout << endl;

    return 0;
}
