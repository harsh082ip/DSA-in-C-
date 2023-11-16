#include<iostream>
using namespace std;

class CustomQueues {
private:
    static const int dEFAULT_SIZE = 10;

    
protected:
    int* data;
    int end;
    int original_size;

public:
    CustomQueues() {
        end = 0;
        data = new int[dEFAULT_SIZE];
        original_size = dEFAULT_SIZE;
    }
    CustomQueues(int size) {
        end = 0;
        data = new int[size];
        original_size = size;
    }
    bool insert(int item) {
        if(isFull()) {
            return false;
        }
        data[end] = item;
        end++;
        return true;
    }

     int remove() {
        if(isEmpty()) {
            cout<< "Queue is Empty" << endl;
            return -1;
        }
        int removed = data[0];

        //shift the element
        for(int i = 1; i < end; i++) {
            data[i-1] = data[i];
        }
        end--;
        return removed;
    }

    int front() {
        if(isEmpty()) {
            cout << "Queue is Empty";
            return -1;
        }
        return data[0];
    }

    void display() {

        for(int i = 0; i< end; i++) {
            cout << data[i] << " <- ";

        }
        cout << "END" << endl;
    }

    bool isEmpty() {
        return end == 0;
    }

    bool isFull() {
        
        return end == original_size ;
    }
};

int main() {
    CustomQueues qs(5);
    
    qs.insert(12);
    qs.insert(88);
    qs.insert(65);
    qs.insert(43);
    qs.insert(74);

    qs.display();
    cout << "Removed Item: " << qs.remove() << endl;
    cout << "Removed Item: " << qs.remove() << endl;
    cout << "Removed Item: " << qs.remove() << endl;
    cout << "Removed Item: " << qs.remove() << endl;
    cout << "Removed Item: " << qs.remove() << endl;
    cout << "Removed Item: " << qs.remove() << endl;

    qs.display();

}