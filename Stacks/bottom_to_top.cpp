#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    st.push(54);
    st.push(53);
    st.push(52);
    st.push(51);
    st.push(50);
    while(st.size()>0){ 
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}