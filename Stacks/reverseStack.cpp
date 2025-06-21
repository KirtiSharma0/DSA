//using two stacks

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(60);
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
     
    stack<int>gt;
    stack<int>rt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop(); 
    }
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    //now printing st values in rev order
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
     
}