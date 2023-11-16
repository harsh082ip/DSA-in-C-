#include<iostream>
using namespace std;

class BubbleSort{

public:
    void sort(int arr[], int size) {
        bool swaped;
        for(int i = 0; i < size; i++) {

            swaped = false;
            for(int j = 1; j < size - i; j++) {
                if(arr[j] < arr[j-1]) {
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swaped = true;
                }
            }
            if(!swaped) {
                break;
            }
        }
    }
    void display(int arr[], int size) {
        for(int i =0 ; i< size; i++) {
        cout << arr[i] << " ";
    }
    }
};

int main() {
    BubbleSort b1;
    int arr[] = {5, 75, 94, 35, 595, 5, 9, 65, 78};
    b1.sort(arr, 9);
    b1.display(arr, 9);
}