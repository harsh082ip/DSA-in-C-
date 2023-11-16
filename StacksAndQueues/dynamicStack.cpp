#include<iostream>
using namespace std;

class DynamicStack{
private:
    static const int dEFAULT_SIZE = 10;

protected:
    int* data;
    int ptr;
    int original_size;

public:
    DynamicStack() {
        ptr = -1;
        data = new int[dEFAULT_SIZE];
    }

    DynamicStack(int size) {
        ptr = -1;
        data = new int[size];
        original_size = size;
    }

    bool push (int item) {
        if(isFull()) {
            // cout<< "Size is here" << endl;
            // cout << sizeof(data) / sizeof(data[0]) << endl;
            // data[original_size * 2];
            // cout << sizeof(data) / sizeof(data[0]) << endl;
            int tempSize = original_size;
            original_size = original_size * 2;
            cout<< original_size << endl;
            
            
            int* temp = new int[original_size * 2];
            for(int i = 0; i< tempSize; i++) {
                temp[i] = data[i];
            }
            delete[] data;
            data = temp;
            cout << "New Size: " << original_size << endl;
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
    DynamicStack ds(1);
    ds.push(12);
    ds.push(78);
    ds.push(65);
    ds.push(92);
    ds.push(112);
    ds.push(72);
    ds.push(62);
    ds.push(12);
    ds.push(78);
    ds.push(65);
    ds.push(92);
    ds.push(112);
    ds.push(72);
    ds.push(62);

    cout << "Peaking:" << ds.peak() << endl;
   cout << "POP OUT" <<endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    cout << ds.pop() << endl;
    return 0;
}