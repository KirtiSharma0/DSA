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
    Node* d = new Node(8); 
    Node* e = new Node(9); 
    Node* f = new Node(2); 

    Node* slow = head;
    Node* fast = head;

    while(fast->next == NULL ){
        slow = slow->next;
        fast = fast->next->next;
    }
    //when slow stops
    cout<<slow<<"Mid point";
    
    return 0;

}
