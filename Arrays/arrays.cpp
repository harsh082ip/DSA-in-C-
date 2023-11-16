#include<iostream>
using namespace std;
class Arrays{
public:
    int size;
    int* arr;

    Arrays(int s) {
        arr = new int[s];
        size = s;
    }

    void inputVal() {
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void insertAtIndex(int index, int val) {
        int* temp = new int[size + 1];
        temp[index] = val;
        for(int i = 0; i< index; i++) {
            temp[i] = arr[i];
        }
        for(int i = index ; i< size; i++) {
            temp[i+1] = arr[i];
        }
        cout << "--------Temp--------"<< endl;
        for(int i = 0; i< size; i++) {
            cout << temp[i] << " ";
        }
        cout << endl;
        delete[] arr;
        arr= temp;
        size++;
    }

    void insertAtIn(int index, int val) {
    int* temp = new int[size + 1];

    for (int i = 0; i < index; i++) {
        temp[i] = arr[i];
    }

    temp[index] = val;

    for (int i = index; i < size; i++) {
        temp[i + 1] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size++;
}

    void display() {
        for(int i = 0; i< size; i++) {
            cout << arr[i] << " ";
        }
    }
        
};

int main() {
    Arrays a1(7);
    a1.inputVal();
    a1.insertAtIndex(3, 19);
    a1.display();
}