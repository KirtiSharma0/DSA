#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(4);
    Node* a = new Node(5);
    Node* b = new Node(6);
    Node* c = new Node(7); 
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
    }
    return 0;

}
