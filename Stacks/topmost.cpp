#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<st.top()<<endl;  //to find topmost element
    
    st.pop();
    st.pop(); //two pops means removing two elements

    cout<<st.top(); //after removing two elements
}