#include<iostream>
using namespace std;

struct Node {
        int data;
        Node* next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(2);
    Node* a = new Node(3);
    Node* b = new Node(4);
    
    head->next = a;
    a->next = b;
    b->next = NULL;

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}