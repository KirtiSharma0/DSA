//push 70 at bottom element of stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //empty st in rt
    stack<int>rt;
    while(st.size()>0){
        rt.push(st.top());
        st.pop();
    }
    //now st is emptied so push 70 
    st.push(70);
    while(rt.size()>0){    //now push rt into st
        st.push(rt.top());
        rt.pop();
    }
    //print updated stack
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}