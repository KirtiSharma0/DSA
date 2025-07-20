//remove elements at even positions
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n = 5;
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    int i =0;
    for(int i=0;i<n;i++){
        if(i%2==0){
        q.pop();
       }
       else {  //odd index
        int x =q.front();
        q.pop();
        q.push(x);
       }
    }
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}