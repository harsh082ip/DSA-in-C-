#include<iostream>
using namespace std;
class Node{
public:
    Node* head;
    Node* prev;
    Node* next;
    int data;
    int size;

    Node() {
        head = NULL;
        prev = NULL;
        size = 0;
    }

    Node(int val) {
        this->data = val;
        this->head = NULL;
        this->prev = NULL;
    }

    void insert(int val) {
        Node* node = new Node(val);
        node->next = head;
        while(head != NULL) {
            head->prev = node;
        }
        
    }

    void insertAtFirst(int val) {
        Node* node = new Node(val);
        node->next = head;
        if(head != NULL) {
            head->prev = node;
        }
        head = node;
    size++;
    }

    void insert(int val, int index) {
        Node* temp = head;
        Node* node = new Node(val);
        for(int i = 1; i<index; i++) {
            temp = temp->next;
        }
        node->next = temp->next;
        node->prev = temp;
        temp->next = node;
        node->next = temp->next->next;
        if(index==0){
            insertAtFirst(val);
        }
        if(index==size-1){
            // (val);
        }
        size++;
    }
    void deleteFirst(){
        head=head->next;
    }

    void insertAtLast(int val) {

        Node* temp = head;
        Node* node = new Node(val);
        while(temp->next != NULL) {
            temp = temp->next;
        }
        node->prev = temp;
        size++; 
    }

     void display(){
        Node *temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
};

   int main(){
        Node *node= new Node();
        node->insertAtFirst(12);
        node->insertAtFirst(2);
        node->insertAtFirst(89);
        node->insertAtFirst(25);
        node->insertAtFirst(41);
        node->insertAtLast(97);
        // node->insertAfter(10, 70);
        node->deleteFirst();
        // node->deleteLast();
        node->display();
    }