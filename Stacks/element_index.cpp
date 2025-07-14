//push 100 at 2nd index of stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    //empty st in rt till index value more than give index
    stack<int>rt;
    int index = 2; //to put value stack
    while(st.size()>index){
        rt.push(st.top());
        st.pop();
    }
    st.push(100);
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }

    //print updated stack
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}