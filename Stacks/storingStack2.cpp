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
    
//printing and storing in another stack
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
//putting element from temp to old stack
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}