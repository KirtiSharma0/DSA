#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    Node *a = new Node(3);
    Node *b = new Node(4);
    Node *c = new Node(5);
    a->next = b;
    b->next = c;

    //current 3 4 5    new = 0      op = 3 4 0 5
    int n = 0;
    Node *temp = a;
    while(temp != nullptr){
        n++;
        temp = temp->next;
    }
    temp = a;

    Node *d = new Node(0);
    //temp will move n/2 times
    for(int i=0; i<n/2;i++){
      temp = temp->next;      //moves forward till mid position
    }
    temp->next = d;
    d->next = c;

    //print final
    Node *temp2 = a;
    while(temp2 != nullptr){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    return 0;
}