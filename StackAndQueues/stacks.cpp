#include <iostream>
using namespace std;

class CustomStack {
private:
    static const int dEFAULT_SIZE = 10;

protected:
    int* data;
    int ptr;
    int original_size;

public:
    CustomStack() {
        ptr = -1; // Initialize the pointer to -1
        data = new int[dEFAULT_SIZE];
    }

    CustomStack(int size) {
        ptr = -1;
        data = new int[size];
        original_size = size;
    }

    bool push(int item) {
        
        if (isFull()) {
            cout << "Cannot push into the stack. It is full." << endl;
            return false;
        }
        data[++ptr] = item; // Increment ptr and then set the value
        return true;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Cannot pop from the stack. It is empty." << endl;
            return -1; // Return a default value (e.g., -1) in this case
        }
        return data[ptr--]; // Return the value at ptr and then decrement ptr
    }

    int peak() {
        if (isEmpty()) {
            cout << "Cannot peek into an empty stack." << endl;
            return -1; // Return a default value (e.g., -1) in this case
        }
        return data[ptr];
    }

    bool isEmpty() {
        return ptr == -1;
    }

    bool isFull() {
        
        return ptr == original_size - 1;
    }
};

int main() {
    CustomStack cs(4);
    cs.push(12);
    cs.push(78);
    cs.push(65);
    cs.push(92);
    cs.push(112);
    cs.push(72);
    cs.push(62);

    // cout << cs.peak() << endl;
   cout << "POP OUT" <<endl;
    cout << cs.pop() << endl;
    cout << cs.pop() << endl;
    cout << cs.pop() << endl;
    cout << cs.pop() << endl;
    // cout << cs.pop() << endl;
    // cout << cs.pop() << endl;
    // cout << cs.pop() << endl;
    // cout << cs.pop() << endl;

    return 0;
}

