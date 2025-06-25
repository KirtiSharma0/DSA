//copy stack in new stack as same order as initial stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    stack<int>ct;  //copied stack
    while(temp.size()){
        ct.push(temp.top());
        temp.pop();
    }
    //print the copied stack
    while(ct.size()>0){
        cout<<ct.top()<<" ";
        ct.pop();
    }
}