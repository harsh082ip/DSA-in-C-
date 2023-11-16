#include<iostream>
using namespace std;

class Heaps{

public:
    int* heap;
    int defaultSize = 10;
    int org_size;
    int ind;
    Heaps() {
        heap = new int[defaultSize];
        org_size = defaultSize;
        ind = 0;
    }

    Heaps(int size) {
        heap = new int[size];
        org_size = size;
        ind = 0;
    } 

    void swap(int first, int second) {
        int temp = heap[first];
        heap[first] = heap[second];
        heap[second] = temp;
    }

    int parent(int index) {
        return (index - 1) / 2;
    }

    int left(int index) {
        return index * 2 + 1;
    }

    int right(int index) {
        return index * 2 + 2;
    }

    void insert(int value) {
        if(ind == org_size - 1) {}
        heap[ind] = value;
        ind++;
        upheap(org_size - 1);
    }

    void upheap(int index) {
        if(index == 0) {
            return;
        }
        int p = parent(index);

        // if current item is smaller than parent
        if(heap[index] < heap[p]) {
            swap(index, p);
            upheap(p);
        }
    }

    int remove() {
        if (sizeof(heap) / sizeof(heap[0]) == 0) {
        std::cout << "Can't remove from an empty heap" << std::endl;
    }

    int temp = heap[0];
    int last = heap[org_size - 1];
    org_size--;
    
    if (sizeof(heap) / sizeof(heap[0]) != 0) {
        heap[0] = heap[last];
        downheap(0);
    }
    return temp;
    }

    void downheap(int index) {
        int min = index;
        int l = left(index);
        int r = right(index);

        if(heap[min] > heap[l]) {
            min = index;
        }
        if(heap[min] > heap[r]) {
            min = index;
        }
        if(min != index) {
            swap(min, index);
            downheap(min);
        }
    }

    void display() {
        for(int i = 0; i<org_size; i++) {
            cout<<heap[i] << "-->";
        }
        cout << endl;
    }
};

int main() {
    Heaps h(6);
    h.insert(1);
    h.insert(25);
    h.insert(11);
    h.insert(12);
    h.insert(19);
    h.insert(7);
 

    
    h.display();
    cout<<h.remove() << endl;
    h.display();
    // cout<<h.remove() << endl;
    // cout<<h.remove() << endl;
}