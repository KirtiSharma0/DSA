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
    while(q.size()>0){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    // //print stack
     while(st.size()>0){
         cout<<st.top()<<endl;
         st.pop();
     }
}