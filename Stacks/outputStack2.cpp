#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
     
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    
//output printing in normal order 
      while(st.size()>0){
        cout<<st.top();
        st.pop();
      }
     

}