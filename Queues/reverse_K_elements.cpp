//reverse first 2 elements
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int k =2;
    stack<int>st;

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //output
    while(q.size()>0){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
    }
    
    for(int i=0;i<=k;i++){   //pushed value in stack
       int x = q.front();
       st.push(x);
       q.pop();
    }
    while(st.size()>0){    //pushing value in queue from stack and value reversed
        q.push(st.top());
        st.pop();
    }

    int n = q.size();
    for(int i=1;i<=(n-k);i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    
    //output
    while(q.size()>0){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
    }
}