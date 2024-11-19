#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node * next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node *&head, int data){
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail, int data){
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void printLL(Node * &head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}


int main(){

    // Node *node1 = new Node(10);
    // Node *head = node1;

    // printLL(head);


    // insertAtHead(head, 29);
    // printLL(head);

    // tail insertion

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 20);
    insertAtTail(tail, 22);
    printLL(head);
  
    
    return 0;
}