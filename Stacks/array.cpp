#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n = 4;
    int arr[n] = {10,20,30,40};
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    //array rev
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop(); 
    }
    //space cpx = bigO(n)
}