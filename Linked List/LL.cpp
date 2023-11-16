#include<iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node* head;
    int size;

    Node() {
        head = NULL;
        size = 0;
    }

    Node(int val) {
        this->data = val;
        // this->next = NULL;
    }

    void insertAtFirst(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
        size++;
    }

    void insertAtlast(int val) {
        Node* node = new Node(val);
        if(head == NULL) {
            insertAtFirst(val);
            // return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
        size++;
    }


    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "--" ;
            temp = temp->next;
        }
        cout << "END" << endl;
        cout << size;
    }
};

int main() {
    Node* n1 = new Node();
    n1->insertAtFirst(12);
    n1->insertAtFirst(18);
    n1->insertAtFirst(95);
    n1->insertAtFirst(74);
    n1->insertAtFirst(62);
    n1->insertAtFirst(15);
    n1->insertAtlast(985);
    n1->display();
}