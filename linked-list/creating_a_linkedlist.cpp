#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;

    Node (int d){
        data = d;
        next = NULL;
    }
};

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;

    return 0;
}