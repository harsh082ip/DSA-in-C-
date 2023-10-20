#include<iostream>
#include<cmath>
using namespace std;
class Node{
public:
    int value;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        this->value = value; 
        left = NULL;
        right = NULL;
    }
    Node* root = NULL;
    Node() {}
    // int getValue(){
    //     return value;
    // }

    void insert(int value) {
        root = insert(value, root);
    }
    Node* insert(int value, Node* node) {
        if(node == NULL) {
            node = new Node(value);
        }
        if(value < node->value) {
            node->left = insert(value, node->left);
        }
        if(value > node->value) {
            node->right = insert(value, node->right);
        }
        // node->height = max(height())
        return node;
    }
    void populate(int* arr, int size) {
        for(int i = 0; i<size; i++) {
            this->insert(arr[i]);
        }
    }
    void display() {
        display(this->root, "Root Node: ");
    }
    void display(Node* node, string details) {
        if(node == NULL) {
            return;
        }
        cout << details << node->value <<endl;

        display(node->left, "Left child of " + to_string(node->value) + ": ");
        display(node->right, "Right child of " + to_string(node->value) + ": ");
    }
    bool isEmpty() {
        return root == NULL;
    }
    int heightof(Node* node) {
        if(node == NULL) {
            return -1;
        }
        return node->height;
    }
    bool balanced() {
        
    }

//     bool balanced(Node* node) {
//         if(node == NULL) {
//             return true;
//         }
//         return abs(height(node->left) - height(node->right)) <= 1 && balanced(node->left) && balanced(node->right);
//     }
//     int abs (int n) {
//   return (n < 0) ? -n : n;
// }
    void preOrder() {
        preOrder(root);
    }
    void preOrder(Node* node) {
        if(node == NULL) {
            return;
        }
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
    void inOrder() {
        inOrder(root);
    }
    void inOrder(Node* node) {
        if(node == NULL) {
            return;
        }
        
        inOrder(node->left);
cout << node->value << " ";
        inOrder(node->right);
    }

    void postOrder() {
        postOrder(root);
    }
    void postOrder(Node* node) {
        if(node == NULL) {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
};

int main() {
    int arr[] = { 5, 2, 7, 1, 4, 6, 9, 8, 3, 10 };  
    Node* n1 = new Node();
    n1->populate(arr, 10);
    n1->display();
    n1->preOrder();
    cout << endl;
    n1->inOrder();
    cout << endl;
    n1->postOrder();
    cout << endl;
}