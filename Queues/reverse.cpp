#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    //storing queue value in stack
    stack<int>st;
    for(int i=1;i<=q.size();i++){
        int x = q.front();
        st.push(x);
        q.pop();
        q.push(x);
    }
    //print stack
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
}